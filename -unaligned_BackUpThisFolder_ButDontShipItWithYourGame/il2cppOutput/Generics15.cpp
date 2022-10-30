#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct Dict_1_tB89EADB480C62B4B28B3079B7C291AFBD3A27BE0;
struct DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9;
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A;
struct Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C;
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27;
struct Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335;
struct Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE;
struct Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503;
struct Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49;
struct Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5;
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE;
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B;
struct EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4;
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6;
struct EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E;
struct ICollection_1_t1AB5E7AA7512C5101B732371385CF057B149F3A3;
struct ICollection_1_t7BCDA9E5FD4A76E5AF6EE73237E620480B3AE555;
struct ICollection_1_tC9B15468F509008C580ED71459A502B60CE0346B;
struct ICollection_1_t2780C9AAF525D93E9DEB87362BE92706FCAD9679;
struct ICollection_1_tE495E985AB31E847FBB473C8890051B215E2F918;
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
struct ICollection_1_tAB608808814EBB9C316EF3C2C46994A780A998B0;
struct ICollection_1_t42AC1EBC209771A4A3EAAFF163DED448E2E46D02;
struct IDictionary_2_t308D96B41575DA9A6921B80416D43AD9912F6258;
struct IDictionary_2_tA2330C7C8777A06DFEF91DA17F3C4618D7F1FA63;
struct IDictionary_2_t133A5FBECEE66D0E9E6EB6A781FA3E7F871408FB;
struct IDictionary_2_t46B3C6F7917A97C3E187BF3DB73A9926DAA52C57;
struct IDictionary_2_tD56ABBCC9B514342A914A7C311860FF2855EAB82;
struct IDictionary_2_tC6A1684481413D3EFA6C7AFE1F38BA7247D82870;
struct IDictionary_2_t97813B65F4F0516809498A993559DC3233D11A08;
struct IEnumerator_1_tFD44A2DA99404B229D5546B577A47551A84AD8D9;
struct IEnumerator_1_tAA9E173D47F9A415DBE8F74E8C3F53E27F513950;
struct IEnumerator_1_t15389643D86A08B3D6122CC4CA0C2F682AE568F6;
struct IEnumerator_1_t112E932D0DEE62DAB6DB3E6A46E71D7D8D964951;
struct IEnumerator_1_tA498C8D253166055C8D4D241A57AFF18DD15E4AD;
struct IEnumerator_1_t89397429FD63ED87779235D6691E9086CDC32F8E;
struct IEnumerator_1_tD650B24FDADD4D69386BB6FD1F384464497EC011;
struct IEnumerator_1_t327FF232159D9644239A65F54312F684DB7BE375;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_t09057139BDD0714353BF93A2BEAE1A754B82D07D;
struct IEqualityComparer_1_tDACC7D28FFD11A83A9FC39CC18863F52A3E7E88F;
struct IEqualityComparer_1_t84CD58C3582484C691B22BB0E534C8ADD9B22966;
struct IEqualityComparer_1_tBA94B1B10A2ECEDAB37B478B451669BC43FA0650;
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2;
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123;
struct KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031;
struct KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000;
struct KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433;
struct KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C;
struct KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct LessOrEqual_tB9CB1D3C60EDF1D92A4F0F43C8DD1D567B2ED344;
struct List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5;
struct Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E;
struct ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4;
struct Stack_1_t27BF66C1EF60140B55713EA795B1064F2DD2F5EA;
struct Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6;
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95;
struct UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB;
struct ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688;
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F;
struct ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D;
struct ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47;
struct ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE;
struct ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43;
struct ValueCollection_t8284758E20499C39755524EFC80C98D05790B662;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41;
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E;
struct EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3;
struct EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F;
struct EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB;
struct EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22;
struct KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1;
struct KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A;
struct KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F;
struct KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41;
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E;
struct EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3;
struct EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F;
struct EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB;
struct EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E;
struct KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22;
struct KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1;
struct KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A;
struct KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F;
struct KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD  : public RuntimeObject
{
};

struct U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD_StaticFields
{
	U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD* ___U3CU3E9_0;
};

struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF  : public RuntimeObject
{
	Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6* ____tables_0;
	RuntimeObject* ____comparer_1;
	bool ____growLockArray_2;
	int32_t ____budget_3;
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____serializationArray_4;
	int32_t ____serializationConcurrencyLevel_5;
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF_StaticFields
{
	bool ___s_isValueWriteAtomic_7;
};

struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812  : public RuntimeObject
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ____tables_0;
	RuntimeObject* ____comparer_1;
	bool ____growLockArray_2;
	int32_t ____budget_3;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____serializationArray_4;
	int32_t ____serializationConcurrencyLevel_5;
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields
{
	bool ___s_isValueWriteAtomic_7;
};

struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	RuntimeObject* ____lock_5;
	int32_t ___size_6;
};

struct Dict_1_tB89EADB480C62B4B28B3079B7C291AFBD3A27BE0  : public RuntimeObject
{
	LessOrEqual_tB9CB1D3C60EDF1D92A4F0F43C8DD1D567B2ED344* ____leq_0;
	Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* ____head_1;
};

struct DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9  : public RuntimeObject
{
	RuntimeObject* ____enumerator_0;
};

struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A  : public RuntimeObject
{
	RuntimeObject* ____enumerator_0;
};

struct DictionaryKeyCollectionDebugView_2_t11025E5862E2C4D0FD8923B7995FF3CA72AEC4B1  : public RuntimeObject
{
};

struct DictionaryKeyCollectionDebugView_2_tA967A5CC2E1F95032AE886F39B1005E56173D9D2  : public RuntimeObject
{
};

struct DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB  : public RuntimeObject
{
};

struct DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields
{
	ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* ___s_Pool_0;
};

struct DictionaryValueCollectionDebugView_2_t6086817CC98620510D98FB742382358DA92C2D4C  : public RuntimeObject
{
};

struct DictionaryValueCollectionDebugView_2_tE2C8C453C326A08B63223B59D5D010EFFE30BEF3  : public RuntimeObject
{
};

struct Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* ____keys_7;
	ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* ____keys_7;
	ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031* ____keys_7;
	ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000* ____keys_7;
	ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433* ____keys_7;
	ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C* ____keys_7;
	ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE* ____keys_7;
	ValueCollection_t8284758E20499C39755524EFC80C98D05790B662* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys_7;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5  : public RuntimeObject
{
};

struct EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5_StaticFields
{
	EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* ___defaultComparer_0;
};

struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE  : public RuntimeObject
{
};

struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* ___defaultComparer_0;
};

struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B  : public RuntimeObject
{
};

struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* ___defaultComparer_0;
};

struct EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4  : public RuntimeObject
{
};

struct EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4_StaticFields
{
	EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* ___defaultComparer_0;
};

struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399  : public RuntimeObject
{
};

struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* ___defaultComparer_0;
};

struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};

struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer_0;
};

struct EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6  : public RuntimeObject
{
};

struct EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6_StaticFields
{
	EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* ___defaultComparer_0;
};

struct EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E  : public RuntimeObject
{
};

struct EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E_StaticFields
{
	EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* ___defaultComparer_0;
};

struct KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2  : public RuntimeObject
{
	Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ____dictionary_0;
};

struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary_0;
};

struct KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031  : public RuntimeObject
{
	Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* ____dictionary_0;
};

struct KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000  : public RuntimeObject
{
	Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* ____dictionary_0;
};

struct KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433  : public RuntimeObject
{
	Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* ____dictionary_0;
};

struct KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C  : public RuntimeObject
{
	Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ____dictionary_0;
};

struct KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE  : public RuntimeObject
{
	Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* ____dictionary_0;
};

struct Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E  : public RuntimeObject
{
	RuntimeObject* ____key_0;
	Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* ____prev_1;
	Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* ____next_2;
};

struct ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4  : public RuntimeObject
{
	Stack_1_t27BF66C1EF60140B55713EA795B1064F2DD2F5EA* ___m_Stack_0;
	UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB* ___m_ActionOnGet_1;
	UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB* ___m_ActionOnRelease_2;
	bool ___m_CollectionCheck_3;
	int32_t ___U3CcountAllU3Ek__BackingField_4;
};

struct ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688  : public RuntimeObject
{
	Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ____dictionary_0;
};

struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary_0;
};

struct ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D  : public RuntimeObject
{
	Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* ____dictionary_0;
};

struct ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47  : public RuntimeObject
{
	Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* ____dictionary_0;
};

struct ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE  : public RuntimeObject
{
	Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* ____dictionary_0;
};

struct ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43  : public RuntimeObject
{
	Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ____dictionary_0;
};

struct ValueCollection_t8284758E20499C39755524EFC80C98D05790B662  : public RuntimeObject
{
	Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* ____dictionary_0;
};
struct Il2CppArrayBounds;

struct MemberInfo_t  : public RuntimeObject
{
};

struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	int32_t ___m_currMember_7;
	RuntimeObject* ___m_converter_8;
	String_t* ___m_fullTypeName_9;
	String_t* ___m_assemName_10;
	Type_t* ___objectType_11;
	bool ___isFullTypeNameSetExplicit_12;
	bool ___isAssemblyNameSetExplicit_13;
	bool ___requireSameTokenInPartialTrust_14;
};

struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	String_t* ___Empty_6;
};

struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

struct Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	Il2CppChar ___key_2;
	Il2CppChar ___value_3;
};

struct Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	Il2CppChar ___key_2;
	RuntimeObject* ___value_3;
};

struct KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 
{
	Il2CppChar ___key_0;
	Il2CppChar ___value_1;
};

struct KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F 
{
	Il2CppChar ___key_0;
	RuntimeObject* ___value_1;
};

struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key_0;
	RuntimeObject* ___value_1;
};

typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

struct PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42 
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___m_ToReturn_0;
	ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* ___m_Pool_1;
};

struct ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC 
{
	RuntimeObject* ___Item1_0;
	int32_t ___Item2_1;
};

struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1_0;
	RuntimeObject* ___Item2_1;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

struct Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 
{
	uint8_t ___Byte0_0;
	uint8_t ___Byte1_1;
	uint8_t ___Byte2_2;
	uint8_t ___Byte3_3;
};

struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key_0;
	RuntimeObject* ____value_1;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

struct Guid_t 
{
	int32_t ____a_1;
	int16_t ____b_2;
	int16_t ____c_3;
	uint8_t ____d_4;
	uint8_t ____e_5;
	uint8_t ____f_6;
	uint8_t ____g_7;
	uint8_t ____h_8;
	uint8_t ____i_9;
	uint8_t ____j_10;
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	Guid_t ___Empty_0;
};

struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};

struct IntPtr_t 
{
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};

struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 
{
	uint64_t ___m_GuidLow_1;
	uint64_t ___m_GuidHigh_2;
};

struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___k_Empty_0;
};

struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x_0;
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	String_t* ___m_Name_2;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries_3;
};
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_marshaled_pinvoke
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	char* ___m_Name_2;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries_3;
};
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_marshaled_com
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	Il2CppChar* ___m_Name_2;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries_3;
};

struct Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key_2;
	RuntimeObject* ___value_3;
};

struct Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key_2;
	RuntimeObject* ___value_3;
};

struct Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key_2;
	Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value_3;
};

struct Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	Guid_t ___key_2;
	XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value_3;
};

struct Enumerator_t31B0FA1BB02163305DF683679F51E3BCB63C01B0 
{
	Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 ____current_3;
	int32_t ____getEnumeratorRetType_4;
};

struct Enumerator_t5D7ACAC91CF7C5F7A531B2FBF11F0F9D83015BCA 
{
	Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F ____current_3;
	int32_t ____getEnumeratorRetType_4;
};

struct KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE 
{
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key_0;
	RuntimeObject* ___value_1;
};

struct KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key_0;
	RuntimeObject* ___value_1;
};

struct KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 
{
	Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key_0;
	Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value_1;
};

struct KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA 
{
	Guid_t ___key_0;
	XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value_1;
};

struct Delegate_t  : public RuntimeObject
{
	Il2CppMethodPointer ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	RuntimeObject* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	bool ___method_is_virtual_12;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

struct Exception_t  : public RuntimeObject
{
	String_t* ____className_1;
	String_t* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t* ____innerException_4;
	String_t* ____helpURL_5;
	RuntimeObject* ____stackTrace_6;
	String_t* ____stackTraceString_7;
	String_t* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	RuntimeObject* ____dynamicMethods_10;
	int32_t ____HResult_11;
	String_t* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock_0;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value_0;
};

struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F 
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	bool ___m_SpecifySize_3;
	String_t* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_pinvoke
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_com
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};

struct Entry_t6234B228B233406B958E5F21976FD0BF571302EA 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	Guid_t ___key_2;
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value_3;
};

struct Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC 
{
	Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE ____current_3;
	int32_t ____getEnumeratorRetType_4;
};

struct Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ____current_3;
	int32_t ____getEnumeratorRetType_4;
};

struct Enumerator_t4813E5AD92980A86D49F7CE457459FAAF0CE4E8F 
{
	Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 ____current_3;
	int32_t ____getEnumeratorRetType_4;
};

struct Enumerator_t422F762D6B6551E5C69AFA0DC9F672063D3AA9B3 
{
	Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA ____current_3;
	int32_t ____getEnumeratorRetType_4;
};

struct KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 
{
	Guid_t ___key_0;
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value_1;
};

struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	Il2CppChar ___Delimiter_1;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	RuntimeObject* ___Missing_3;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

struct Enumerator_t69E256CA1CF69403BC36A741D5CEDD02291C9102 
{
	Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 ____current_3;
	int32_t ____getEnumeratorRetType_4;
};

struct LessOrEqual_tB9CB1D3C60EDF1D92A4F0F43C8DD1D567B2ED344  : public MulticastDelegate_t
{
};

struct UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB  : public MulticastDelegate_t
{
};

struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 m_Items[1];

	inline Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
	inline Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE m_Items[1];

	inline KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 m_Items[1];

	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 m_Items[1];

	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA m_Items[1];

	inline Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 m_Items[1];

	inline KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B m_Items[1];

	inline Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F m_Items[1];

	inline KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
struct EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B m_Items[1];

	inline Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 m_Items[1];

	inline KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t6234B228B233406B958E5F21976FD0BF571302EA m_Items[1];

	inline Entry_t6234B228B233406B958E5F21976FD0BF571302EA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t6234B228B233406B958E5F21976FD0BF571302EA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t6234B228B233406B958E5F21976FD0BF571302EA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Texture_5), (void*)NULL);
		#endif
	}
	inline Entry_t6234B228B233406B958E5F21976FD0BF571302EA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t6234B228B233406B958E5F21976FD0BF571302EA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t6234B228B233406B958E5F21976FD0BF571302EA value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Texture_5), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 m_Items[1];

	inline KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Texture_5), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Texture_5), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF m_Items[1];

	inline Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Entries_3), (void*)NULL);
		#endif
	}
	inline Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Entries_3), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA m_Items[1];

	inline KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Entries_3), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Entries_3), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m6462920B36286D0A7ED0EF636D0695A676F288AD_gshared (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* Dict_1_InsertBefore_mD3FED4D052CBA4AA5FB14C09734AAC35DE6621E6_gshared (Dict_1_tB89EADB480C62B4B28B3079B7C291AFBD3A27BE0* __this, Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* ___node0, RuntimeObject* ___key1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LessOrEqual_Invoke_m637CF3E1D9C3AEAE2343BC3BC6FE512B4A61FF3D_gshared_inline (LessOrEqual_tB9CB1D3C60EDF1D92A4F0F43C8DD1D567B2ED344* __this, RuntimeObject* ___lhs0, RuntimeObject* ___rhs1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_get_Default_m5E9BE2919BF81096C28022827CF5CE0920B6A1DC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m583A6681DC5B78409EC9FB2EDFC626E5C0199BAC_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_gshared_inline (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_gshared_inline (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m30B8C5FC4D3410D7F34089BBEE6A0D0E643ACA07_gshared (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* __this, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m98DFD7626BBC5EAD0F8FCEA62A8916BDE6814ED9_gshared (ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* __this, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7374D4D0AD631F1A3E7E79DF42EC554ECE929F8C_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0DE3BB49226AC2E739C1A011B5EC8519B3C81A24_gshared (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3_gshared (Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC* __this, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157_gshared (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mCC7A0761D252A4C9C881862C832093CBA0938BBC_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m12E987B2CC0263A69255B1F085ECEB74F11B78C9_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m87B8FBC9AC0E64BF080520A9915F6BB2442E5D18_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m482679ADE43FA9A8310196AF93E6812DA1BD72FB_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m7DBF08E208AC4899227D4EC7DE2B40CDCB308496_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC67888CA551CCFC338F3F6F386596D887655E552_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m372AB0123DA36271016BE9011C6689744E153D85_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m4C3767C5E7CC91C7E7684ED87A316C147F1783D2_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4550203D1CCEA960DF987B00BB0838D457326394_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mE327DFEFD0B939DAF92352A628CF09A59FFD9670_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m655ADDB455ABCBA1D30F596EF9C83EC6496A16C9_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB0540581C27D300C3C6D8AC730A1209B912A3316_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, Il2CppChar ___value1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyValuePair_2_get_Key_m9A6745166DEC3D2F5A49797A2914D60C83C69EC2_gshared_inline (KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyValuePair_2_get_Value_m44A480D8E4C9FCD58F4982452FC765FF704972B5_gshared_inline (KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m00910A8A9E71B11DFA4F77B24B7C6A48E109F27B_gshared (KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031* __this, Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m6F1267CEC971C9DB1DA07AB6DF350BD78B9A4F9B_gshared (ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D* __this, Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB7F5F475D0518A29D8D6639E60FF3F6D45E91478_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF47F2BB780194D69BC4A2CA122B3FF3266E29810_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, Il2CppChar ___value1, uint8_t ___behavior2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAF382EF92CF36EBBE234FDE10ECD11E2743472FB_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m675CFE4C319FC9FC8F3543B74E48FC5FA5BD0DB5_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m37581543A0F5AD0D0256E1C6258B3E2EDE1D9F0F_gshared (KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367* __this, Il2CppChar ___key0, Il2CppChar ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF681B91E5C5C315766EA297AE1C93956B64D5450_gshared (Enumerator_t31B0FA1BB02163305DF683679F51E3BCB63C01B0* __this, Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m49866921142B4573B20D32736EEB14166B885A91_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mABA9049A065362A6D1BFEA47E9CD016D933E8903_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m1A4130C39EB9CB4EEF7A85D09AFA505014C06530_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mFB997D4C9B5B0D3A67F2E9A0916049568F6F8272_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22D73CBA078956BBAE7C23EDA8F418CA18DA9EF1_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m0091FEB7CE39E81EE6D4604B47177DA18FFBF204_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, Il2CppChar ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1BEC5AE19C2C4F24DAE6F24F20CECF9BA5CAC4DD_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m464344FFCEE9357617CCC0D1FA708CC38A123CEC_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCD30C1E7D73E7A34130BA032431B6DDD3295B381_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7E2C1F3809F4C72B0E41B26AF5A18A8B7C45A948_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEE14C4724FF7E25611DC3CA3D14AACCE1DC9AD1E_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyValuePair_2_get_Key_m2CB75931F86DCBC397685163C26E270C6BBD6217_gshared_inline (KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m90FD43AF5552F9438D4FE6F5601E5DA53600EC56_gshared_inline (KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m3DFA41B42F14493D732AAACB1ED63FCDF592C619_gshared (KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000* __this, Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m23B80708CA92453EF3121DAE1A3A6BFDDF1B63E4_gshared (ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47* __this, Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m2AA326446789AC48832523616931BEED54555F5C_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8C363062CC915A9653BC2E15240D094B6A7DFAAE_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m4800435E9F60C1E2A92614F8ABD35911494AECB0_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m65D2E1988F9BB9AB927F4C397FCA7F5E2F15908F_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D09015711B4B2DCA99E5660DB86CEAFBD83781E_gshared (KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F* __this, Il2CppChar ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4E6C65B88C2C7453B14DE508078ED2D42989AE8C_gshared (Enumerator_t5D7ACAC91CF7C5F7A531B2FBF11F0F9D83015BCA* __this, Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m6361160B7D08FBC0C4EFD09FC1AE6EBA653AC80F_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mB06388115CF49E0F502C08162134D09D5EF6F68D_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDCA81A926F180C69F8EC1F89F78BB893735188CF_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mDD6ABBC5AE467822C43F1873492D4F89DAAABE2B_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m378EFD85E67D4B7355B782408C295789B1EF6402_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m601147FF88F26AB1206E4AFA5B28FDE7C233000C_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5297E87F8CF94E5BDC4494AF35C7AE1BDE026842_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mE7B89EC9F55B4C38F867E2B2443468545553EE2E_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* EqualityComparer_1_get_Default_m75C8C52A86776E3EBDD019992DF33E5D1D194420_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8F2A94860D89D69404453EC439D0BBC02166F64D_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5B1910BEBFF61943F8C3866CBBD202F2CE33478F_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 KeyValuePair_2_get_Key_m921E3EE278F5D68A336842F407021F3CCB81A08C_gshared_inline (KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 KeyValuePair_2_get_Value_mB985E1F21E4A45776BD3DCE760A47D3ACFAA469C_gshared_inline (KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m8FBA54343BF02FAF4C2C25B0C37292C8A983EB3E_gshared (KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433* __this, Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m33DCD092233A5ECB6A4332C523B7ED04963D3F98_gshared (ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE* __this, Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m2DDF63051514ABBE38EB24B23ABE4B1EBAEA3867_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m5DFAF46226AC5779DB1C8D87BDB84CF939B686D1_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m9C3F4EB9E274760AB739DC0E5AE54750D14893F6_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB350A1D6F0F12E3274484BE17571E0EE534AB34A_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7317C41B7A5FE0E127EF56DFA8273AA3CF5145EE_gshared (KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m14B0D0B0496AF3187A093989467CBFE32A2C3E34_gshared (Enumerator_t4813E5AD92980A86D49F7CE457459FAAF0CE4E8F* __this, Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1B2053F2CE35D0D6D6AA98549F6A0D7937DD8D15_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m70A01DACB6E47A11221BA2DB4D459992CE36E182_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5CF09CE782FA46399C50086E607D825E16C2E1CE_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m97C1A84C2004A60865F9B9DF124311B57005D62F_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4_m995268B78598715F6152689AD1CADA142AE6B2AA_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m0760C24318214A1C2F2948F31924D69C0B090154_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m469520991453193438AFB5684215E7C8A5BA72A3_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9E9EFFA4EA71367AFB2C1015DFDAF7AF8F1DB95C_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m47F2DEB08B2F4423669606297156097195AD5074_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m47171934D394BC70040707D479CED00A42092953_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m474B1FCB7438D801A743F78CDB618A06F98CA85F_gshared_inline (KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F KeyValuePair_2_get_Value_m18417E16D04D8687648F6E15EB0473B3A493B3A0_gshared_inline (KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mA4DC870D5A70A5AED0D1C38E1D6B087466EEF854_gshared (KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C* __this, Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m75BD4096C726CD1A6BB0B2541062E3694704DD17_gshared (ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43* __this, Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m21B50BBB269A57D168C1ED4605EA4C1342A0A98F_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3FA48BE8CC51DF65EC263A90E22FF35BA913E420_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value1, uint8_t ___behavior2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* EqualityComparer_1_get_Default_mFC2C0CECC0A6B1A265E40B8B7DAF079E762534AC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF2B688568F9E0D8E7828D5AC86C7A2A5A54F728D_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mA806B610D2F12436C992645A761FE30E0FC9F911_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m604202AD216DD82DC0CC062F95E457E0FABD27E8_gshared (KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004* __this, Guid_t ___key0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA849562E657A557338AAFF93CD82893EE9FF2D43_gshared (Enumerator_t69E256CA1CF69403BC36A741D5CEDD02291C9102* __this, Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4F088A68597E68CE3859A501AE518375E54C06A5_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBBE273BF3126D46E1F14A4A138CA17B88E238A21_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6C105485DDF343FB4038D9BACD5D9682AFBFA458_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA24AD539B550AEF165563574FD75BFAAFF23E9BD_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_mCFAF75688FF6E19E7D59DE02A0ABBDCABA11C2B3_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m87585F5A842A0867532FDDE762235689DFCBE37A_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m8359E82454B8F55CD2ED534361558DC7C38C128D_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9B8CB4891D0582CE7145F17EF439A4411FE8C411_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD4DCD793749F3BBCC9A983212800DCCD3EB94BCC_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDCE06FBFCE66EAF3801482A401C7A4BDE7BF18CF_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m19F45BEED038D3C1A70A1F22ED2F4B5F0C3E8366_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mCD9EA4CF5312AC696399AB81E9EB40FE0D9BA1D8_gshared_inline (KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 KeyValuePair_2_get_Value_m6491E26501F952E6B1721195E18BDAA9A0579672_gshared_inline (KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m9306F71EB3605C806AE7B7053EE149F86E450BF6_gshared (KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE* __this, Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mB391E0FD4C53A003A6CF9DD35A3A7F13D78BAD94_gshared (ValueCollection_t8284758E20499C39755524EFC80C98D05790B662* __this, Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m9D80787446679BC573C5DDDAE752038B8190AAD1_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3CF2211E27C657891A70258A2BF6627697FED45D_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* EqualityComparer_1_get_Default_mADB4BC44BBBFAD59497E0C8A17701FDEB2DAD874_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m661B56E399F98A952D7C1C0AA330E5C8DAE992B2_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m0029E15AFB5EC652B950162CC5E7F56AE16657F4_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m2E4F0E6DA9E45647A4AA602F393386BECFDE37E0_gshared (KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA* __this, Guid_t ___key0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m21EC83EC5B1C47F6C29D2760424AD3D28CD77218_gshared (Enumerator_t422F762D6B6551E5C69AFA0DC9F672063D3AA9B3* __this, Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m11FD5EADD6DE074B69867EF8981A80011B87A6E0_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDCDF7D95DF813D662E3671226DFE19E32979A4CD_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5D8A09D8B8304BA3B053FCFAE0CCAEA2DF8027D9_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m58FC4AAC01F10FEECE7A45A42BFCE58B3F8524B2_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_m91567C90EE00F29EE9661E13FC0FE5D24DA1499E_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mDE0D8A51C6C75E00A3BCFDCE9647A8B7CA761D64_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m433AEA71F33B877C0D823FCA9B214A710723E3BE_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_CreateComparer_m2D9932546A3818617B3DCC9857F6722C1A4B34F7_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_m94F3A1710110C538BB3B3DC6C007B5C766C4C2EE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mD01173A7E84953D3B652E39B1F6980DAA66F72DB_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_mDBC5E6A9DD70DD1731CA50A26783D19EDF662504_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* EqualityComparer_1_CreateComparer_mA9A78B17E7B1C8F24FD8BD7A16FAC8E328B2D1A4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_m6DDA439269B7F1D41EEB076331FD46E59E5C53BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* EqualityComparer_1_CreateComparer_m8634FFF7A6EFAE3F81A0192B5B40E96CE1A39B1A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* EqualityComparer_1_CreateComparer_m283AB574DEA034546A248291AB8E896DC1202EFC_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void Node__ctor_m6462920B36286D0A7ED0EF636D0695A676F288AD (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* __this, const RuntimeMethod* method)
{
	((  void (*) (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*, const RuntimeMethod*))Node__ctor_m6462920B36286D0A7ED0EF636D0695A676F288AD_gshared)(__this, method);
}
inline Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* Dict_1_InsertBefore_mD3FED4D052CBA4AA5FB14C09734AAC35DE6621E6 (Dict_1_tB89EADB480C62B4B28B3079B7C291AFBD3A27BE0* __this, Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* ___node0, RuntimeObject* ___key1, const RuntimeMethod* method)
{
	return ((  Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* (*) (Dict_1_tB89EADB480C62B4B28B3079B7C291AFBD3A27BE0*, Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*, RuntimeObject*, const RuntimeMethod*))Dict_1_InsertBefore_mD3FED4D052CBA4AA5FB14C09734AAC35DE6621E6_gshared)(__this, ___node0, ___key1, method);
}
inline bool LessOrEqual_Invoke_m637CF3E1D9C3AEAE2343BC3BC6FE512B4A61FF3D_inline (LessOrEqual_tB9CB1D3C60EDF1D92A4F0F43C8DD1D567B2ED344* __this, RuntimeObject* ___lhs0, RuntimeObject* ___rhs1, const RuntimeMethod* method)
{
	return ((  bool (*) (LessOrEqual_tB9CB1D3C60EDF1D92A4F0F43C8DD1D567B2ED344*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))LessOrEqual_Invoke_m637CF3E1D9C3AEAE2343BC3BC6FE512B4A61FF3D_gshared_inline)(__this, ___lhs0, ___rhs1, method);
}
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320 (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320_gshared)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257 (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9*, const RuntimeMethod*))DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared)(__this, method);
}
inline void Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017_gshared)(__this, ___capacity0, ___comparer1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E (int32_t ___argument0, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382_gshared)(__this, ___capacity0, method);
}
inline EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_get_Default_m5E9BE2919BF81096C28022827CF5CE0920B6A1DC_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m5E9BE2919BF81096C28022827CF5CE0920B6A1DC_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m583A6681DC5B78409EC9FB2EDFC626E5C0199BAC (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m583A6681DC5B78409EC9FB2EDFC626E5C0199BAC_gshared)(__this, ___dictionary0, ___comparer1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF (int32_t ___argument0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9_gshared)(__this, ___key0, ___value1, method);
}
inline ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC (*) (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE*, const RuntimeMethod*))KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_inline (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE*, const RuntimeMethod*))KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324 (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___key0, ___value1, method);
}
inline void KeyCollection__ctor_m30B8C5FC4D3410D7F34089BBEE6A0D0E643ACA07 (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* __this, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2*, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, const RuntimeMethod*))KeyCollection__ctor_m30B8C5FC4D3410D7F34089BBEE6A0D0E643ACA07_gshared)(__this, ___dictionary0, method);
}
inline void ValueCollection__ctor_m98DFD7626BBC5EAD0F8FCEA62A8916BDE6814ED9 (ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* __this, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688*, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, const RuntimeMethod*))ValueCollection__ctor_m98DFD7626BBC5EAD0F8FCEA62A8916BDE6814ED9_gshared)(__this, ___dictionary0, method);
}
inline int32_t Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, const RuntimeMethod*))Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C_gshared)(__this, ___key0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0 (RuntimeObject* ___key0, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B_gshared)(__this, ___key0, ___value1, ___behavior2, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m7374D4D0AD631F1A3E7E79DF42EC554ECE929F8C (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, const RuntimeMethod*))Dictionary_2_Remove_m7374D4D0AD631F1A3E7E79DF42EC554ECE929F8C_gshared)(__this, ___key0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, const RuntimeMethod*))Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22 (int32_t ___resource0, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m0DE3BB49226AC2E739C1A011B5EC8519B3C81A24 (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0DE3BB49226AC2E739C1A011B5EC8519B3C81A24_gshared)(__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3 (Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC* __this, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC*, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, int32_t, const RuntimeMethod*))Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, Type_t* ___type2, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6_gshared)(__this, ___array0, ___index1, method);
}
inline int32_t ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157 (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*, const RuntimeMethod*))ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E (int32_t ___min0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D (RuntimeObject* ___key0, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mCC7A0761D252A4C9C881862C832093CBA0938BBC (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, const RuntimeMethod*))Dictionary_2_Resize_mCC7A0761D252A4C9C881862C832093CBA0938BBC_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___key0, ___value1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8 (int32_t ___resource0, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___key0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65 (int32_t ___oldSize0, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m12E987B2CC0263A69255B1F085ECEB74F11B78C9 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m12E987B2CC0263A69255B1F085ECEB74F11B78C9_gshared)(__this, ___newSize0, ___forceNewHashCodes1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0 (const RuntimeMethod* method) ;
inline bool Dictionary_2_IsCompatibleKey_m87B8FBC9AC0E64BF080520A9915F6BB2442E5D18 (RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m87B8FBC9AC0E64BF080520A9915F6BB2442E5D18_gshared)(___key0, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m482679ADE43FA9A8310196AF93E6812DA1BD72FB (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m482679ADE43FA9A8310196AF93E6812DA1BD72FB_gshared)(___value0, ___argName1, method);
}
inline void Dictionary_2_set_Item_m7DBF08E208AC4899227D4EC7DE2B40CDCB308496 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m7DBF08E208AC4899227D4EC7DE2B40CDCB308496_gshared)(__this, ___key0, ___value1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2 (RuntimeObject* ___value0, Type_t* ___targetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804 (RuntimeObject* ___key0, Type_t* ___targetType1, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_mC67888CA551CCFC338F3F6F386596D887655E552 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, const RuntimeMethod*))Dictionary_2_ContainsKey_mC67888CA551CCFC338F3F6F386596D887655E552_gshared)(__this, ___key0, method);
}
inline void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared)(__this, ___capacity0, ___comparer1, method);
}
inline int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared)(__this, ___capacity0, method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m372AB0123DA36271016BE9011C6689744E153D85_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m372AB0123DA36271016BE9011C6689744E153D85_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5_gshared)(__this, ___dictionary0, ___comparer1, method);
}
inline void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared)(__this, ___key0, ___value1, method);
}
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6 (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared)(__this, ___dictionary0, method);
}
inline void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7 (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared)(__this, ___dictionary0, method);
}
inline int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared)(__this, ___key0, method);
}
inline bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared)(__this, ___key0, ___value1, ___behavior2, method);
}
inline bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared)(__this, ___key0, method);
}
inline int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1 (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared)(__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164 (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
inline void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared)(__this, ___array0, ___index1, method);
}
inline int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7 (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared)(__this, ___newSize0, ___forceNewHashCodes1, method);
}
inline bool Dictionary_2_IsCompatibleKey_m4C3767C5E7CC91C7E7684ED87A316C147F1783D2 (RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m4C3767C5E7CC91C7E7684ED87A316C147F1783D2_gshared)(___key0, method);
}
inline void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared)(__this, ___key0, ___value1, method);
}
inline bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared)(__this, ___key0, method);
}
inline void Dictionary_2__ctor_m4550203D1CCEA960DF987B00BB0838D457326394 (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m4550203D1CCEA960DF987B00BB0838D457326394_gshared)(__this, ___capacity0, ___comparer1, method);
}
inline int32_t Dictionary_2_Initialize_mE327DFEFD0B939DAF92352A628CF09A59FFD9670 (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mE327DFEFD0B939DAF92352A628CF09A59FFD9670_gshared)(__this, ___capacity0, method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m655ADDB455ABCBA1D30F596EF9C83EC6496A16C9 (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m655ADDB455ABCBA1D30F596EF9C83EC6496A16C9_gshared)(__this, ___dictionary0, ___comparer1, method);
}
inline void Dictionary_2_Add_mB0540581C27D300C3C6D8AC730A1209B912A3316 (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, Il2CppChar, Il2CppChar, const RuntimeMethod*))Dictionary_2_Add_mB0540581C27D300C3C6D8AC730A1209B912A3316_gshared)(__this, ___key0, ___value1, method);
}
inline Il2CppChar KeyValuePair_2_get_Key_m9A6745166DEC3D2F5A49797A2914D60C83C69EC2_inline (KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367*, const RuntimeMethod*))KeyValuePair_2_get_Key_m9A6745166DEC3D2F5A49797A2914D60C83C69EC2_gshared_inline)(__this, method);
}
inline Il2CppChar KeyValuePair_2_get_Value_m44A480D8E4C9FCD58F4982452FC765FF704972B5_inline (KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367*, const RuntimeMethod*))KeyValuePair_2_get_Value_m44A480D8E4C9FCD58F4982452FC765FF704972B5_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m00910A8A9E71B11DFA4F77B24B7C6A48E109F27B (KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031* __this, Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031*, Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, const RuntimeMethod*))KeyCollection__ctor_m00910A8A9E71B11DFA4F77B24B7C6A48E109F27B_gshared)(__this, ___dictionary0, method);
}
inline void ValueCollection__ctor_m6F1267CEC971C9DB1DA07AB6DF350BD78B9A4F9B (ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D* __this, Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D*, Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, const RuntimeMethod*))ValueCollection__ctor_m6F1267CEC971C9DB1DA07AB6DF350BD78B9A4F9B_gshared)(__this, ___dictionary0, method);
}
inline int32_t Dictionary_2_FindEntry_mB7F5F475D0518A29D8D6639E60FF3F6D45E91478 (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, Il2CppChar, const RuntimeMethod*))Dictionary_2_FindEntry_mB7F5F475D0518A29D8D6639E60FF3F6D45E91478_gshared)(__this, ___key0, method);
}
inline bool Dictionary_2_TryInsert_mF47F2BB780194D69BC4A2CA122B3FF3266E29810 (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, Il2CppChar ___value1, uint8_t ___behavior2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, Il2CppChar, Il2CppChar, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mF47F2BB780194D69BC4A2CA122B3FF3266E29810_gshared)(__this, ___key0, ___value1, ___behavior2, method);
}
inline bool Dictionary_2_Remove_mAF382EF92CF36EBBE234FDE10ECD11E2743472FB (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, Il2CppChar, const RuntimeMethod*))Dictionary_2_Remove_mAF382EF92CF36EBBE234FDE10ECD11E2743472FB_gshared)(__this, ___key0, method);
}
inline int32_t Dictionary_2_get_Count_m675CFE4C319FC9FC8F3543B74E48FC5FA5BD0DB5 (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, const RuntimeMethod*))Dictionary_2_get_Count_m675CFE4C319FC9FC8F3543B74E48FC5FA5BD0DB5_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m37581543A0F5AD0D0256E1C6258B3E2EDE1D9F0F (KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367* __this, Il2CppChar ___key0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367*, Il2CppChar, Il2CppChar, const RuntimeMethod*))KeyValuePair_2__ctor_m37581543A0F5AD0D0256E1C6258B3E2EDE1D9F0F_gshared)(__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_mF681B91E5C5C315766EA297AE1C93956B64D5450 (Enumerator_t31B0FA1BB02163305DF683679F51E3BCB63C01B0* __this, Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t31B0FA1BB02163305DF683679F51E3BCB63C01B0*, Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, int32_t, const RuntimeMethod*))Enumerator__ctor_mF681B91E5C5C315766EA297AE1C93956B64D5450_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
inline void Dictionary_2_CopyTo_m49866921142B4573B20D32736EEB14166B885A91 (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m49866921142B4573B20D32736EEB14166B885A91_gshared)(__this, ___array0, ___index1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Char_GetHashCode_mB5406F7D8B6D7545CD1CE6FCA0567BD7217E6B93 (Il2CppChar* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mABA9049A065362A6D1BFEA47E9CD016D933E8903 (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, const RuntimeMethod*))Dictionary_2_Resize_mABA9049A065362A6D1BFEA47E9CD016D933E8903_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m1A4130C39EB9CB4EEF7A85D09AFA505014C06530 (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m1A4130C39EB9CB4EEF7A85D09AFA505014C06530_gshared)(__this, ___newSize0, ___forceNewHashCodes1, method);
}
inline bool Dictionary_2_IsCompatibleKey_mFB997D4C9B5B0D3A67F2E9A0916049568F6F8272 (RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mFB997D4C9B5B0D3A67F2E9A0916049568F6F8272_gshared)(___key0, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22D73CBA078956BBAE7C23EDA8F418CA18DA9EF1 (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22D73CBA078956BBAE7C23EDA8F418CA18DA9EF1_gshared)(___value0, ___argName1, method);
}
inline void Dictionary_2_set_Item_m0091FEB7CE39E81EE6D4604B47177DA18FFBF204 (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, Il2CppChar, Il2CppChar, const RuntimeMethod*))Dictionary_2_set_Item_m0091FEB7CE39E81EE6D4604B47177DA18FFBF204_gshared)(__this, ___key0, ___value1, method);
}
inline bool Dictionary_2_ContainsKey_m1BEC5AE19C2C4F24DAE6F24F20CECF9BA5CAC4DD (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*, Il2CppChar, const RuntimeMethod*))Dictionary_2_ContainsKey_m1BEC5AE19C2C4F24DAE6F24F20CECF9BA5CAC4DD_gshared)(__this, ___key0, method);
}
inline void Dictionary_2__ctor_m464344FFCEE9357617CCC0D1FA708CC38A123CEC (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m464344FFCEE9357617CCC0D1FA708CC38A123CEC_gshared)(__this, ___capacity0, ___comparer1, method);
}
inline int32_t Dictionary_2_Initialize_mCD30C1E7D73E7A34130BA032431B6DDD3295B381 (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mCD30C1E7D73E7A34130BA032431B6DDD3295B381_gshared)(__this, ___capacity0, method);
}
inline void Dictionary_2__ctor_m7E2C1F3809F4C72B0E41B26AF5A18A8B7C45A948 (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m7E2C1F3809F4C72B0E41B26AF5A18A8B7C45A948_gshared)(__this, ___dictionary0, ___comparer1, method);
}
inline void Dictionary_2_Add_mEE14C4724FF7E25611DC3CA3D14AACCE1DC9AD1E (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, Il2CppChar, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mEE14C4724FF7E25611DC3CA3D14AACCE1DC9AD1E_gshared)(__this, ___key0, ___value1, method);
}
inline Il2CppChar KeyValuePair_2_get_Key_m2CB75931F86DCBC397685163C26E270C6BBD6217_inline (KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F*, const RuntimeMethod*))KeyValuePair_2_get_Key_m2CB75931F86DCBC397685163C26E270C6BBD6217_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m90FD43AF5552F9438D4FE6F5601E5DA53600EC56_inline (KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F*, const RuntimeMethod*))KeyValuePair_2_get_Value_m90FD43AF5552F9438D4FE6F5601E5DA53600EC56_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m3DFA41B42F14493D732AAACB1ED63FCDF592C619 (KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000* __this, Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000*, Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, const RuntimeMethod*))KeyCollection__ctor_m3DFA41B42F14493D732AAACB1ED63FCDF592C619_gshared)(__this, ___dictionary0, method);
}
inline void ValueCollection__ctor_m23B80708CA92453EF3121DAE1A3A6BFDDF1B63E4 (ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47* __this, Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47*, Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, const RuntimeMethod*))ValueCollection__ctor_m23B80708CA92453EF3121DAE1A3A6BFDDF1B63E4_gshared)(__this, ___dictionary0, method);
}
inline int32_t Dictionary_2_FindEntry_m2AA326446789AC48832523616931BEED54555F5C (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, Il2CppChar, const RuntimeMethod*))Dictionary_2_FindEntry_m2AA326446789AC48832523616931BEED54555F5C_gshared)(__this, ___key0, method);
}
inline bool Dictionary_2_TryInsert_m8C363062CC915A9653BC2E15240D094B6A7DFAAE (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, Il2CppChar, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m8C363062CC915A9653BC2E15240D094B6A7DFAAE_gshared)(__this, ___key0, ___value1, ___behavior2, method);
}
inline bool Dictionary_2_Remove_m4800435E9F60C1E2A92614F8ABD35911494AECB0 (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, Il2CppChar, const RuntimeMethod*))Dictionary_2_Remove_m4800435E9F60C1E2A92614F8ABD35911494AECB0_gshared)(__this, ___key0, method);
}
inline int32_t Dictionary_2_get_Count_m65D2E1988F9BB9AB927F4C397FCA7F5E2F15908F (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, const RuntimeMethod*))Dictionary_2_get_Count_m65D2E1988F9BB9AB927F4C397FCA7F5E2F15908F_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m0D09015711B4B2DCA99E5660DB86CEAFBD83781E (KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F* __this, Il2CppChar ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F*, Il2CppChar, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D09015711B4B2DCA99E5660DB86CEAFBD83781E_gshared)(__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_m4E6C65B88C2C7453B14DE508078ED2D42989AE8C (Enumerator_t5D7ACAC91CF7C5F7A531B2FBF11F0F9D83015BCA* __this, Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5D7ACAC91CF7C5F7A531B2FBF11F0F9D83015BCA*, Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, int32_t, const RuntimeMethod*))Enumerator__ctor_m4E6C65B88C2C7453B14DE508078ED2D42989AE8C_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
inline void Dictionary_2_CopyTo_m6361160B7D08FBC0C4EFD09FC1AE6EBA653AC80F (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m6361160B7D08FBC0C4EFD09FC1AE6EBA653AC80F_gshared)(__this, ___array0, ___index1, method);
}
inline void Dictionary_2_Resize_mB06388115CF49E0F502C08162134D09D5EF6F68D (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, const RuntimeMethod*))Dictionary_2_Resize_mB06388115CF49E0F502C08162134D09D5EF6F68D_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mDCA81A926F180C69F8EC1F89F78BB893735188CF (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mDCA81A926F180C69F8EC1F89F78BB893735188CF_gshared)(__this, ___newSize0, ___forceNewHashCodes1, method);
}
inline bool Dictionary_2_IsCompatibleKey_mDD6ABBC5AE467822C43F1873492D4F89DAAABE2B (RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mDD6ABBC5AE467822C43F1873492D4F89DAAABE2B_gshared)(___key0, method);
}
inline void Dictionary_2_set_Item_m378EFD85E67D4B7355B782408C295789B1EF6402 (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, Il2CppChar, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m378EFD85E67D4B7355B782408C295789B1EF6402_gshared)(__this, ___key0, ___value1, method);
}
inline bool Dictionary_2_ContainsKey_m601147FF88F26AB1206E4AFA5B28FDE7C233000C (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*, Il2CppChar, const RuntimeMethod*))Dictionary_2_ContainsKey_m601147FF88F26AB1206E4AFA5B28FDE7C233000C_gshared)(__this, ___key0, method);
}
inline void Dictionary_2__ctor_m5297E87F8CF94E5BDC4494AF35C7AE1BDE026842 (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m5297E87F8CF94E5BDC4494AF35C7AE1BDE026842_gshared)(__this, ___capacity0, ___comparer1, method);
}
inline int32_t Dictionary_2_Initialize_mE7B89EC9F55B4C38F867E2B2443468545553EE2E (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mE7B89EC9F55B4C38F867E2B2443468545553EE2E_gshared)(__this, ___capacity0, method);
}
inline EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* EqualityComparer_1_get_Default_m75C8C52A86776E3EBDD019992DF33E5D1D194420_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m75C8C52A86776E3EBDD019992DF33E5D1D194420_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m8F2A94860D89D69404453EC439D0BBC02166F64D (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m8F2A94860D89D69404453EC439D0BBC02166F64D_gshared)(__this, ___dictionary0, ___comparer1, method);
}
inline void Dictionary_2_Add_m5B1910BEBFF61943F8C3866CBBD202F2CE33478F (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, const RuntimeMethod*))Dictionary_2_Add_m5B1910BEBFF61943F8C3866CBBD202F2CE33478F_gshared)(__this, ___key0, ___value1, method);
}
inline Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 KeyValuePair_2_get_Key_m921E3EE278F5D68A336842F407021F3CCB81A08C_inline (KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970* __this, const RuntimeMethod* method)
{
	return ((  Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 (*) (KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970*, const RuntimeMethod*))KeyValuePair_2_get_Key_m921E3EE278F5D68A336842F407021F3CCB81A08C_gshared_inline)(__this, method);
}
inline Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 KeyValuePair_2_get_Value_mB985E1F21E4A45776BD3DCE760A47D3ACFAA469C_inline (KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970* __this, const RuntimeMethod* method)
{
	return ((  Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 (*) (KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970*, const RuntimeMethod*))KeyValuePair_2_get_Value_mB985E1F21E4A45776BD3DCE760A47D3ACFAA469C_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m8FBA54343BF02FAF4C2C25B0C37292C8A983EB3E (KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433* __this, Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433*, Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, const RuntimeMethod*))KeyCollection__ctor_m8FBA54343BF02FAF4C2C25B0C37292C8A983EB3E_gshared)(__this, ___dictionary0, method);
}
inline void ValueCollection__ctor_m33DCD092233A5ECB6A4332C523B7ED04963D3F98 (ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE* __this, Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE*, Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, const RuntimeMethod*))ValueCollection__ctor_m33DCD092233A5ECB6A4332C523B7ED04963D3F98_gshared)(__this, ___dictionary0, method);
}
inline int32_t Dictionary_2_FindEntry_m2DDF63051514ABBE38EB24B23ABE4B1EBAEA3867 (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, const RuntimeMethod*))Dictionary_2_FindEntry_m2DDF63051514ABBE38EB24B23ABE4B1EBAEA3867_gshared)(__this, ___key0, method);
}
inline bool Dictionary_2_TryInsert_m5DFAF46226AC5779DB1C8D87BDB84CF939B686D1 (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value1, uint8_t ___behavior2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m5DFAF46226AC5779DB1C8D87BDB84CF939B686D1_gshared)(__this, ___key0, ___value1, ___behavior2, method);
}
inline bool Dictionary_2_Remove_m9C3F4EB9E274760AB739DC0E5AE54750D14893F6 (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, const RuntimeMethod*))Dictionary_2_Remove_m9C3F4EB9E274760AB739DC0E5AE54750D14893F6_gshared)(__this, ___key0, method);
}
inline int32_t Dictionary_2_get_Count_mB350A1D6F0F12E3274484BE17571E0EE534AB34A (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, const RuntimeMethod*))Dictionary_2_get_Count_mB350A1D6F0F12E3274484BE17571E0EE534AB34A_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m7317C41B7A5FE0E127EF56DFA8273AA3CF5145EE (KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970*, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, const RuntimeMethod*))KeyValuePair_2__ctor_m7317C41B7A5FE0E127EF56DFA8273AA3CF5145EE_gshared)(__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_m14B0D0B0496AF3187A093989467CBFE32A2C3E34 (Enumerator_t4813E5AD92980A86D49F7CE457459FAAF0CE4E8F* __this, Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4813E5AD92980A86D49F7CE457459FAAF0CE4E8F*, Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, int32_t, const RuntimeMethod*))Enumerator__ctor_m14B0D0B0496AF3187A093989467CBFE32A2C3E34_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
inline void Dictionary_2_CopyTo_m1B2053F2CE35D0D6D6AA98549F6A0D7937DD8D15 (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m1B2053F2CE35D0D6D6AA98549F6A0D7937DD8D15_gshared)(__this, ___array0, ___index1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Char32_t_GetHashCode_m9A38EAF10BF4A7453656F4CDE93B55D0D7E02B95 (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m70A01DACB6E47A11221BA2DB4D459992CE36E182 (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, const RuntimeMethod*))Dictionary_2_Resize_m70A01DACB6E47A11221BA2DB4D459992CE36E182_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m5CF09CE782FA46399C50086E607D825E16C2E1CE (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m5CF09CE782FA46399C50086E607D825E16C2E1CE_gshared)(__this, ___newSize0, ___forceNewHashCodes1, method);
}
inline bool Dictionary_2_IsCompatibleKey_m97C1A84C2004A60865F9B9DF124311B57005D62F (RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m97C1A84C2004A60865F9B9DF124311B57005D62F_gshared)(___key0, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4_m995268B78598715F6152689AD1CADA142AE6B2AA (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4_m995268B78598715F6152689AD1CADA142AE6B2AA_gshared)(___value0, ___argName1, method);
}
inline void Dictionary_2_set_Item_m0760C24318214A1C2F2948F31924D69C0B090154 (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, const RuntimeMethod*))Dictionary_2_set_Item_m0760C24318214A1C2F2948F31924D69C0B090154_gshared)(__this, ___key0, ___value1, method);
}
inline bool Dictionary_2_ContainsKey_m469520991453193438AFB5684215E7C8A5BA72A3 (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, const RuntimeMethod*))Dictionary_2_ContainsKey_m469520991453193438AFB5684215E7C8A5BA72A3_gshared)(__this, ___key0, method);
}
inline void Dictionary_2__ctor_m9E9EFFA4EA71367AFB2C1015DFDAF7AF8F1DB95C (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m9E9EFFA4EA71367AFB2C1015DFDAF7AF8F1DB95C_gshared)(__this, ___capacity0, ___comparer1, method);
}
inline int32_t Dictionary_2_Initialize_m47F2DEB08B2F4423669606297156097195AD5074 (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m47F2DEB08B2F4423669606297156097195AD5074_gshared)(__this, ___capacity0, method);
}
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m47171934D394BC70040707D479CED00A42092953 (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m47171934D394BC70040707D479CED00A42092953_gshared)(__this, ___dictionary0, ___comparer1, method);
}
inline void Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, Guid_t, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F, const RuntimeMethod*))Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D_gshared)(__this, ___key0, ___value1, method);
}
inline Guid_t KeyValuePair_2_get_Key_m474B1FCB7438D801A743F78CDB618A06F98CA85F_inline (KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004*, const RuntimeMethod*))KeyValuePair_2_get_Key_m474B1FCB7438D801A743F78CDB618A06F98CA85F_gshared_inline)(__this, method);
}
inline XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F KeyValuePair_2_get_Value_m18417E16D04D8687648F6E15EB0473B3A493B3A0_inline (KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004* __this, const RuntimeMethod* method)
{
	return ((  XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F (*) (KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004*, const RuntimeMethod*))KeyValuePair_2_get_Value_m18417E16D04D8687648F6E15EB0473B3A493B3A0_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mA4DC870D5A70A5AED0D1C38E1D6B087466EEF854 (KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C* __this, Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C*, Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, const RuntimeMethod*))KeyCollection__ctor_mA4DC870D5A70A5AED0D1C38E1D6B087466EEF854_gshared)(__this, ___dictionary0, method);
}
inline void ValueCollection__ctor_m75BD4096C726CD1A6BB0B2541062E3694704DD17 (ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43* __this, Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43*, Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, const RuntimeMethod*))ValueCollection__ctor_m75BD4096C726CD1A6BB0B2541062E3694704DD17_gshared)(__this, ___dictionary0, method);
}
inline int32_t Dictionary_2_FindEntry_m21B50BBB269A57D168C1ED4605EA4C1342A0A98F (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_m21B50BBB269A57D168C1ED4605EA4C1342A0A98F_gshared)(__this, ___key0, method);
}
inline bool Dictionary_2_TryInsert_m3FA48BE8CC51DF65EC263A90E22FF35BA913E420 (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value1, uint8_t ___behavior2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, Guid_t, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m3FA48BE8CC51DF65EC263A90E22FF35BA913E420_gshared)(__this, ___key0, ___value1, ___behavior2, method);
}
inline EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* EqualityComparer_1_get_Default_mFC2C0CECC0A6B1A265E40B8B7DAF079E762534AC_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mFC2C0CECC0A6B1A265E40B8B7DAF079E762534AC_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_mF2B688568F9E0D8E7828D5AC86C7A2A5A54F728D (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_mF2B688568F9E0D8E7828D5AC86C7A2A5A54F728D_gshared)(__this, ___key0, method);
}
inline int32_t Dictionary_2_get_Count_mA806B610D2F12436C992645A761FE30E0FC9F911 (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, const RuntimeMethod*))Dictionary_2_get_Count_mA806B610D2F12436C992645A761FE30E0FC9F911_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m604202AD216DD82DC0CC062F95E457E0FABD27E8 (KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004* __this, Guid_t ___key0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004*, Guid_t, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F, const RuntimeMethod*))KeyValuePair_2__ctor_m604202AD216DD82DC0CC062F95E457E0FABD27E8_gshared)(__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_mA849562E657A557338AAFF93CD82893EE9FF2D43 (Enumerator_t69E256CA1CF69403BC36A741D5CEDD02291C9102* __this, Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t69E256CA1CF69403BC36A741D5CEDD02291C9102*, Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, int32_t, const RuntimeMethod*))Enumerator__ctor_mA849562E657A557338AAFF93CD82893EE9FF2D43_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
inline void Dictionary_2_CopyTo_m4F088A68597E68CE3859A501AE518375E54C06A5 (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m4F088A68597E68CE3859A501AE518375E54C06A5_gshared)(__this, ___array0, ___index1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mBBE273BF3126D46E1F14A4A138CA17B88E238A21 (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, const RuntimeMethod*))Dictionary_2_Resize_mBBE273BF3126D46E1F14A4A138CA17B88E238A21_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m6C105485DDF343FB4038D9BACD5D9682AFBFA458 (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m6C105485DDF343FB4038D9BACD5D9682AFBFA458_gshared)(__this, ___newSize0, ___forceNewHashCodes1, method);
}
inline bool Dictionary_2_IsCompatibleKey_mA24AD539B550AEF165563574FD75BFAAFF23E9BD (RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mA24AD539B550AEF165563574FD75BFAAFF23E9BD_gshared)(___key0, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_mCFAF75688FF6E19E7D59DE02A0ABBDCABA11C2B3 (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_mCFAF75688FF6E19E7D59DE02A0ABBDCABA11C2B3_gshared)(___value0, ___argName1, method);
}
inline void Dictionary_2_set_Item_m87585F5A842A0867532FDDE762235689DFCBE37A (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, Guid_t, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F, const RuntimeMethod*))Dictionary_2_set_Item_m87585F5A842A0867532FDDE762235689DFCBE37A_gshared)(__this, ___key0, ___value1, method);
}
inline bool Dictionary_2_ContainsKey_m8359E82454B8F55CD2ED534361558DC7C38C128D (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m8359E82454B8F55CD2ED534361558DC7C38C128D_gshared)(__this, ___key0, method);
}
inline void Dictionary_2__ctor_m9B8CB4891D0582CE7145F17EF439A4411FE8C411 (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m9B8CB4891D0582CE7145F17EF439A4411FE8C411_gshared)(__this, ___capacity0, ___comparer1, method);
}
inline int32_t Dictionary_2_Initialize_mD4DCD793749F3BBCC9A983212800DCCD3EB94BCC (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mD4DCD793749F3BBCC9A983212800DCCD3EB94BCC_gshared)(__this, ___capacity0, method);
}
inline void Dictionary_2__ctor_mDCE06FBFCE66EAF3801482A401C7A4BDE7BF18CF (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mDCE06FBFCE66EAF3801482A401C7A4BDE7BF18CF_gshared)(__this, ___dictionary0, ___comparer1, method);
}
inline void Dictionary_2_Add_m19F45BEED038D3C1A70A1F22ED2F4B5F0C3E8366 (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, Guid_t, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14, const RuntimeMethod*))Dictionary_2_Add_m19F45BEED038D3C1A70A1F22ED2F4B5F0C3E8366_gshared)(__this, ___key0, ___value1, method);
}
inline Guid_t KeyValuePair_2_get_Key_mCD9EA4CF5312AC696399AB81E9EB40FE0D9BA1D8_inline (KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA*, const RuntimeMethod*))KeyValuePair_2_get_Key_mCD9EA4CF5312AC696399AB81E9EB40FE0D9BA1D8_gshared_inline)(__this, method);
}
inline XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 KeyValuePair_2_get_Value_m6491E26501F952E6B1721195E18BDAA9A0579672_inline (KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA* __this, const RuntimeMethod* method)
{
	return ((  XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 (*) (KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA*, const RuntimeMethod*))KeyValuePair_2_get_Value_m6491E26501F952E6B1721195E18BDAA9A0579672_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m9306F71EB3605C806AE7B7053EE149F86E450BF6 (KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE* __this, Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE*, Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, const RuntimeMethod*))KeyCollection__ctor_m9306F71EB3605C806AE7B7053EE149F86E450BF6_gshared)(__this, ___dictionary0, method);
}
inline void ValueCollection__ctor_mB391E0FD4C53A003A6CF9DD35A3A7F13D78BAD94 (ValueCollection_t8284758E20499C39755524EFC80C98D05790B662* __this, Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t8284758E20499C39755524EFC80C98D05790B662*, Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, const RuntimeMethod*))ValueCollection__ctor_mB391E0FD4C53A003A6CF9DD35A3A7F13D78BAD94_gshared)(__this, ___dictionary0, method);
}
inline int32_t Dictionary_2_FindEntry_m9D80787446679BC573C5DDDAE752038B8190AAD1 (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_m9D80787446679BC573C5DDDAE752038B8190AAD1_gshared)(__this, ___key0, method);
}
inline bool Dictionary_2_TryInsert_m3CF2211E27C657891A70258A2BF6627697FED45D (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value1, uint8_t ___behavior2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, Guid_t, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m3CF2211E27C657891A70258A2BF6627697FED45D_gshared)(__this, ___key0, ___value1, ___behavior2, method);
}
inline EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* EqualityComparer_1_get_Default_mADB4BC44BBBFAD59497E0C8A17701FDEB2DAD874_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mADB4BC44BBBFAD59497E0C8A17701FDEB2DAD874_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m661B56E399F98A952D7C1C0AA330E5C8DAE992B2 (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_m661B56E399F98A952D7C1C0AA330E5C8DAE992B2_gshared)(__this, ___key0, method);
}
inline int32_t Dictionary_2_get_Count_m0029E15AFB5EC652B950162CC5E7F56AE16657F4 (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, const RuntimeMethod*))Dictionary_2_get_Count_m0029E15AFB5EC652B950162CC5E7F56AE16657F4_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m2E4F0E6DA9E45647A4AA602F393386BECFDE37E0 (KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA* __this, Guid_t ___key0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA*, Guid_t, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14, const RuntimeMethod*))KeyValuePair_2__ctor_m2E4F0E6DA9E45647A4AA602F393386BECFDE37E0_gshared)(__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_m21EC83EC5B1C47F6C29D2760424AD3D28CD77218 (Enumerator_t422F762D6B6551E5C69AFA0DC9F672063D3AA9B3* __this, Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t422F762D6B6551E5C69AFA0DC9F672063D3AA9B3*, Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, int32_t, const RuntimeMethod*))Enumerator__ctor_m21EC83EC5B1C47F6C29D2760424AD3D28CD77218_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
inline void Dictionary_2_CopyTo_m11FD5EADD6DE074B69867EF8981A80011B87A6E0 (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m11FD5EADD6DE074B69867EF8981A80011B87A6E0_gshared)(__this, ___array0, ___index1, method);
}
inline void Dictionary_2_Resize_mDCDF7D95DF813D662E3671226DFE19E32979A4CD (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, const RuntimeMethod*))Dictionary_2_Resize_mDCDF7D95DF813D662E3671226DFE19E32979A4CD_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m5D8A09D8B8304BA3B053FCFAE0CCAEA2DF8027D9 (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m5D8A09D8B8304BA3B053FCFAE0CCAEA2DF8027D9_gshared)(__this, ___newSize0, ___forceNewHashCodes1, method);
}
inline bool Dictionary_2_IsCompatibleKey_m58FC4AAC01F10FEECE7A45A42BFCE58B3F8524B2 (RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m58FC4AAC01F10FEECE7A45A42BFCE58B3F8524B2_gshared)(___key0, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_m91567C90EE00F29EE9661E13FC0FE5D24DA1499E (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_m91567C90EE00F29EE9661E13FC0FE5D24DA1499E_gshared)(___value0, ___argName1, method);
}
inline void Dictionary_2_set_Item_mDE0D8A51C6C75E00A3BCFDCE9647A8B7CA761D64 (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, Guid_t, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14, const RuntimeMethod*))Dictionary_2_set_Item_mDE0D8A51C6C75E00A3BCFDCE9647A8B7CA761D64_gshared)(__this, ___key0, ___value1, method);
}
inline bool Dictionary_2_ContainsKey_m433AEA71F33B877C0D823FCA9B214A710723E3BE (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m433AEA71F33B877C0D823FCA9B214A710723E3BE_gshared)(__this, ___key0, method);
}
inline EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_CreateComparer_m2D9932546A3818617B3DCC9857F6722C1A4B34F7 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m2D9932546A3818617B3DCC9857F6722C1A4B34F7_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_m94F3A1710110C538BB3B3DC6C007B5C766C4C2EE (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m94F3A1710110C538BB3B3DC6C007B5C766C4C2EE_gshared)(method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mD01173A7E84953D3B652E39B1F6980DAA66F72DB (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD01173A7E84953D3B652E39B1F6980DAA66F72DB_gshared)(method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_mDBC5E6A9DD70DD1731CA50A26783D19EDF662504 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mDBC5E6A9DD70DD1731CA50A26783D19EDF662504_gshared)(method);
}
inline EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* EqualityComparer_1_CreateComparer_mA9A78B17E7B1C8F24FD8BD7A16FAC8E328B2D1A4 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mA9A78B17E7B1C8F24FD8BD7A16FAC8E328B2D1A4_gshared)(method);
}
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_m6DDA439269B7F1D41EEB076331FD46E59E5C53BA (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m6DDA439269B7F1D41EEB076331FD46E59E5C53BA_gshared)(method);
}
inline EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* EqualityComparer_1_CreateComparer_m8634FFF7A6EFAE3F81A0192B5B40E96CE1A39B1A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m8634FFF7A6EFAE3F81A0192B5B40E96CE1A39B1A_gshared)(method);
}
inline EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* EqualityComparer_1_CreateComparer_m283AB574DEA034546A248291AB8E896DC1202EFC (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m283AB574DEA034546A248291AB8E896DC1202EFC_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1__ctor_m71D9D77F4228C48055AF64696C82A307D8D48154_gshared (Dict_1_tB89EADB480C62B4B28B3079B7C291AFBD3A27BE0* __this, LessOrEqual_tB9CB1D3C60EDF1D92A4F0F43C8DD1D567B2ED344* ___leq0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		LessOrEqual_tB9CB1D3C60EDF1D92A4F0F43C8DD1D567B2ED344* L_0 = ___leq0;
		__this->____leq_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leq_0), (void*)L_0);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_1 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_1);
		Node__ctor_m6462920B36286D0A7ED0EF636D0695A676F288AD(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_2 = L_1;
		NullCheck(L_2);
		RuntimeObject** L_3 = (RuntimeObject**)(&L_2->____key_0);
		il2cpp_codegen_initobj(L_3, sizeof(RuntimeObject*));
		__this->____head_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____head_1), (void*)L_2);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_4 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)__this->____head_1;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_5 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)__this->____head_1;
		NullCheck(L_4);
		L_4->____prev_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____prev_1), (void*)L_5);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_6 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)__this->____head_1;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_7 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)__this->____head_1;
		NullCheck(L_6);
		L_6->____next_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next_2), (void*)L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* Dict_1_Insert_m7F4503AE14FF1B3C99866EDFDA5A97A33C66B03F_gshared (Dict_1_tB89EADB480C62B4B28B3079B7C291AFBD3A27BE0* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_0 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)__this->____head_1;
		RuntimeObject* L_1 = ___key0;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_2;
		L_2 = Dict_1_InsertBefore_mD3FED4D052CBA4AA5FB14C09734AAC35DE6621E6(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* Dict_1_InsertBefore_mD3FED4D052CBA4AA5FB14C09734AAC35DE6621E6_gshared (Dict_1_tB89EADB480C62B4B28B3079B7C291AFBD3A27BE0* __this, Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* ___node0, RuntimeObject* ___key1, const RuntimeMethod* method) 
{
	Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* V_0 = NULL;

IL_0000:
	{
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_0 = ___node0;
		NullCheck(L_0);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_1 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)L_0->____prev_1;
		___node0 = L_1;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_2 = ___node0;
		NullCheck(L_2);
		RuntimeObject* L_3 = (RuntimeObject*)L_2->____key_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		LessOrEqual_tB9CB1D3C60EDF1D92A4F0F43C8DD1D567B2ED344* L_4 = (LessOrEqual_tB9CB1D3C60EDF1D92A4F0F43C8DD1D567B2ED344*)__this->____leq_0;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_5 = ___node0;
		NullCheck(L_5);
		RuntimeObject* L_6 = (RuntimeObject*)L_5->____key_0;
		RuntimeObject* L_7 = ___key1;
		NullCheck(L_4);
		bool L_8;
		L_8 = LessOrEqual_Invoke_m637CF3E1D9C3AEAE2343BC3BC6FE512B4A61FF3D_inline(L_4, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if (!L_8)
		{
			goto IL_0000;
		}
	}

IL_0029:
	{
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_9 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_9);
		Node__ctor_m6462920B36286D0A7ED0EF636D0695A676F288AD(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_10 = L_9;
		RuntimeObject* L_11 = ___key1;
		NullCheck(L_10);
		L_10->____key_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____key_0), (void*)L_11);
		V_0 = L_10;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_12 = V_0;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_13 = ___node0;
		NullCheck(L_13);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_14 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)L_13->____next_2;
		NullCheck(L_12);
		L_12->____next_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____next_2), (void*)L_14);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_15 = ___node0;
		NullCheck(L_15);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_16 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)L_15->____next_2;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_17 = V_0;
		NullCheck(L_16);
		L_16->____prev_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____prev_1), (void*)L_17);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_18 = V_0;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_19 = ___node0;
		NullCheck(L_18);
		L_18->____prev_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____prev_1), (void*)L_19);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_20 = ___node0;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_21 = V_0;
		NullCheck(L_20);
		L_20->____next_2 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____next_2), (void*)L_21);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* Dict_1_Find_m005B8EF1FC8AF412BE5800CB23BA5F8E986FDCC5_gshared (Dict_1_tB89EADB480C62B4B28B3079B7C291AFBD3A27BE0* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* V_0 = NULL;
	{
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_0 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)__this->____head_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_1 = V_0;
		NullCheck(L_1);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_2 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)L_1->____next_2;
		V_0 = L_2;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = (RuntimeObject*)L_3->____key_0;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		LessOrEqual_tB9CB1D3C60EDF1D92A4F0F43C8DD1D567B2ED344* L_5 = (LessOrEqual_tB9CB1D3C60EDF1D92A4F0F43C8DD1D567B2ED344*)__this->____leq_0;
		RuntimeObject* L_6 = ___key0;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = (RuntimeObject*)L_7->____key_0;
		NullCheck(L_5);
		bool L_9;
		L_9 = LessOrEqual_Invoke_m637CF3E1D9C3AEAE2343BC3BC6FE512B4A61FF3D_inline(L_5, L_6, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_0007;
		}
	}

IL_002f:
	{
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* Dict_1_Min_m94E2613AB9E5C808A3D5F0F22F1B5DD371C52386_gshared (Dict_1_tB89EADB480C62B4B28B3079B7C291AFBD3A27BE0* __this, const RuntimeMethod* method) 
{
	{
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_0 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)__this->____head_1;
		NullCheck(L_0);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_1 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)L_0->____next_2;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1_Remove_m584E57ABA1D2FB308EB8570283C2E83F9031F623_gshared (Dict_1_tB89EADB480C62B4B28B3079B7C291AFBD3A27BE0* __this, Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* ___node0, const RuntimeMethod* method) 
{
	{
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_0 = ___node0;
		NullCheck(L_0);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_1 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)L_0->____next_2;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_2 = ___node0;
		NullCheck(L_2);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_3 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)L_2->____prev_1;
		NullCheck(L_1);
		L_1->____prev_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->____prev_1), (void*)L_3);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_4 = ___node0;
		NullCheck(L_4);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_5 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)L_4->____prev_1;
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_6 = ___node0;
		NullCheck(L_6);
		Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E* L_7 = (Node_tD221D1BDB3D0CB385C3C7150B283D4C2FBFC467E*)L_6->____next_2;
		NullCheck(L_5);
		L_5->____next_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____next_2), (void*)L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mED6D481F16E8597DF1F8FD3F1A173ED8F0D4D8E9_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* ___dictionary0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* L_0 = ___dictionary0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____enumerator_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator_0), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck(L_0);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_3 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck(L_3);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_4;
		L_4 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		V_0 = L_4;
		RuntimeObject* L_5;
		L_5 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m8D259867AB5E2DC9BB7842AF3E12D610D928B673_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck(L_0);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_m7EC80AD0D446500C9824A6B681B418A5D0684717_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck(L_0);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m7501DF54C4E255F50E90B671CD323B1CD34C65C8_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mB31588BC8CD43AFACC8AA4951D86F21B677419CB_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_mB5B330221AC0A9B73F3C3D3297A3E499C6353D10_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mE63FC46E53E46535C7DD59172E65E42BD570D5F3_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* ___dictionary0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_0 = ___dictionary0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____enumerator_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator_0), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m6EB9062A7B59C89B18B6B61214B707BE4AA44086_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck(L_4);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_3, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m0990C99F94EA95C5392CA5485B4BFD344BAED6FE_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_mD790494FF5E50257030CC045B516A70513EE98A8_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m84A050320869FF83584304FF56D3BA05368095F2_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mCD670B5AE8886409051790844BF74853977F5846_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_mBAC7702D03B6B7A6496AA713EC06CE6162127B2C_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* DictionaryPool_2_Get_mB53BF9FC9057EB09B636993279E5E36BEF99B712_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_0 = ((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool_0;
		NullCheck(L_0);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1;
		L_1 = InvokerFuncInvoker0< Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42 DictionaryPool_2_Get_mB49836BBEC3EB27A2C7ACC906F354E57FF3C07D2_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___value0, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_0 = ((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool_0;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_1 = ___value0;
		NullCheck(L_0);
		PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42 L_2;
		L_2 = InvokerFuncInvoker1< PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPool_2_Release_m3A8F69B28EDC3A5FF452042302732719CB4E2BFF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___toRelease0, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_0 = ((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool_0;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = ___toRelease0;
		NullCheck(L_0);
		InvokerActionInvoker1< Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPool_2__cctor_m23A9C74F6A3451AAA23FE9F24CD2A2FBC4698E7B_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD* L_0 = ((U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9_0;
		UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB* L_1 = (UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		NullCheck(L_1);
		((  void (*) (UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_2 = (ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		NullCheck(L_2);
		((  void (*) (ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4*, UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*, UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_2, (UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*)NULL, L_1, (bool)1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool_0), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m349A1657AA5617B19C3521CE68CF04167BF17791_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m655A5D6611CD093199113EDDDB510B1E612410D9_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mECEFDEB7CCF3B80FD71D917465EFF005506544D6_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_5;
		L_5 = EqualityComparer_1_get_Default_m5E9BE2919BF81096C28022827CF5CE0920B6A1DC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m71A419CD34B4DC1859322E5FA54E90A7D3024AA2_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		Dictionary_2__ctor_m583A6681DC5B78409EC9FB2EDFC626E5C0199BAC(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m583A6681DC5B78409EC9FB2EDFC626E5C0199BAC_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* G_B2_0 = NULL;
	Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* L_11 = ((Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_13 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_19 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_32;
				L_32 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3D1057721B5A57BDA60BE4CFDC542570933A8E4F_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* Dictionary_2_get_Keys_m46B70ED5840D9C76FA4E8D5E749BDBD0E5911CEC_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* L_0 = (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* L_1 = (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_m30B8C5FC4D3410D7F34089BBEE6A0D0E643ACA07(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* L_2 = (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mB47E88A691E5DF49B35909BD540B7EF4CC9BDFB8_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* L_0 = (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* L_1 = (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_m30B8C5FC4D3410D7F34089BBEE6A0D0E643ACA07(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* L_2 = (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* Dictionary_2_get_Values_m7741081F2D1DCE065925153006B764B2C89E2D6C_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* L_0 = (ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* L_1 = (ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_m98DFD7626BBC5EAD0F8FCEA62A8916BDE6814ED9(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* L_2 = (ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m041CBCEE06C69D929F5FBEAB0E6A6AC4565F0DA6_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* L_0 = (ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* L_1 = (ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_m98DFD7626BBC5EAD0F8FCEA62A8916BDE6814ED9(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* L_2 = (ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m809934CD0B5D1F1D76B0D2B8B6B282DC447A851C_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_3 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = (RuntimeObject*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_6 = ___key0;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m7DBF08E208AC4899227D4EC7DE2B40CDCB308496_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8590030584A62954A2A18A39BF36569A47C04FB5_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0;
		L_0 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m52BE907447307206771D6D1BE397702E196B4FDE_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0;
		L_0 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_4 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4E1FB4679F260BD422A4C235793E2C5D91873A01_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0;
		L_0 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_4 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_9;
		L_9 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m7374D4D0AD631F1A3E7E79DF42EC554ECE929F8C(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mA12C33A8301A59BB42B02EB4307E5732BB0274E9_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_4 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC67888CA551CCFC338F3F6F386596D887655E552_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mCAECE5D2A423E83EA639A0F58048F4CB554A0048_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_0 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___value0;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = (RuntimeObject*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = (RuntimeObject*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_7 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_16 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m0DE3BB49226AC2E739C1A011B5EC8519B3C81A24((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC Dictionary_2_GetEnumerator_mF2C434EEAC96F517D41086CC36BC784711657317_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34CC42342E3C4B1BE3060F3B02594F07C92DD4E4_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mFC3EB3940999F225AD3E9C935406C156A91267A8_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_6;
		L_6 = EqualityComparer_1_get_Default_m5E9BE2919BF81096C28022827CF5CE0920B6A1DC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_14 = (KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38*)(KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_15 = V_0;
		Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_2 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_19;
		L_19 = EqualityComparer_1_get_Default_m5E9BE2919BF81096C28022827CF5CE0920B6A1DC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_22 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_32 = ___key0;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_48 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_49 = ___key0;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_5 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)(EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* V_10 = NULL;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_4 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_24;
		L_24 = EqualityComparer_1_get_Default_m5E9BE2919BF81096C28022827CF5CE0920B6A1DC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_27 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_35 = ___key0;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_53 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_54 = ___key0;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___behavior2;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___value1;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___behavior2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_61 = ___key0;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mCC7A0761D252A4C9C881862C832093CBA0938BBC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_78 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_94 = V_10;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_95 = ___key0;
		L_94->___key_2 = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key_2))->___Item1_0), (void*)NULL);
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_96 = V_10;
		RuntimeObject* L_97 = ___value1;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value_3), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mF76B61495B851801060880CA15998F6445B6CCF6_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_21;
		L_21 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_24;
		L_24 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mCC7A0761D252A4C9C881862C832093CBA0938BBC_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		Dictionary_2_Resize_m12E987B2CC0263A69255B1F085ECEB74F11B78C9(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m12E987B2CC0263A69255B1F085ECEB74F11B78C9_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_3 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)(EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_5 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_8 = V_3;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* L_19 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7374D4D0AD631F1A3E7E79DF42EC554ECE929F8C_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_13 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_20;
		L_20 = EqualityComparer_1_get_Default_m5E9BE2919BF81096C28022827CF5CE0920B6A1DC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_21 = V_4;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_22 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)L_21->___key_2;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_25 = V_4;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_26 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)L_25->___key_2;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_34 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
	}
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_41 = V_4;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* L_42 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
	}

IL_00ff:
	{
	}
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE045679667E15DE2368FDC013CFE45675221F677_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___value1;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_4 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m032B4F93085A9C7E0A702DA9500FB336BBD13161_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8287C83A739E955ECAFC7497C17E8021EC4D2926_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m51FC61B11870D7C4772B1CD187D574C1B2FF1A75_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_0 = ___array0;
		int32_t L_1 = ___index1;
		Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m2A1477125D710CA977DE39C3AB661469D13C39C8_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_14 = V_0;
		int32_t L_15 = ___index1;
		Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_18 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_27 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = (RuntimeObject*)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_40 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_49 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m0DE3BB49226AC2E739C1A011B5EC8519B3C81A24((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m89DADECC495CB8B2BB1B46C56330AB44B54ED781_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mA7AC8E23D334E2564FD319667FCFFBB9944F21AB_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mA8ECF31827A7C9633D50586E43AE94AC0C2F1429_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m87B8FBC9AC0E64BF080520A9915F6BB2442E5D18(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C(__this, ((*(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)((ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_5 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mB0DF2FCEA67C1680862B256E5668680ECDE8C7CB_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m482679ADE43FA9A8310196AF93E6812DA1BD72FB(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)((ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_set_Item_m7DBF08E208AC4899227D4EC7DE2B40CDCB308496(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m87B8FBC9AC0E64BF080520A9915F6BB2442E5D18_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m6D90FBDA5F122F829BA5C81D9E2CB3174A2B733D_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m482679ADE43FA9A8310196AF93E6812DA1BD72FB(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)((ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mACBB10A2ADC89C8C983F79FA37AAB9D00785A1FA_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m87B8FBC9AC0E64BF080520A9915F6BB2442E5D18(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mC67888CA551CCFC338F3F6F386596D887655E552(__this, ((*(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)((ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mF23957CF01C70AD8326E6993135E239FBE60D7DC_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC25FF6793652922985BFAA4DC8F11A4B0B090CF8_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA647361FB5882A25C765F596760030CB84824C97_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF092F25D416129BCC755E245CEC88345A7E17540_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_5;
		L_5 = EqualityComparer_1_get_Default_m372AB0123DA36271016BE9011C6689744E153D85_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD64AC3C289EB7ACAB466AD0B5341F3609CB55199_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* G_B2_0 = NULL;
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* L_11 = ((Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_19 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32;
				L_32 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E17FF0178C889BBACDC95DECEB4EF50BB31F65F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* Dictionary_2_get_Keys_m48AD1CD8EB0B41F2D58FDFA10B92A85DB9933FF2_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_0 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_1 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_2 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m7D135859DB08B86A18770C657F0C13E1E5665DB4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_0 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_1 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_2 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* Dictionary_2_get_Values_mC54912268568667F725754EBE2356518610AE832_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_0 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_1 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_2 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m56A9B69194A7A4F8923BFCB33B82A7748240F71D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_0 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_1 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_2 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m04A4017ED4A293A5D3A2164CBCD6A6CB8BCCA116_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = (RuntimeObject*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = ___key0;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4EEACDC46AD23A0E7FA39004DBEDA017B8687FAF_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mA39A0BE52118902D1EC9ED983321B0D8B415DF24_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4DB7A9F0B32B7B8DD0D41B3F6611E7B03B9436CA_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9;
		L_9 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m07051E2711DEDC818DC462838A3D89CDD0959D9A_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2E1A55234F27A4F98C337C2202E8241F8E42ED04_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_0 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___value0;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = (RuntimeObject*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = (RuntimeObject*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_7 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_16 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 Dictionary_2_GetEnumerator_m1C2674F51BACC5E23084DA0374A70B0EBB20CB1F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mF90BAD88410B5EEFD79B8D5A86638D03C61B08AC_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE2783EE614A6743CAC1102BE510AF8978CE8C547_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_6;
		L_6 = EqualityComparer_1_get_Default_m372AB0123DA36271016BE9011C6689744E153D85_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = (KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)(KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_15 = V_0;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_19;
		L_19 = EqualityComparer_1_get_Default_m372AB0123DA36271016BE9011C6689744E153D85_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32 = ___key0;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_48 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = ___key0;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_10 = NULL;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_24;
		L_24 = EqualityComparer_1_get_Default_m372AB0123DA36271016BE9011C6689744E153D85_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_35 = ___key0;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_53 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_54 = ___key0;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___behavior2;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___value1;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___behavior2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_61 = ___key0;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_78 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_94 = V_10;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_95 = ___key0;
		L_94->___key_2 = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key_2))->___Item2_1), (void*)NULL);
		#endif
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_96 = V_10;
		RuntimeObject* L_97 = ___value1;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value_3), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m40CC8AF5495433361FFFBAE6BF3EB27D6A9C9E05_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_21;
		L_21 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_24;
		L_24 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = V_3;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_19 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_20;
		L_20 = EqualityComparer_1_get_Default_m372AB0123DA36271016BE9011C6689744E153D85_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_21 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)L_21->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_25 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_26 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)L_25->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_34 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_41 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_42 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_00ff:
	{
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m65316B5BBBCA1E7FA03561A97E22F2860B92FDF5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___value1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mCFE3B0F6F63ADFF26FB4623C8EAB4B8920D257EB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m08F8980BA41D175D9D5755E520ECEC499FAECF65_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8B6070F6B012031518CAF9D85C4AA0880199C5E9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___array0;
		int32_t L_1 = ___index1;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3F00D474C864259E96AE8A127C47D3AA12CBC787_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = V_0;
		int32_t L_15 = ___index1;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_18 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = (RuntimeObject*)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m904B76BE6F9CA0FC90A3E300E03FACB2CD5C8BDE_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m106E312F89A7FF2E8CF9BF88DA09FD2AD89E9652_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m578F26947EC223AF042037DF6D88F725A17C1CD4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m4C3767C5E7CC91C7E7684ED87A316C147F1783D2(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m36BF55AAF072CC8471B04911DF96474EA3BC8825_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m482679ADE43FA9A8310196AF93E6812DA1BD72FB(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m4C3767C5E7CC91C7E7684ED87A316C147F1783D2_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_mFE2FCCD46685EE6D11DDB42386B9331D0860177B_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m482679ADE43FA9A8310196AF93E6812DA1BD72FB(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mAA97B6F0E3AA42F45BBCE847BCADC2D626F21112_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m4C3767C5E7CC91C7E7684ED87A316C147F1783D2(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE7E563DCFA8A83D43D1077B358C6DC613F78738B_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4BAC3BABCE7088F1DF93A518F3126A85C6DC7EEB_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m4550203D1CCEA960DF987B00BB0838D457326394(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m17664515B3A6BE5E67DF0C68F557513DFF89B34D_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_m4550203D1CCEA960DF987B00BB0838D457326394(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAA90093C49DD9FD1F4E6E81E0B923EBFFC6DCDDF_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2__ctor_m4550203D1CCEA960DF987B00BB0838D457326394(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4550203D1CCEA960DF987B00BB0838D457326394_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mE327DFEFD0B939DAF92352A628CF09A59FFD9670(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_5;
		L_5 = EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m84500EDF8DE753F7447296449B52F406856AB478_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		Dictionary_2__ctor_m655ADDB455ABCBA1D30F596EF9C83EC6496A16C9(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m655ADDB455ABCBA1D30F596EF9C83EC6496A16C9_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* G_B2_0 = NULL;
	Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		Dictionary_2__ctor_m4550203D1CCEA960DF987B00BB0838D457326394(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* L_11 = ((Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_13 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Il2CppChar L_19 = (Il2CppChar)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Il2CppChar L_22 = (Il2CppChar)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_mB0540581C27D300C3C6D8AC730A1209B912A3316(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Il2CppChar L_32;
				L_32 = KeyValuePair_2_get_Key_m9A6745166DEC3D2F5A49797A2914D60C83C69EC2_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Il2CppChar L_33;
				L_33 = KeyValuePair_2_get_Value_m44A480D8E4C9FCD58F4982452FC765FF704972B5_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_mB0540581C27D300C3C6D8AC730A1209B912A3316(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m11A8B12D88D17BE2BDAA0E4008C8D0BE15024652_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m675CFE4C319FC9FC8F3543B74E48FC5FA5BD0DB5_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031* Dictionary_2_get_Keys_m1B9A52AA9CA8F603B12223B2591FA2D2B2869606_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031* L_0 = (KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031* L_1 = (KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_m00910A8A9E71B11DFA4F77B24B7C6A48E109F27B(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031* L_2 = (KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30D3D1159FC6E92CA8E74C016B4FB01CF38ACD3A_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031* L_0 = (KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031* L_1 = (KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_m00910A8A9E71B11DFA4F77B24B7C6A48E109F27B(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031* L_2 = (KeyCollection_t3B92262FBDB64E2E088E411EC5CC4E2411F8B031*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D* Dictionary_2_get_Values_m1D9CFFFFF42F3AD57F790A8660A9BBCDFA181393_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D* L_0 = (ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D* L_1 = (ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_m6F1267CEC971C9DB1DA07AB6DF350BD78B9A4F9B(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D* L_2 = (ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m3C97EE206E54EF8C99AB4C1A138F34F9C5F23BC8_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D* L_0 = (ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D* L_1 = (ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_m6F1267CEC971C9DB1DA07AB6DF350BD78B9A4F9B(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D* L_2 = (ValueCollection_tFA9C653B99290983BBD9E11A999CA8B42722E50D*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Dictionary_2_get_Item_m826F017ACE56E3380C6C541DF4702AC4187405C1_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		Il2CppChar L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB7F5F475D0518A29D8D6639E60FF3F6D45E91478(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_3 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppChar L_5 = (Il2CppChar)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Il2CppChar L_6 = ___key0;
		Il2CppChar L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppChar));
		Il2CppChar L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m0091FEB7CE39E81EE6D4604B47177DA18FFBF204_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, Il2CppChar ___value1, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___key0;
		Il2CppChar L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF47F2BB780194D69BC4A2CA122B3FF3266E29810(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB0540581C27D300C3C6D8AC730A1209B912A3316_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, Il2CppChar ___value1, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___key0;
		Il2CppChar L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF47F2BB780194D69BC4A2CA122B3FF3266E29810(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m5C23105FC6D05704FC598F0B27E0D0C678DD9C81_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0;
		L_0 = KeyValuePair_2_get_Key_m9A6745166DEC3D2F5A49797A2914D60C83C69EC2_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Il2CppChar L_1;
		L_1 = KeyValuePair_2_get_Value_m44A480D8E4C9FCD58F4982452FC765FF704972B5_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mB0540581C27D300C3C6D8AC730A1209B912A3316(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9595EB51D256466F69C56B40942EBD71940831FC_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppChar L_0;
		L_0 = KeyValuePair_2_get_Key_m9A6745166DEC3D2F5A49797A2914D60C83C69EC2_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB7F5F475D0518A29D8D6639E60FF3F6D45E91478(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3;
		L_3 = EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_4 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6 = (Il2CppChar)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Il2CppChar L_7;
		L_7 = KeyValuePair_2_get_Value_m44A480D8E4C9FCD58F4982452FC765FF704972B5_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8CF93A6891684321091B3FF025BD1BD621F9F261_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppChar L_0;
		L_0 = KeyValuePair_2_get_Key_m9A6745166DEC3D2F5A49797A2914D60C83C69EC2_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB7F5F475D0518A29D8D6639E60FF3F6D45E91478(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3;
		L_3 = EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_4 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6 = (Il2CppChar)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Il2CppChar L_7;
		L_7 = KeyValuePair_2_get_Value_m44A480D8E4C9FCD58F4982452FC765FF704972B5_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppChar L_9;
		L_9 = KeyValuePair_2_get_Key_m9A6745166DEC3D2F5A49797A2914D60C83C69EC2_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mAF382EF92CF36EBBE234FDE10ECD11E2743472FB(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mFB8467FFCBABA3D53A156F232197F213A287EA95_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_4 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1BEC5AE19C2C4F24DAE6F24F20CECF9BA5CAC4DD_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB7F5F475D0518A29D8D6639E60FF3F6D45E91478(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m15AC37A4DC280C40B025345EF00A4EAE24FCE4B0_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_0 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppChar));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_6;
		L_6 = EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Il2CppChar L_9 = (Il2CppChar)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value_3;
		Il2CppChar L_10 = ___value0;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = (int32_t)__this->____count_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m49866921142B4573B20D32736EEB14166B885A91_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m675CFE4C319FC9FC8F3543B74E48FC5FA5BD0DB5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_7 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Il2CppChar L_16 = (Il2CppChar)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Il2CppChar L_19 = (Il2CppChar)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m37581543A0F5AD0D0256E1C6258B3E2EDE1D9F0F((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t31B0FA1BB02163305DF683679F51E3BCB63C01B0 Dictionary_2_GetEnumerator_mB061889B77678545EB5FE66247AF1CFAAA324AFA_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t31B0FA1BB02163305DF683679F51E3BCB63C01B0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF681B91E5C5C315766EA297AE1C93956B64D5450((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m5F73C969A4BD8F934C098837493B4F599F513D58_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t31B0FA1BB02163305DF683679F51E3BCB63C01B0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF681B91E5C5C315766EA297AE1C93956B64D5450((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t31B0FA1BB02163305DF683679F51E3BCB63C01B0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m0838DA44DA45F18862402D79D912EC351282CD6B_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_6;
		L_6 = EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m675CFE4C319FC9FC8F3543B74E48FC5FA5BD0DB5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_14 = (KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22*)(KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_15 = V_0;
		Dictionary_2_CopyTo_m49866921142B4573B20D32736EEB14166B885A91(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB7F5F475D0518A29D8D6639E60FF3F6D45E91478_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_2 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Char_GetHashCode_mB5406F7D8B6D7545CD1CE6FCA0567BD7217E6B93((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Il2CppChar));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_19;
		L_19 = EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Il2CppChar L_22 = (Il2CppChar)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Il2CppChar L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Il2CppChar L_32 = ___key0;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Il2CppChar >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Il2CppChar L_48 = (Il2CppChar)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		Il2CppChar L_49 = ___key0;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mE327DFEFD0B939DAF92352A628CF09A59FFD9670_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_5 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)(EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF47F2BB780194D69BC4A2CA122B3FF3266E29810_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, Il2CppChar ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* V_10 = NULL;
	Il2CppChar V_11 = 0x0;
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mE327DFEFD0B939DAF92352A628CF09A59FFD9670(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_4 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Il2CppChar L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Il2CppChar >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Char_GetHashCode_mB5406F7D8B6D7545CD1CE6FCA0567BD7217E6B93((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Il2CppChar));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_24;
		L_24 = EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Il2CppChar L_27 = (Il2CppChar)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Il2CppChar L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Il2CppChar L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Il2CppChar L_35 = ___key0;
		Il2CppChar L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Il2CppChar L_53 = (Il2CppChar)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		Il2CppChar L_54 = ___key0;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___behavior2;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Il2CppChar L_59 = ___value1;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___behavior2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Il2CppChar L_61 = ___key0;
		Il2CppChar L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mABA9049A065362A6D1BFEA47E9CD016D933E8903(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_78 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* L_94 = V_10;
		Il2CppChar L_95 = ___key0;
		L_94->___key_2 = L_95;
		Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* L_96 = V_10;
		Il2CppChar L_97 = ___value1;
		L_96->___value_3 = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m0B1615B0C3095D67488833D81D629E9BD1C46062_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mE327DFEFD0B939DAF92352A628CF09A59FFD9670(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Il2CppChar L_21;
		L_21 = KeyValuePair_2_get_Key_m9A6745166DEC3D2F5A49797A2914D60C83C69EC2_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Il2CppChar L_24;
		L_24 = KeyValuePair_2_get_Key_m9A6745166DEC3D2F5A49797A2914D60C83C69EC2_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppChar L_27;
		L_27 = KeyValuePair_2_get_Value_m44A480D8E4C9FCD58F4982452FC765FF704972B5_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mB0540581C27D300C3C6D8AC730A1209B912A3316(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mABA9049A065362A6D1BFEA47E9CD016D933E8903_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		Dictionary_2_Resize_m1A4130C39EB9CB4EEF7A85D09AFA505014C06530(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m1A4130C39EB9CB4EEF7A85D09AFA505014C06530_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_3 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)(EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_5 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppChar));
		Il2CppChar L_8 = V_3;
		Il2CppChar L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Il2CppChar* L_19 = (Il2CppChar*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Char_GetHashCode_mB5406F7D8B6D7545CD1CE6FCA0567BD7217E6B93(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAF382EF92CF36EBBE234FDE10ECD11E2743472FB_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Char_GetHashCode_mB5406F7D8B6D7545CD1CE6FCA0567BD7217E6B93((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppChar L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppChar >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_13 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_20;
		L_20 = EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* L_21 = V_4;
		Il2CppChar L_22 = (Il2CppChar)L_21->___key_2;
		Il2CppChar L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* L_25 = V_4;
		Il2CppChar L_26 = (Il2CppChar)L_25->___key_2;
		Il2CppChar L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_34 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList_3 = L_41;
		int32_t L_42 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_tA35B2627AA23E0B1B1860305EEC75DA544D8B6EA* L_45 = V_4;
		int32_t L_46 = (int32_t)L_45->___next_1;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mF68DB37A48CD3408D506232D0D7263E184DCDD23_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, Il2CppChar* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppChar L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB7F5F475D0518A29D8D6639E60FF3F6D45E91478(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar* L_3 = ___value1;
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_4 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6 = (Il2CppChar)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Il2CppChar*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Il2CppChar* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppChar));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m4E360B2415CA0C6BD48649EB4BFDF16EDBF70EC3_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, Il2CppChar ___key0, Il2CppChar ___value1, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___key0;
		Il2CppChar L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF47F2BB780194D69BC4A2CA122B3FF3266E29810(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mDFAFB634B472948C23A15339AC09466A7BBA7DDA_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mF9B25A7A42050C83B54EB484A35EFCB71EC2D001_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_0 = ___array0;
		int32_t L_1 = ___index1;
		Dictionary_2_CopyTo_m49866921142B4573B20D32736EEB14166B885A91(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m31713C211D3A251DB3D8B23DCEF5C0839E073E0C_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m675CFE4C319FC9FC8F3543B74E48FC5FA5BD0DB5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4DEF68E9E7786AF4F0B2019A40DDACB406C8FB22* L_14 = V_0;
		int32_t L_15 = ___index1;
		Dictionary_2_CopyTo_m49866921142B4573B20D32736EEB14166B885A91(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_18 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Il2CppChar L_27 = (Il2CppChar)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Il2CppChar L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Il2CppChar L_32 = (Il2CppChar)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Il2CppChar L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_42 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___index1;
			int32_t L_48 = L_47;
			___index1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Il2CppChar L_51 = (Il2CppChar)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Il2CppChar L_54 = (Il2CppChar)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m37581543A0F5AD0D0256E1C6258B3E2EDE1D9F0F((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mC17698ECEE6CE88F5D11C632FCED2ACACED81DA2_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t31B0FA1BB02163305DF683679F51E3BCB63C01B0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF681B91E5C5C315766EA297AE1C93956B64D5450((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t31B0FA1BB02163305DF683679F51E3BCB63C01B0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mAA721D30BA80D98EEB0582785B28043E98DA1152_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m1A8F661393211BB149CCE86E123B8201FD557DC7_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mFB997D4C9B5B0D3A67F2E9A0916049568F6F8272(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mB7F5F475D0518A29D8D6639E60FF3F6D45E91478(__this, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E* L_5 = (EntryU5BU5D_t13C888A7CA6F41B9BCF3778E079BBB5A09A7D66E*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppChar L_7 = (Il2CppChar)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Il2CppChar L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mA8B8FC89982BAB21A3633B2EDB4B47EB07C328E1_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22D73CBA078956BBAE7C23EDA8F418CA18DA9EF1(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Il2CppChar L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_set_Item_m0091FEB7CE39E81EE6D4604B47177DA18FFBF204(__this, L_3, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mFB997D4C9B5B0D3A67F2E9A0916049568F6F8272_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m714886042602CC68D0A129E1E77846BDF3009C4E_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22D73CBA078956BBAE7C23EDA8F418CA18DA9EF1(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Il2CppChar L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_Add_mB0540581C27D300C3C6D8AC730A1209B912A3316(__this, L_3, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mEAFCB9555B1DA294A19B1A4D5810798D39FBB435_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mFB997D4C9B5B0D3A67F2E9A0916049568F6F8272(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1BEC5AE19C2C4F24DAE6F24F20CECF9BA5CAC4DD(__this, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mEEAA349F1CE8DA257E5E9CC7736D8051CDC77914_gshared (Dictionary_2_tE3937E2373C702DE96A912EF264AD8ADE54BF335* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t31B0FA1BB02163305DF683679F51E3BCB63C01B0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF681B91E5C5C315766EA297AE1C93956B64D5450((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t31B0FA1BB02163305DF683679F51E3BCB63C01B0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8364770BAB7B3D2C9DBBD8DED10E506030BB6B62_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m464344FFCEE9357617CCC0D1FA708CC38A123CEC(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4B44C2E898E458641982619D36E88DB170E9FC85_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_m464344FFCEE9357617CCC0D1FA708CC38A123CEC(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m092A48BA43E8CCBEF9477DCE02E97636AFCDD42A_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2__ctor_m464344FFCEE9357617CCC0D1FA708CC38A123CEC(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m464344FFCEE9357617CCC0D1FA708CC38A123CEC_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mCD30C1E7D73E7A34130BA032431B6DDD3295B381(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_5;
		L_5 = EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7F1246CBC4AE9CF17DBA756EC3B1EB3148070867_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		Dictionary_2__ctor_m7E2C1F3809F4C72B0E41B26AF5A18A8B7C45A948(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7E2C1F3809F4C72B0E41B26AF5A18A8B7C45A948_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* G_B2_0 = NULL;
	Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		Dictionary_2__ctor_m464344FFCEE9357617CCC0D1FA708CC38A123CEC(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* L_11 = ((Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_13 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Il2CppChar L_19 = (Il2CppChar)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_mEE14C4724FF7E25611DC3CA3D14AACCE1DC9AD1E(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Il2CppChar L_32;
				L_32 = KeyValuePair_2_get_Key_m2CB75931F86DCBC397685163C26E270C6BBD6217_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m90FD43AF5552F9438D4FE6F5601E5DA53600EC56_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_mEE14C4724FF7E25611DC3CA3D14AACCE1DC9AD1E(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6CB7ABB23475890DE6585CC1C0A8BA5084EC83E5_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m65D2E1988F9BB9AB927F4C397FCA7F5E2F15908F_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000* Dictionary_2_get_Keys_m6B3B44EC0834E3C74C95B41F7726CBFECBBE5A00_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000* L_0 = (KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000* L_1 = (KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_m3DFA41B42F14493D732AAACB1ED63FCDF592C619(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000* L_2 = (KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m72D835066168D9B31EBB8A525E35F4D4416F96DE_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000* L_0 = (KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000* L_1 = (KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_m3DFA41B42F14493D732AAACB1ED63FCDF592C619(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000* L_2 = (KeyCollection_t68585FE837E28F0FB1B4406DE602B8DD09E50000*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47* Dictionary_2_get_Values_m1A58310B1E1B3BC83D9E917D3923FB42F77CD68A_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47* L_0 = (ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47* L_1 = (ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_m23B80708CA92453EF3121DAE1A3A6BFDDF1B63E4(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47* L_2 = (ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m4B52F487290D169FED5F8C80E34B37C22ADEAE51_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47* L_0 = (ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47* L_1 = (ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_m23B80708CA92453EF3121DAE1A3A6BFDDF1B63E4(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47* L_2 = (ValueCollection_tDD88EA79ACD2BA6AF2D0EF9DA520947A628E7E47*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mE57E44533DF4514440B34F411ED2868732BF608C_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		Il2CppChar L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2AA326446789AC48832523616931BEED54555F5C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_3 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = (RuntimeObject*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Il2CppChar L_6 = ___key0;
		Il2CppChar L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m378EFD85E67D4B7355B782408C295789B1EF6402_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8C363062CC915A9653BC2E15240D094B6A7DFAAE(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEE14C4724FF7E25611DC3CA3D14AACCE1DC9AD1E_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8C363062CC915A9653BC2E15240D094B6A7DFAAE(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m7ABB3270C0E423CEA1568A03797F649DFE23296E_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0;
		L_0 = KeyValuePair_2_get_Key_m2CB75931F86DCBC397685163C26E270C6BBD6217_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m90FD43AF5552F9438D4FE6F5601E5DA53600EC56_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mEE14C4724FF7E25611DC3CA3D14AACCE1DC9AD1E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mEC9BF150532BF2437BA16A607FCE3AAAA83EAC5C_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppChar L_0;
		L_0 = KeyValuePair_2_get_Key_m2CB75931F86DCBC397685163C26E270C6BBD6217_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2AA326446789AC48832523616931BEED54555F5C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_4 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m90FD43AF5552F9438D4FE6F5601E5DA53600EC56_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mA7E39DF6A1494FC5B1C4E0B6090048F65AE69A23_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppChar L_0;
		L_0 = KeyValuePair_2_get_Key_m2CB75931F86DCBC397685163C26E270C6BBD6217_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2AA326446789AC48832523616931BEED54555F5C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_4 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m90FD43AF5552F9438D4FE6F5601E5DA53600EC56_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppChar L_9;
		L_9 = KeyValuePair_2_get_Key_m2CB75931F86DCBC397685163C26E270C6BBD6217_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m4800435E9F60C1E2A92614F8ABD35911494AECB0(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCDF68D45DFC9D1620E56D458574138A64362C90D_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_4 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m601147FF88F26AB1206E4AFA5B28FDE7C233000C_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2AA326446789AC48832523616931BEED54555F5C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m7B86A87558E5DD65BF7DE368EFDFB5FF5D7C363B_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_0 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___value0;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = (RuntimeObject*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = (RuntimeObject*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m6361160B7D08FBC0C4EFD09FC1AE6EBA653AC80F_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m65D2E1988F9BB9AB927F4C397FCA7F5E2F15908F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_7 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Il2CppChar L_16 = (Il2CppChar)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m0D09015711B4B2DCA99E5660DB86CEAFBD83781E((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t5D7ACAC91CF7C5F7A531B2FBF11F0F9D83015BCA Dictionary_2_GetEnumerator_mD7A638B060DF985F5F6A4C05CF4BCBDC9DA3F251_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t5D7ACAC91CF7C5F7A531B2FBF11F0F9D83015BCA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4E6C65B88C2C7453B14DE508078ED2D42989AE8C((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mFFCD2D7E4FEFB0267B1768810F5E8A3AB2666CFD_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t5D7ACAC91CF7C5F7A531B2FBF11F0F9D83015BCA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4E6C65B88C2C7453B14DE508078ED2D42989AE8C((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t5D7ACAC91CF7C5F7A531B2FBF11F0F9D83015BCA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mF9241757EF928D41C60A3177AFE4726D08C6FEB8_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_6;
		L_6 = EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m65D2E1988F9BB9AB927F4C397FCA7F5E2F15908F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_14 = (KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1*)(KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_15 = V_0;
		Dictionary_2_CopyTo_m6361160B7D08FBC0C4EFD09FC1AE6EBA653AC80F(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m2AA326446789AC48832523616931BEED54555F5C_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_2 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Char_GetHashCode_mB5406F7D8B6D7545CD1CE6FCA0567BD7217E6B93((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Il2CppChar));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_19;
		L_19 = EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Il2CppChar L_22 = (Il2CppChar)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Il2CppChar L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Il2CppChar L_32 = ___key0;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Il2CppChar >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Il2CppChar L_48 = (Il2CppChar)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		Il2CppChar L_49 = ___key0;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCD30C1E7D73E7A34130BA032431B6DDD3295B381_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_5 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)(EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8C363062CC915A9653BC2E15240D094B6A7DFAAE_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* V_10 = NULL;
	Il2CppChar V_11 = 0x0;
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mCD30C1E7D73E7A34130BA032431B6DDD3295B381(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_4 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Il2CppChar L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Il2CppChar >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Char_GetHashCode_mB5406F7D8B6D7545CD1CE6FCA0567BD7217E6B93((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Il2CppChar));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_24;
		L_24 = EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Il2CppChar L_27 = (Il2CppChar)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Il2CppChar L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Il2CppChar L_35 = ___key0;
		Il2CppChar L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Il2CppChar L_53 = (Il2CppChar)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		Il2CppChar L_54 = ___key0;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___behavior2;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___value1;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___behavior2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Il2CppChar L_61 = ___key0;
		Il2CppChar L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mB06388115CF49E0F502C08162134D09D5EF6F68D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_78 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_94 = V_10;
		Il2CppChar L_95 = ___key0;
		L_94->___key_2 = L_95;
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_96 = V_10;
		RuntimeObject* L_97 = ___value1;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value_3), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m09DD7F94C13CBE9A267FC6936B6B0933D3960B7B_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mCD30C1E7D73E7A34130BA032431B6DDD3295B381(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Il2CppChar L_21;
		L_21 = KeyValuePair_2_get_Key_m2CB75931F86DCBC397685163C26E270C6BBD6217_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Il2CppChar L_24;
		L_24 = KeyValuePair_2_get_Key_m2CB75931F86DCBC397685163C26E270C6BBD6217_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m90FD43AF5552F9438D4FE6F5601E5DA53600EC56_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mEE14C4724FF7E25611DC3CA3D14AACCE1DC9AD1E(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mB06388115CF49E0F502C08162134D09D5EF6F68D_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		Dictionary_2_Resize_mDCA81A926F180C69F8EC1F89F78BB893735188CF(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDCA81A926F180C69F8EC1F89F78BB893735188CF_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_3 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)(EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_5 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppChar));
		Il2CppChar L_8 = V_3;
		Il2CppChar L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Il2CppChar* L_19 = (Il2CppChar*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Char_GetHashCode_mB5406F7D8B6D7545CD1CE6FCA0567BD7217E6B93(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m4800435E9F60C1E2A92614F8ABD35911494AECB0_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Char_GetHashCode_mB5406F7D8B6D7545CD1CE6FCA0567BD7217E6B93((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppChar L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppChar >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_13 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_20;
		L_20 = EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_21 = V_4;
		Il2CppChar L_22 = (Il2CppChar)L_21->___key_2;
		Il2CppChar L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_25 = V_4;
		Il2CppChar L_26 = (Il2CppChar)L_25->___key_2;
		Il2CppChar L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_34 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value_3);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList_3 = L_43;
		int32_t L_44 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tAEE93EF7F2DEA51252B79C9058ED0344A00EA11B* L_47 = V_4;
		int32_t L_48 = (int32_t)L_47->___next_1;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m05848BFC612F50E44324D69A6DAC22306A44B4DF_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppChar L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2AA326446789AC48832523616931BEED54555F5C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___value1;
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_4 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m4402D6E52382E8A6A694DADD3153A9061913DD12_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, Il2CppChar ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8C363062CC915A9653BC2E15240D094B6A7DFAAE(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mCB159A2CA0D462DD065E330CB26BD1E7686ED578_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mD44C96BB53F9A5D521031FD8E5D19A0E58F98844_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_0 = ___array0;
		int32_t L_1 = ___index1;
		Dictionary_2_CopyTo_m6361160B7D08FBC0C4EFD09FC1AE6EBA653AC80F(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m1357236231B469FFD924C99010A6C377DD63D044_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m65D2E1988F9BB9AB927F4C397FCA7F5E2F15908F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t913C9282E4AF3AC5F507FBBD02487811372C99B1* L_14 = V_0;
		int32_t L_15 = ___index1;
		Dictionary_2_CopyTo_m6361160B7D08FBC0C4EFD09FC1AE6EBA653AC80F(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_18 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Il2CppChar L_27 = (Il2CppChar)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Il2CppChar L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = (RuntimeObject*)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_40 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Il2CppChar L_49 = (Il2CppChar)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m0D09015711B4B2DCA99E5660DB86CEAFBD83781E((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26E07543A24DCE09AF8226585A9F155844F10819_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t5D7ACAC91CF7C5F7A531B2FBF11F0F9D83015BCA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4E6C65B88C2C7453B14DE508078ED2D42989AE8C((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t5D7ACAC91CF7C5F7A531B2FBF11F0F9D83015BCA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mF2CBC830665AD561DEC08BEF8B87CDE9B2EE6381_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mC78F28BD4F997C47BF0E4DB116987C0F35BF1B66_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mDD6ABBC5AE467822C43F1873492D4F89DAAABE2B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m2AA326446789AC48832523616931BEED54555F5C(__this, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3* L_5 = (EntryU5BU5D_t1E8BC5159478F647551124DF466B74C7F2F841E3*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m78A3C9BE65C31B551E870FC1EBFA0F30F2925DE3_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m482679ADE43FA9A8310196AF93E6812DA1BD72FB(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Il2CppChar L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_set_Item_m378EFD85E67D4B7355B782408C295789B1EF6402(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mDD6ABBC5AE467822C43F1873492D4F89DAAABE2B_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_mB1A0476CD360A4AF7B61447414754A6C527FB8D6_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m482679ADE43FA9A8310196AF93E6812DA1BD72FB(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Il2CppChar L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_Add_mEE14C4724FF7E25611DC3CA3D14AACCE1DC9AD1E(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mD9BC7B55F2CD31F0286A948ACB13E65E02E48EEF_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mDD6ABBC5AE467822C43F1873492D4F89DAAABE2B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m601147FF88F26AB1206E4AFA5B28FDE7C233000C(__this, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mABD36791354AD314203392D8DD2084E8AA61AE12_gshared (Dictionary_2_tCBCD102E66C746D308A055BB1AE5FEB8897853DE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t5D7ACAC91CF7C5F7A531B2FBF11F0F9D83015BCA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4E6C65B88C2C7453B14DE508078ED2D42989AE8C((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t5D7ACAC91CF7C5F7A531B2FBF11F0F9D83015BCA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m13CA2CDBEF92A4C8C4D0D8893043FEC2732E163B_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m5297E87F8CF94E5BDC4494AF35C7AE1BDE026842(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE681C3A89043D364E2FB413EE435F2A8C27F423E_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_m5297E87F8CF94E5BDC4494AF35C7AE1BDE026842(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m54093ABAA61F3741146A7DB870F86561FAB62F06_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2__ctor_m5297E87F8CF94E5BDC4494AF35C7AE1BDE026842(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5297E87F8CF94E5BDC4494AF35C7AE1BDE026842_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mE7B89EC9F55B4C38F867E2B2443468545553EE2E(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* L_5;
		L_5 = EqualityComparer_1_get_Default_m75C8C52A86776E3EBDD019992DF33E5D1D194420_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC159AF871DB4E812ACE415142A9C13DA7238CA99_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		Dictionary_2__ctor_m8F2A94860D89D69404453EC439D0BBC02166F64D(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8F2A94860D89D69404453EC439D0BBC02166F64D_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* G_B2_0 = NULL;
	Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		Dictionary_2__ctor_m5297E87F8CF94E5BDC4494AF35C7AE1BDE026842(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* L_11 = ((Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_13 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_19 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_22 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_m5B1910BEBFF61943F8C3866CBBD202F2CE33478F(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_32;
				L_32 = KeyValuePair_2_get_Key_m921E3EE278F5D68A336842F407021F3CCB81A08C_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_33;
				L_33 = KeyValuePair_2_get_Value_mB985E1F21E4A45776BD3DCE760A47D3ACFAA469C_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_m5B1910BEBFF61943F8C3866CBBD202F2CE33478F(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mED4F258E0D02A91AAFE8F7E6AAA791E7C928B9F9_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB350A1D6F0F12E3274484BE17571E0EE534AB34A_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433* Dictionary_2_get_Keys_m8C08F0193538E4987A571C77434787E8D2023E9B_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433* L_0 = (KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433* L_1 = (KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_m8FBA54343BF02FAF4C2C25B0C37292C8A983EB3E(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433* L_2 = (KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mFEE94F59C8A0E40D4380C7E8B7D2BD9CB661626D_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433* L_0 = (KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433* L_1 = (KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_m8FBA54343BF02FAF4C2C25B0C37292C8A983EB3E(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433* L_2 = (KeyCollection_t1094A0C2A6ACD836BEFA0AF0E4AB99A6A4796433*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE* Dictionary_2_get_Values_mCB73037A2CB613E1BA488FB3E2BC689A319F2603_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE* L_0 = (ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE* L_1 = (ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_m33DCD092233A5ECB6A4332C523B7ED04963D3F98(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE* L_2 = (ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8343E8A2F4DE412F570409E77C8361B4F9101F98_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE* L_0 = (ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE* L_1 = (ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_m33DCD092233A5ECB6A4332C523B7ED04963D3F98(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE* L_2 = (ValueCollection_t937742251289989646035FE7B6BB105422EFFCAE*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 Dictionary_2_get_Item_m4726A56581C8806065F1B9B0BD07087B10BDBA4F_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2DDF63051514ABBE38EB24B23ABE4B1EBAEA3867(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_3 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_5 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_6 = ___key0;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4));
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m0760C24318214A1C2F2948F31924D69C0B090154_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value1, const RuntimeMethod* method) 
{
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_0 = ___key0;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m5DFAF46226AC5779DB1C8D87BDB84CF939B686D1(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5B1910BEBFF61943F8C3866CBBD202F2CE33478F_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value1, const RuntimeMethod* method) 
{
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_0 = ___key0;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m5DFAF46226AC5779DB1C8D87BDB84CF939B686D1(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4B5F53108FD4320A5951BB246A72704C9119C931_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_0;
		L_0 = KeyValuePair_2_get_Key_m921E3EE278F5D68A336842F407021F3CCB81A08C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_1;
		L_1 = KeyValuePair_2_get_Value_mB985E1F21E4A45776BD3DCE760A47D3ACFAA469C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m5B1910BEBFF61943F8C3866CBBD202F2CE33478F(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8BA0BDE1AF06A431E00F64E972365D58310255E1_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_0;
		L_0 = KeyValuePair_2_get_Key_m921E3EE278F5D68A336842F407021F3CCB81A08C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2DDF63051514ABBE38EB24B23ABE4B1EBAEA3867(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* L_3;
		L_3 = EqualityComparer_1_get_Default_m75C8C52A86776E3EBDD019992DF33E5D1D194420_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_4 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_6 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_7;
		L_7 = KeyValuePair_2_get_Value_mB985E1F21E4A45776BD3DCE760A47D3ACFAA469C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m705E077DE4337C0B7E1EBB8A7AE653AC2316837A_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_0;
		L_0 = KeyValuePair_2_get_Key_m921E3EE278F5D68A336842F407021F3CCB81A08C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2DDF63051514ABBE38EB24B23ABE4B1EBAEA3867(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* L_3;
		L_3 = EqualityComparer_1_get_Default_m75C8C52A86776E3EBDD019992DF33E5D1D194420_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_4 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_6 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_7;
		L_7 = KeyValuePair_2_get_Value_mB985E1F21E4A45776BD3DCE760A47D3ACFAA469C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_9;
		L_9 = KeyValuePair_2_get_Key_m921E3EE278F5D68A336842F407021F3CCB81A08C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m9C3F4EB9E274760AB739DC0E5AE54750D14893F6(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mFE297309FCCE62EE61E44D65DCFB3D0AF62265E4_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_4 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m469520991453193438AFB5684215E7C8A5BA72A3_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, const RuntimeMethod* method) 
{
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2DDF63051514ABBE38EB24B23ABE4B1EBAEA3867(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mF4FD2A5A5F1E313702921961B74101B613CC89F9_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* V_0 = NULL;
	int32_t V_1 = 0;
	Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_0 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* L_6;
		L_6 = EqualityComparer_1_get_Default_m75C8C52A86776E3EBDD019992DF33E5D1D194420_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_9 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value_3;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_10 = ___value0;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = (int32_t)__this->____count_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1B2053F2CE35D0D6D6AA98549F6A0D7937DD8D15_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mB350A1D6F0F12E3274484BE17571E0EE534AB34A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_7 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_16 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_19 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7317C41B7A5FE0E127EF56DFA8273AA3CF5145EE((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4813E5AD92980A86D49F7CE457459FAAF0CE4E8F Dictionary_2_GetEnumerator_m45AD8785E9A1654EA5D44ECBC2547B12496168C3_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4813E5AD92980A86D49F7CE457459FAAF0CE4E8F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m14B0D0B0496AF3187A093989467CBFE32A2C3E34((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m413E439F42843BF759AF120749CAFCC57D6EAB34_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4813E5AD92980A86D49F7CE457459FAAF0CE4E8F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m14B0D0B0496AF3187A093989467CBFE32A2C3E34((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t4813E5AD92980A86D49F7CE457459FAAF0CE4E8F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m11CDCC6C6D788B55B78D5268845ECAB201E16BB8_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* L_6;
		L_6 = EqualityComparer_1_get_Default_m75C8C52A86776E3EBDD019992DF33E5D1D194420_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mB350A1D6F0F12E3274484BE17571E0EE534AB34A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_14 = (KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A*)(KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_15 = V_0;
		Dictionary_2_CopyTo_m1B2053F2CE35D0D6D6AA98549F6A0D7937DD8D15(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m2DDF63051514ABBE38EB24B23ABE4B1EBAEA3867_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_2 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Char32_t_GetHashCode_m9A38EAF10BF4A7453656F4CDE93B55D0D7E02B95((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* L_19;
		L_19 = EqualityComparer_1_get_Default_m75C8C52A86776E3EBDD019992DF33E5D1D194420_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_22 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_32 = ___key0;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_48 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_49 = ___key0;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mE7B89EC9F55B4C38F867E2B2443468545553EE2E_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_5 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)(EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m5DFAF46226AC5779DB1C8D87BDB84CF939B686D1_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* V_10 = NULL;
	Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mE7B89EC9F55B4C38F867E2B2443468545553EE2E(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_4 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Char32_t_GetHashCode_m9A38EAF10BF4A7453656F4CDE93B55D0D7E02B95((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* L_24;
		L_24 = EqualityComparer_1_get_Default_m75C8C52A86776E3EBDD019992DF33E5D1D194420_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_27 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_35 = ___key0;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_53 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_54 = ___key0;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___behavior2;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_59 = ___value1;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___behavior2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_61 = ___key0;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m70A01DACB6E47A11221BA2DB4D459992CE36E182(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_78 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* L_94 = V_10;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_95 = ___key0;
		L_94->___key_2 = L_95;
		Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* L_96 = V_10;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_97 = ___value1;
		L_96->___value_3 = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m90AF789DEF29B95B3CA4DB6EEED619FF6FA42639_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mE7B89EC9F55B4C38F867E2B2443468545553EE2E(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_21;
		L_21 = KeyValuePair_2_get_Key_m921E3EE278F5D68A336842F407021F3CCB81A08C_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_24;
		L_24 = KeyValuePair_2_get_Key_m921E3EE278F5D68A336842F407021F3CCB81A08C_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_27;
		L_27 = KeyValuePair_2_get_Value_mB985E1F21E4A45776BD3DCE760A47D3ACFAA469C_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m5B1910BEBFF61943F8C3866CBBD202F2CE33478F(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m70A01DACB6E47A11221BA2DB4D459992CE36E182_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		Dictionary_2_Resize_m5CF09CE782FA46399C50086E607D825E16C2E1CE(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5CF09CE782FA46399C50086E607D825E16C2E1CE_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* V_1 = NULL;
	int32_t V_2 = 0;
	Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_3 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)(EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_5 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4));
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_8 = V_3;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4* L_19 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Char32_t_GetHashCode_m9A38EAF10BF4A7453656F4CDE93B55D0D7E02B95(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m9C3F4EB9E274760AB739DC0E5AE54750D14893F6_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Char32_t_GetHashCode_m9A38EAF10BF4A7453656F4CDE93B55D0D7E02B95((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_13 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* L_20;
		L_20 = EqualityComparer_1_get_Default_m75C8C52A86776E3EBDD019992DF33E5D1D194420_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* L_21 = V_4;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_22 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)L_21->___key_2;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* L_25 = V_4;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_26 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)L_25->___key_2;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_34 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList_3 = L_41;
		int32_t L_42 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_tF2BCC0E334AA4225211C302EFCBBCC2A5A4E409B* L_45 = V_4;
		int32_t L_46 = (int32_t)L_45->___next_1;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9D7A9A196474B1F32862DA6EEA463F302B11C8E0_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2DDF63051514ABBE38EB24B23ABE4B1EBAEA3867(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4* L_3 = ___value1;
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_4 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_6 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m81DE430C93090C7D3284D59B5E12A8F5FBB0F7C4_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___key0, Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 ___value1, const RuntimeMethod* method) 
{
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_0 = ___key0;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m5DFAF46226AC5779DB1C8D87BDB84CF939B686D1(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mB012E94D0AE7C987E611FDC83EF7F6E3C7C18822_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mD7DECF4985CEF75382C3E81662CCF4D871DC16E4_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_0 = ___array0;
		int32_t L_1 = ___index1;
		Dictionary_2_CopyTo_m1B2053F2CE35D0D6D6AA98549F6A0D7937DD8D15(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m7CB40CB3E46FCE7D09AEB90CA18410A5D209A67E_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mB350A1D6F0F12E3274484BE17571E0EE534AB34A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7F805C07DEB6A2FBC13C7597F648155640DA6B5A* L_14 = V_0;
		int32_t L_15 = ___index1;
		Dictionary_2_CopyTo_m1B2053F2CE35D0D6D6AA98549F6A0D7937DD8D15(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_18 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_27 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_32 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_42 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___index1;
			int32_t L_48 = L_47;
			___index1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_51 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_54 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m7317C41B7A5FE0E127EF56DFA8273AA3CF5145EE((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m5E7A18930BE76E43E8DC1D5E2C0AE97E7441D0AE_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4813E5AD92980A86D49F7CE457459FAAF0CE4E8F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m14B0D0B0496AF3187A093989467CBFE32A2C3E34((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t4813E5AD92980A86D49F7CE457459FAAF0CE4E8F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m07EBCF1B8C7B992D2FE3BD68C456057EE23DAC79_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m5A0A3308ADCB794C02027E06F43380ED6592C00D_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m97C1A84C2004A60865F9B9DF124311B57005D62F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m2DDF63051514ABBE38EB24B23ABE4B1EBAEA3867(__this, ((*(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)((Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F* L_5 = (EntryU5BU5D_t1646F259C04D2B839350A4F56E061B7B0BCC088F*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_7 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mCAF36FF7FBC311C6BF0479389BEE02138C296421_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4_m995268B78598715F6152689AD1CADA142AE6B2AA(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)((Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_set_Item_m0760C24318214A1C2F2948F31924D69C0B090154(__this, L_3, ((*(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)((Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m97C1A84C2004A60865F9B9DF124311B57005D62F_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m04B67C2596F80088BAB2B2B32704258BF4563247_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4_m995268B78598715F6152689AD1CADA142AE6B2AA(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)((Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_Add_m5B1910BEBFF61943F8C3866CBBD202F2CE33478F(__this, L_3, ((*(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)((Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m704FF4B64C7CC8A4DC74D8ED9AB39683EF91E11B_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m97C1A84C2004A60865F9B9DF124311B57005D62F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m469520991453193438AFB5684215E7C8A5BA72A3(__this, ((*(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)((Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)(Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mF17EBF070BA90AEA58415FA5FE3639A4E939AA2C_gshared (Dictionary_2_t5F9765A1381EABB7D9881A8E4D2F90AC5F3B4503* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4813E5AD92980A86D49F7CE457459FAAF0CE4E8F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m14B0D0B0496AF3187A093989467CBFE32A2C3E34((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t4813E5AD92980A86D49F7CE457459FAAF0CE4E8F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEF87A6EAD65CA0670F181318C58A651321468CAF_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m9E9EFFA4EA71367AFB2C1015DFDAF7AF8F1DB95C(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE2DCD31D377CB97D6C0BEF0CF837CC74916423C2_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_m9E9EFFA4EA71367AFB2C1015DFDAF7AF8F1DB95C(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B1D017CE6B17E3063061116FDFA59FD0F54763B_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2__ctor_m9E9EFFA4EA71367AFB2C1015DFDAF7AF8F1DB95C(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9E9EFFA4EA71367AFB2C1015DFDAF7AF8F1DB95C_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m47F2DEB08B2F4423669606297156097195AD5074(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m00534C9FD9D6321D654BAD269F628AA3A14EC47B_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		Dictionary_2__ctor_m47171934D394BC70040707D479CED00A42092953(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m47171934D394BC70040707D479CED00A42092953_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* G_B2_0 = NULL;
	Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		Dictionary_2__ctor_m9E9EFFA4EA71367AFB2C1015DFDAF7AF8F1DB95C(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* L_11 = ((Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_13 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Guid_t L_19 = (Guid_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_22 = (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Guid_t L_32;
				L_32 = KeyValuePair_2_get_Key_m474B1FCB7438D801A743F78CDB618A06F98CA85F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_33;
				L_33 = KeyValuePair_2_get_Value_m18417E16D04D8687648F6E15EB0473B3A493B3A0_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m94FC6DDB00F8D86204AA220775FF4A47F2CA6BB7_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mA806B610D2F12436C992645A761FE30E0FC9F911_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C* Dictionary_2_get_Keys_mACB270DD53E2C90524205C532B07EECFC0FCEE56_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C* L_0 = (KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C* L_1 = (KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_mA4DC870D5A70A5AED0D1C38E1D6B087466EEF854(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C* L_2 = (KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mCA73344C9B6A7F2499E3C7ED9E543707E6584AF5_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C* L_0 = (KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C* L_1 = (KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_mA4DC870D5A70A5AED0D1C38E1D6B087466EEF854(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C* L_2 = (KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43* Dictionary_2_get_Values_m11FCFA77C66875546A74E7E8B54C84BAEFB51C0B_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43* L_0 = (ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43* L_1 = (ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_m75BD4096C726CD1A6BB0B2541062E3694704DD17(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43* L_2 = (ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m6DA69C622A19906D9974CB16B015FFB533E9EA9F_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43* L_0 = (ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43* L_1 = (ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_m75BD4096C726CD1A6BB0B2541062E3694704DD17(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43* L_2 = (ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F Dictionary_2_get_Item_m080C05FA8CA24BE242416DF32A23195CCA2BB5D0_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m21B50BBB269A57D168C1ED4605EA4C1342A0A98F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_3 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_5 = (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___key0;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F));
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m87585F5A842A0867532FDDE762235689DFCBE37A_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value1, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___key0;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m3FA48BE8CC51DF65EC263A90E22FF35BA913E420(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value1, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___key0;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m3FA48BE8CC51DF65EC263A90E22FF35BA913E420(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mB67F746FF7ABF95C2C2FB452849CBCB122A087B1_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m474B1FCB7438D801A743F78CDB618A06F98CA85F_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_1;
		L_1 = KeyValuePair_2_get_Value_m18417E16D04D8687648F6E15EB0473B3A493B3A0_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mA61EB8A8871ADC792838A3D387CF8AEF3A4514F0_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m474B1FCB7438D801A743F78CDB618A06F98CA85F_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m21B50BBB269A57D168C1ED4605EA4C1342A0A98F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* L_3;
		L_3 = EqualityComparer_1_get_Default_mFC2C0CECC0A6B1A265E40B8B7DAF079E762534AC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_4 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_6 = (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_7;
		L_7 = KeyValuePair_2_get_Value_m18417E16D04D8687648F6E15EB0473B3A493B3A0_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mE289BA0AF97E7432555D1CEEF5CAF1528F9FDFFC_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m474B1FCB7438D801A743F78CDB618A06F98CA85F_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m21B50BBB269A57D168C1ED4605EA4C1342A0A98F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* L_3;
		L_3 = EqualityComparer_1_get_Default_mFC2C0CECC0A6B1A265E40B8B7DAF079E762534AC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_4 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_6 = (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_7;
		L_7 = KeyValuePair_2_get_Value_m18417E16D04D8687648F6E15EB0473B3A493B3A0_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m474B1FCB7438D801A743F78CDB618A06F98CA85F_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mF2B688568F9E0D8E7828D5AC86C7A2A5A54F728D(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1C61FEDE0D0AC85F2C073ADE38E4707010AD87F5_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_4 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m8359E82454B8F55CD2ED534361558DC7C38C128D_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m21B50BBB269A57D168C1ED4605EA4C1342A0A98F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m82148A6EDAA9D81DFD8D9996621CE993559190B9_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* V_0 = NULL;
	int32_t V_1 = 0;
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_0 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* L_6;
		L_6 = EqualityComparer_1_get_Default_mFC2C0CECC0A6B1A265E40B8B7DAF079E762534AC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_9 = (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value_3;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_10 = ___value0;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = (int32_t)__this->____count_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4F088A68597E68CE3859A501AE518375E54C06A5_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mA806B610D2F12436C992645A761FE30E0FC9F911(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_7 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = (Guid_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_19 = (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m604202AD216DD82DC0CC062F95E457E0FABD27E8((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t69E256CA1CF69403BC36A741D5CEDD02291C9102 Dictionary_2_GetEnumerator_mFDD285ED7163669272EF404DAAF8D1B091FF2EB8_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t69E256CA1CF69403BC36A741D5CEDD02291C9102 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA849562E657A557338AAFF93CD82893EE9FF2D43((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m37C9B69D9C0AB8E180101AEDC10C96EECDAC9C6C_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t69E256CA1CF69403BC36A741D5CEDD02291C9102 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA849562E657A557338AAFF93CD82893EE9FF2D43((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t69E256CA1CF69403BC36A741D5CEDD02291C9102 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mBCC2AD5F154503F656ADD445A12F1F387046C44D_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mA806B610D2F12436C992645A761FE30E0FC9F911(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_14 = (KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F*)(KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_15 = V_0;
		Dictionary_2_CopyTo_m4F088A68597E68CE3859A501AE518375E54C06A5(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m21B50BBB269A57D168C1ED4605EA4C1342A0A98F_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_2 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = (Guid_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Guid_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___key0;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Guid_t L_48 = (Guid_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		Guid_t L_49 = ___key0;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m47F2DEB08B2F4423669606297156097195AD5074_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_5 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)(EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3FA48BE8CC51DF65EC263A90E22FF35BA913E420_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t6234B228B233406B958E5F21976FD0BF571302EA* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m47F2DEB08B2F4423669606297156097195AD5074(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_4 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = (Guid_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___m_Texture_5), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___key0;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Guid_t L_53 = (Guid_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		Guid_t L_54 = ___key0;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___behavior2;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_59 = ___value1;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3))->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3))->___m_Texture_5), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___behavior2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___key0;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mBBE273BF3126D46E1F14A4A138CA17B88E238A21(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_78 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_94 = V_10;
		Guid_t L_95 = ___key0;
		L_94->___key_2 = L_95;
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_96 = V_10;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_97 = ___value1;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value_3))->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value_3))->___m_Texture_5), (void*)NULL);
		#endif
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m40183694C1FB4992A6FA0EC47BFCF00526F5479E_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m47F2DEB08B2F4423669606297156097195AD5074(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m474B1FCB7438D801A743F78CDB618A06F98CA85F_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m474B1FCB7438D801A743F78CDB618A06F98CA85F_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_27;
		L_27 = KeyValuePair_2_get_Value_m18417E16D04D8687648F6E15EB0473B3A493B3A0_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBBE273BF3126D46E1F14A4A138CA17B88E238A21_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		Dictionary_2_Resize_m6C105485DDF343FB4038D9BACD5D9682AFBFA458(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6C105485DDF343FB4038D9BACD5D9682AFBFA458_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_3 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)(EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_5 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		Guid_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Guid_t* L_19 = (Guid_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF2B688568F9E0D8E7828D5AC86C7A2A5A54F728D_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t6234B228B233406B958E5F21976FD0BF571302EA* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_13 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_21 = V_4;
		Guid_t L_22 = (Guid_t)L_21->___key_2;
		Guid_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_25 = V_4;
		Guid_t L_26 = (Guid_t)L_25->___key_2;
		Guid_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_34 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_41 = V_4;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* L_42 = (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)(&L_41->___value_3);
		il2cpp_codegen_initobj(L_42, sizeof(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList_3 = L_43;
		int32_t L_44 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t6234B228B233406B958E5F21976FD0BF571302EA* L_47 = V_4;
		int32_t L_48 = (int32_t)L_47->___next_1;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE87077C06D8613892171836919671124469E7406_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m21B50BBB269A57D168C1ED4605EA4C1342A0A98F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* L_3 = ___value1;
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_4 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_6 = (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)L_3)->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)L_3)->___m_Texture_5), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mF0D690A1DAFB565AFD970D0ED8B842B3B476AA1B_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___key0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___value1, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___key0;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m3FA48BE8CC51DF65EC263A90E22FF35BA913E420(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m5B524DDE4B5F02AEFEA67DFBE2464F4CF688484A_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mC0F88669546AE521E071529999D0714092DEBBF9_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_0 = ___array0;
		int32_t L_1 = ___index1;
		Dictionary_2_CopyTo_m4F088A68597E68CE3859A501AE518375E54C06A5(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mC151EBB8B76D12A914A0725E553C5D806E878241_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mA806B610D2F12436C992645A761FE30E0FC9F911(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t23354220CAEC94633C30CDA93DC0E6CB64100C5F* L_14 = V_0;
		int32_t L_15 = ___index1;
		Dictionary_2_CopyTo_m4F088A68597E68CE3859A501AE518375E54C06A5(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_18 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = (Guid_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_32 = (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_42 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___index1;
			int32_t L_48 = L_47;
			___index1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = (Guid_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_54 = (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m604202AD216DD82DC0CC062F95E457E0FABD27E8((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m55B14FB0A80F387929308C26964993FAA1B38CD4_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t69E256CA1CF69403BC36A741D5CEDD02291C9102 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA849562E657A557338AAFF93CD82893EE9FF2D43((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t69E256CA1CF69403BC36A741D5CEDD02291C9102 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m6EE8CA0D012F4F8720528665C765E02114DB00D8_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m041573E02B9878AA5421CAEFBA1DD06E0064BAA1_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mA24AD539B550AEF165563574FD75BFAAFF23E9BD(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m21B50BBB269A57D168C1ED4605EA4C1342A0A98F(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* L_5 = (EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_7 = (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m35E4FED5074011DF8281D1B37D7B7D01BDBB1C28_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_mCFAF75688FF6E19E7D59DE02A0ABBDCABA11C2B3(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_set_Item_m87585F5A842A0867532FDDE762235689DFCBE37A(__this, L_3, ((*(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)((XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA24AD539B550AEF165563574FD75BFAAFF23E9BD_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_mA9160A77888D17D5703B1DDE4049F3835A3FD3A2_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_mCFAF75688FF6E19E7D59DE02A0ABBDCABA11C2B3(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D(__this, L_3, ((*(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)((XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mBFB6FE73F4C315E7DE1553E298A4803CB0680B44_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mA24AD539B550AEF165563574FD75BFAAFF23E9BD(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m8359E82454B8F55CD2ED534361558DC7C38C128D(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m066088587AA0B0E97842FC0BDA975307019E3569_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t69E256CA1CF69403BC36A741D5CEDD02291C9102 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA849562E657A557338AAFF93CD82893EE9FF2D43((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t69E256CA1CF69403BC36A741D5CEDD02291C9102 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC589DECF53BA1DF4600714FD50146A8CFC67B1CA_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m9B8CB4891D0582CE7145F17EF439A4411FE8C411(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5AC7D20A9C1D057FD7212C3D6E17B8CC2A557C8E_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_m9B8CB4891D0582CE7145F17EF439A4411FE8C411(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9BF7E736321D22A3AB709117D1C342E42155637_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2__ctor_m9B8CB4891D0582CE7145F17EF439A4411FE8C411(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9B8CB4891D0582CE7145F17EF439A4411FE8C411_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD4DCD793749F3BBCC9A983212800DCCD3EB94BCC(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE936156AFDAAA9DCC58EF518AF802A3B6F777E31_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		Dictionary_2__ctor_mDCE06FBFCE66EAF3801482A401C7A4BDE7BF18CF(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDCE06FBFCE66EAF3801482A401C7A4BDE7BF18CF_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* G_B2_0 = NULL;
	Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		Dictionary_2__ctor_m9B8CB4891D0582CE7145F17EF439A4411FE8C411(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* L_11 = ((Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_13 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Guid_t L_19 = (Guid_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_22 = (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_m19F45BEED038D3C1A70A1F22ED2F4B5F0C3E8366(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Guid_t L_32;
				L_32 = KeyValuePair_2_get_Key_mCD9EA4CF5312AC696399AB81E9EB40FE0D9BA1D8_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_33;
				L_33 = KeyValuePair_2_get_Value_m6491E26501F952E6B1721195E18BDAA9A0579672_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_m19F45BEED038D3C1A70A1F22ED2F4B5F0C3E8366(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC5BDF524215E9E9F69D6A7612A1D6C5B3118BE70_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m0029E15AFB5EC652B950162CC5E7F56AE16657F4_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE* Dictionary_2_get_Keys_mD5244F1A1F89D1E187BC654E5A78DEEB313758E9_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE* L_0 = (KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE* L_1 = (KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_m9306F71EB3605C806AE7B7053EE149F86E450BF6(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE* L_2 = (KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mD06BEEE67521F4529269FA35A9E2B8BCC708C41C_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE* L_0 = (KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE* L_1 = (KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_1);
		KeyCollection__ctor_m9306F71EB3605C806AE7B7053EE149F86E450BF6(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE* L_2 = (KeyCollection_t3B8DFE03E2895D8D2358745B67BC0B89C06C5CFE*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t8284758E20499C39755524EFC80C98D05790B662* Dictionary_2_get_Values_m868A3E34D68D58CEDC2C351B58093090DB109025_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t8284758E20499C39755524EFC80C98D05790B662* L_0 = (ValueCollection_t8284758E20499C39755524EFC80C98D05790B662*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t8284758E20499C39755524EFC80C98D05790B662* L_1 = (ValueCollection_t8284758E20499C39755524EFC80C98D05790B662*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_mB391E0FD4C53A003A6CF9DD35A3A7F13D78BAD94(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t8284758E20499C39755524EFC80C98D05790B662* L_2 = (ValueCollection_t8284758E20499C39755524EFC80C98D05790B662*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m4829F8307B2B9986BDFEAD49868A0D11AF7E91CE_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t8284758E20499C39755524EFC80C98D05790B662* L_0 = (ValueCollection_t8284758E20499C39755524EFC80C98D05790B662*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t8284758E20499C39755524EFC80C98D05790B662* L_1 = (ValueCollection_t8284758E20499C39755524EFC80C98D05790B662*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		ValueCollection__ctor_mB391E0FD4C53A003A6CF9DD35A3A7F13D78BAD94(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t8284758E20499C39755524EFC80C98D05790B662* L_2 = (ValueCollection_t8284758E20499C39755524EFC80C98D05790B662*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 Dictionary_2_get_Item_m5DD382D408E125D089AA3783A4FB261AA417FB4D_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9D80787446679BC573C5DDDAE752038B8190AAD1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_3 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_5 = (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___key0;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14));
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mDE0D8A51C6C75E00A3BCFDCE9647A8B7CA761D64_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value1, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___key0;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m3CF2211E27C657891A70258A2BF6627697FED45D(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m19F45BEED038D3C1A70A1F22ED2F4B5F0C3E8366_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value1, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___key0;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m3CF2211E27C657891A70258A2BF6627697FED45D(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m79DDF19C3B62E4CE7D824638F4D7359AAF820CCB_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mCD9EA4CF5312AC696399AB81E9EB40FE0D9BA1D8_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_1;
		L_1 = KeyValuePair_2_get_Value_m6491E26501F952E6B1721195E18BDAA9A0579672_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m19F45BEED038D3C1A70A1F22ED2F4B5F0C3E8366(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m6D28EEDDF40E620D1ABC5B494C002F128E876AE7_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mCD9EA4CF5312AC696399AB81E9EB40FE0D9BA1D8_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9D80787446679BC573C5DDDAE752038B8190AAD1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* L_3;
		L_3 = EqualityComparer_1_get_Default_mADB4BC44BBBFAD59497E0C8A17701FDEB2DAD874_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_4 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_6 = (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_7;
		L_7 = KeyValuePair_2_get_Value_m6491E26501F952E6B1721195E18BDAA9A0579672_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m7AF21D7D8D5A62F7CA277C984966558EB0A5476C_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mCD9EA4CF5312AC696399AB81E9EB40FE0D9BA1D8_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9D80787446679BC573C5DDDAE752038B8190AAD1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* L_3;
		L_3 = EqualityComparer_1_get_Default_mADB4BC44BBBFAD59497E0C8A17701FDEB2DAD874_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_4 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_6 = (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_7;
		L_7 = KeyValuePair_2_get_Value_m6491E26501F952E6B1721195E18BDAA9A0579672_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_mCD9EA4CF5312AC696399AB81E9EB40FE0D9BA1D8_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m661B56E399F98A952D7C1C0AA330E5C8DAE992B2(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m660141B65F4E126CD906CE2A3BC3BB48E455CE51_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_4 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m433AEA71F33B877C0D823FCA9B214A710723E3BE_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9D80787446679BC573C5DDDAE752038B8190AAD1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mCDB868C024B2F2C48C63B547797B1A8F3447D08F_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* V_0 = NULL;
	int32_t V_1 = 0;
	XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_0 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* L_6;
		L_6 = EqualityComparer_1_get_Default_mADB4BC44BBBFAD59497E0C8A17701FDEB2DAD874_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_9 = (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value_3;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_10 = ___value0;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = (int32_t)__this->____count_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m11FD5EADD6DE074B69867EF8981A80011B87A6E0_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m0029E15AFB5EC652B950162CC5E7F56AE16657F4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_7 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = (Guid_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_19 = (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m2E4F0E6DA9E45647A4AA602F393386BECFDE37E0((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t422F762D6B6551E5C69AFA0DC9F672063D3AA9B3 Dictionary_2_GetEnumerator_mC2F940D3F546C673B7D8FA35AE90F07EE26E7D6C_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t422F762D6B6551E5C69AFA0DC9F672063D3AA9B3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m21EC83EC5B1C47F6C29D2760424AD3D28CD77218((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mE61D267230E97EE94D78A1737F9EE939238D4D6A_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t422F762D6B6551E5C69AFA0DC9F672063D3AA9B3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m21EC83EC5B1C47F6C29D2760424AD3D28CD77218((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t422F762D6B6551E5C69AFA0DC9F672063D3AA9B3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mC30AB297FEEA99E467BC0EC8DDD989FB954C597E_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m0029E15AFB5EC652B950162CC5E7F56AE16657F4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_14 = (KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25*)(KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_15 = V_0;
		Dictionary_2_CopyTo_m11FD5EADD6DE074B69867EF8981A80011B87A6E0(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m9D80787446679BC573C5DDDAE752038B8190AAD1_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_2 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = (Guid_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Guid_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___key0;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Guid_t L_48 = (Guid_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		Guid_t L_49 = ___key0;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD4DCD793749F3BBCC9A983212800DCCD3EB94BCC_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_5 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)(EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3CF2211E27C657891A70258A2BF6627697FED45D_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD4DCD793749F3BBCC9A983212800DCCD3EB94BCC(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_4 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = (Guid_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___m_Entries_3), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___key0;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Guid_t L_53 = (Guid_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		Guid_t L_54 = ___key0;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___behavior2;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_59 = ___value1;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3))->___m_Entries_3), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___behavior2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___key0;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mDCDF7D95DF813D662E3671226DFE19E32979A4CD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_78 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_94 = V_10;
		Guid_t L_95 = ___key0;
		L_94->___key_2 = L_95;
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_96 = V_10;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_97 = ___value1;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value_3))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value_3))->___m_Entries_3), (void*)NULL);
		#endif
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m26ADCD7E3C055C7FFE6C6C3A43091D2D15628765_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mD4DCD793749F3BBCC9A983212800DCCD3EB94BCC(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_mCD9EA4CF5312AC696399AB81E9EB40FE0D9BA1D8_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_mCD9EA4CF5312AC696399AB81E9EB40FE0D9BA1D8_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_27;
		L_27 = KeyValuePair_2_get_Value_m6491E26501F952E6B1721195E18BDAA9A0579672_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m19F45BEED038D3C1A70A1F22ED2F4B5F0C3E8366(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDCDF7D95DF813D662E3671226DFE19E32979A4CD_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		Dictionary_2_Resize_m5D8A09D8B8304BA3B053FCFAE0CCAEA2DF8027D9(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5D8A09D8B8304BA3B053FCFAE0CCAEA2DF8027D9_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_3 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)(EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_5 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		Guid_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Guid_t* L_19 = (Guid_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m661B56E399F98A952D7C1C0AA330E5C8DAE992B2_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_13 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_21 = V_4;
		Guid_t L_22 = (Guid_t)L_21->___key_2;
		Guid_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_25 = V_4;
		Guid_t L_26 = (Guid_t)L_25->___key_2;
		Guid_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_34 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_41 = V_4;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* L_42 = (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)(&L_41->___value_3);
		il2cpp_codegen_initobj(L_42, sizeof(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList_3 = L_43;
		int32_t L_44 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t7277A214432E2A4A97FD8A07EB19C407327B1ADF* L_47 = V_4;
		int32_t L_48 = (int32_t)L_47->___next_1;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mAC7AA14B09521D8DAD2A36462E02AE04C60F7B7F_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9D80787446679BC573C5DDDAE752038B8190AAD1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* L_3 = ___value1;
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_4 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_6 = (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)L_3)->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)L_3)->___m_Entries_3), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mFC8A9E8222B9D97F8393FD04D406329C51A4AC58_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, Guid_t ___key0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___value1, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___key0;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m3CF2211E27C657891A70258A2BF6627697FED45D(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1D9C999EE2325A9393B7E9F42F1FBF3FD8AF5A2F_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9A434D3226FC00369B60410B3F8CF1BFE3A5B76D_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_0 = ___array0;
		int32_t L_1 = ___index1;
		Dictionary_2_CopyTo_m11FD5EADD6DE074B69867EF8981A80011B87A6E0(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m52057757A5836A9B385549CB8D22844CBAAA791D_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m0029E15AFB5EC652B950162CC5E7F56AE16657F4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t219EE3FD398B45772FD41BEE7D178223CFF61D25* L_14 = V_0;
		int32_t L_15 = ___index1;
		Dictionary_2_CopyTo_m11FD5EADD6DE074B69867EF8981A80011B87A6E0(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_18 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = (Guid_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_32 = (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_42 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___index1;
			int32_t L_48 = L_47;
			___index1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = (Guid_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_54 = (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m2E4F0E6DA9E45647A4AA602F393386BECFDE37E0((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m5ABE39839924D15D5BDBA68F96933554223C84A4_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t422F762D6B6551E5C69AFA0DC9F672063D3AA9B3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m21EC83EC5B1C47F6C29D2760424AD3D28CD77218((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t422F762D6B6551E5C69AFA0DC9F672063D3AA9B3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m0773D08D28B4871CDA4EB720F4C5C5990CC4F348_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m220E97EAC54C42275FD56E9393707300266E4856_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m58FC4AAC01F10FEECE7A45A42BFCE58B3F8524B2(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m9D80787446679BC573C5DDDAE752038B8190AAD1(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E* L_5 = (EntryU5BU5D_t7810E42ABBD0FEE15E64D9CD2D52A568F65B9F7E*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_7 = (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mC7FFF6298B235F685EF2351DE804B68A977263E6_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_m91567C90EE00F29EE9661E13FC0FE5D24DA1499E(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_set_Item_mDE0D8A51C6C75E00A3BCFDCE9647A8B7CA761D64(__this, L_3, ((*(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)((XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m58FC4AAC01F10FEECE7A45A42BFCE58B3F8524B2_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_mF5B0FD04E787E539EF2CD042F1853BD2F96651CB_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_m91567C90EE00F29EE9661E13FC0FE5D24DA1499E(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_Add_m19F45BEED038D3C1A70A1F22ED2F4B5F0C3E8366(__this, L_3, ((*(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)((XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mD975A46F615F1A754BB29CB68BB435C0FCA178CF_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m58FC4AAC01F10FEECE7A45A42BFCE58B3F8524B2(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m433AEA71F33B877C0D823FCA9B214A710723E3BE(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mF2CEB9D538A64F82C5C27747D222FD159B6C9283_gshared (Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t422F762D6B6551E5C69AFA0DC9F672063D3AA9B3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m21EC83EC5B1C47F6C29D2760424AD3D28CD77218((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t422F762D6B6551E5C69AFA0DC9F672063D3AA9B3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LessOrEqual_Invoke_m637CF3E1D9C3AEAE2343BC3BC6FE512B4A61FF3D_gshared_inline (LessOrEqual_tB9CB1D3C60EDF1D92A4F0F43C8DD1D567B2ED344* __this, RuntimeObject* ___lhs0, RuntimeObject* ___rhs1, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___lhs0, ___rhs1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_get_Default_m5E9BE2919BF81096C28022827CF5CE0920B6A1DC_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* V_0 = NULL;
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_0 = ((EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m2D9932546A3818617B3DCC9857F6722C1A4B34F7(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_gshared_inline (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_gshared_inline (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_m3F1C09001C590CF5063218C73C6AC73C19B10489_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m94F3A1710110C538BB3B3DC6C007B5C766C4C2EE(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m372AB0123DA36271016BE9011C6689744E153D85_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_0 = NULL;
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_0 = ((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD01173A7E84953D3B652E39B1F6980DAA66F72DB(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m89052E3BA988ABFCD86054C5437B0FE1CE078E7F_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_0 = NULL;
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_0 = ((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mDBC5E6A9DD70DD1731CA50A26783D19EDF662504(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyValuePair_2_get_Key_m9A6745166DEC3D2F5A49797A2914D60C83C69EC2_gshared_inline (KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyValuePair_2_get_Value_m44A480D8E4C9FCD58F4982452FC765FF704972B5_gshared_inline (KeyValuePair_2_t8BDA9D0C3882F781A153E9342D6F12C7E2C3E367* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyValuePair_2_get_Key_m2CB75931F86DCBC397685163C26E270C6BBD6217_gshared_inline (KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m90FD43AF5552F9438D4FE6F5601E5DA53600EC56_gshared_inline (KeyValuePair_2_t523686FC8AC05574D0BD5E6E8520CDE0954A127F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* EqualityComparer_1_get_Default_m75C8C52A86776E3EBDD019992DF33E5D1D194420_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* V_0 = NULL;
	{
		EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* L_0 = ((EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mA9A78B17E7B1C8F24FD8BD7A16FAC8E328B2D1A4(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE45C27E698637E8EEE9E7FC5992FA21C0EF09CD4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 KeyValuePair_2_get_Key_m921E3EE278F5D68A336842F407021F3CCB81A08C_gshared_inline (KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970* __this, const RuntimeMethod* method) 
{
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_0 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 KeyValuePair_2_get_Value_mB985E1F21E4A45776BD3DCE760A47D3ACFAA469C_gshared_inline (KeyValuePair_2_tB8D15A654549B04DBE98B20B8272C3479DA5F970* __this, const RuntimeMethod* method) 
{
	{
		Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4 L_0 = (Char32_t_tFFD201B653B9BDD59F3509F47D807E015708F2E4)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m3AD8CD9A2A0D59EB91ABABA905D0BF780B9F2CE6_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_0 = NULL;
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_0 = ((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m6DDA439269B7F1D41EEB076331FD46E59E5C53BA(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m474B1FCB7438D801A743F78CDB618A06F98CA85F_gshared_inline (KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = (Guid_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F KeyValuePair_2_get_Value_m18417E16D04D8687648F6E15EB0473B3A493B3A0_gshared_inline (KeyValuePair_2_t0998B3E42ACF8BF7AB342BC392CBDDDF201A9004* __this, const RuntimeMethod* method) 
{
	{
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_0 = (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* EqualityComparer_1_get_Default_mFC2C0CECC0A6B1A265E40B8B7DAF079E762534AC_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* V_0 = NULL;
	{
		EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* L_0 = ((EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m8634FFF7A6EFAE3F81A0192B5B40E96CE1A39B1A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tD9EF18B272BD87763DA1BADD0368BB9BA9AF2CB6* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mCD9EA4CF5312AC696399AB81E9EB40FE0D9BA1D8_gshared_inline (KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = (Guid_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 KeyValuePair_2_get_Value_m6491E26501F952E6B1721195E18BDAA9A0579672_gshared_inline (KeyValuePair_2_tCFC68887A94D262A9A53AD659B1C2CE2A71557CA* __this, const RuntimeMethod* method) 
{
	{
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_0 = (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* EqualityComparer_1_get_Default_mADB4BC44BBBFAD59497E0C8A17701FDEB2DAD874_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* V_0 = NULL;
	{
		EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* L_0 = ((EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m283AB574DEA034546A248291AB8E896DC1202EFC(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tAC2D5712264AC64EFE621B62E4E28377E2C1948E* L_4 = V_0;
		return L_4;
	}
}
