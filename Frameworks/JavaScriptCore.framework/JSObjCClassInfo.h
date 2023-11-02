
@interface JSObjCClassInfo : NSObject {
    bool  m_block;
    Class  m_class;
    struct NakedPtr<OpaqueJSClass> { 
        struct OpaqueJSClass {} *m_ptr; 
    }  m_classRef;
    struct Weak<JSC::JSObject> { 
        struct WeakImpl {} *m_impl; 
    }  m_constructor;
    struct Weak<JSC::JSObject> { 
        struct WeakImpl {} *m_impl; 
    }  m_prototype;
    struct Weak<JSC::Structure> { 
        struct WeakImpl {} *m_impl; 
    }  m_structure;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct pair<JSC::JSObject *, JSC::JSObject *> { struct JSObject {} *x1; struct JSObject {} *x2; })allocateConstructorAndPrototypeInContext:(id)arg1;
- (void*)constructorInContext:(id)arg1;
- (void)dealloc;
- (id)initForClass:(Class)arg1;
- (void*)prototypeInContext:(id)arg1;
- (void*)structureInContext:(id)arg1;
- (void*)wrapperForObject:(id)arg1 inContext:(id)arg2;

@end
