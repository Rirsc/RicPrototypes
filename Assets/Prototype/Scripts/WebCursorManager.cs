using UnityEngine;

public class WebCursorManager : MonoBehaviour
{
    [SerializeField]
    private GameObject[] _cursors;
    [SerializeField]
    private GameObject _cursorParent;
    [SerializeField]
    private GameObject _cursorRing;
    [SerializeField]
    private GameObject _defaultCursor;
    [SerializeField]
    private bool _debug = false;
    [SerializeField]
    private Transform _start;

    void FixedUpdate()
    {
        Vector3 _direction = _defaultCursor.transform.position - _start.position;
        RaycastHit hit;
        if (Physics.Raycast(_start.position, _direction, out hit, 2000))
        {
            if (hit.collider != null && hit.collider.gameObject.name == "Web")
            {
                if (_debug)
                {
                    Debug.DrawRay(_start.position, _direction * hit.distance,
                        Color.green);
                    Debug.Log("Did Hit");
                }
                _cursorParent.SetActive(true);
                _cursorParent.transform.position = _defaultCursor.transform.position;
                _cursorParent.transform.rotation = _defaultCursor.transform.rotation;
                _cursorRing.GetComponent<MeshRenderer>().enabled = false;
            }
            else
            {
                if (_debug)
                {
                    Debug.DrawRay(_start.position, _direction * 2000, Color.red);
                    Debug.Log("Did not Hit");
                }
                _cursorParent.SetActive(false);
                _cursorRing.GetComponent<MeshRenderer>().enabled = true;
            }
        }
    }

    public void ChangeOpacity(float value)
    {
        for (int i = 0; i < _cursors.Length; i++)
        {
            _cursors[i].transform.GetChild(1).gameObject.GetComponent<SpriteRenderer>().color = new Color(
                _cursors[i].transform.GetChild(1).gameObject.GetComponent<SpriteRenderer>().color.r,
                _cursors[i].transform.GetChild(1).gameObject.GetComponent<SpriteRenderer>().color.b,
                _cursors[i].transform.GetChild(1).gameObject.GetComponent<SpriteRenderer>().color.g,
                value);
        }
    }

    public void ChangeScale(float value)
    {
        for (int i = 0; i < _cursors.Length; i++)
        {
            _cursors[i].transform.localScale = new Vector3(value, value, value);
        }
    }
}