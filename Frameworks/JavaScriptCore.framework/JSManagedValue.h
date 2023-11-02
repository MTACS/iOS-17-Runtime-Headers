
@interface JSManagedValue : NSObject {
    struct Weak<JSC::JSGlobalObject> { 
        struct WeakImpl {} *m_impl; 
    }  m_globalObject;
    struct RefPtr<JSC::JSLock, WTF::RawPtrTraits<JSC::JSLock>, WTF::DefaultRefDerefTraits<JSC::JSLock>> { 
        struct JSLock {} *m_ptr; 
    }  m_lock;
    struct RetainPtr<NSMapTable> { 
        void *m_ptr; 
    }  m_owners;
    struct JSWeakValue { 
        int m_tag; 
        union WeakValueUnion { 
            struct JSValue { 
                union EncodedValueDescriptor { 
                    long long asInt64; 
                    struct JSCell {} *ptr; 
                    struct { 
                        int payload; 
                        int tag; 
                    } asBits; 
                } u; 
            } primitive; 
            struct Weak<JSC::JSObject> { 
                struct WeakImpl {} *m_impl; 
            } object; 
            struct Weak<JSC::JSString> { 
                struct WeakImpl {} *m_impl; 
            } string; 
        } m_value; 
    }  m_weakValue;
}

@property (readonly) JSValue *value;

+ (id)managedValueWithValue:(id)arg1;
+ (id)managedValueWithValue:(id)arg1 andOwner:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didAddOwner:(id)arg1;
- (void)didRemoveOwner:(id)arg1;
- (void)disconnectValue;
- (id)init;
- (id)initWithValue:(id)arg1;
- (id)value;

@end
