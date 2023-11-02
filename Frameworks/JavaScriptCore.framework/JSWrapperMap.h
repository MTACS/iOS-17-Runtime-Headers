
@interface JSWrapperMap : NSObject {
    struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject>, std::default_delete<JSC::WeakGCMap<id, JSC::JSObject>>> { 
        struct __compressed_pair<JSC::WeakGCMap<id, JSC::JSObject> *, std::default_delete<JSC::WeakGCMap<id, JSC::JSObject>>> { 
            void *__value_; 
        } __ptr_; 
    }  m_cachedJSWrappers;
    struct RetainPtr<NSMapTable> { 
        void *m_ptr; 
    }  m_cachedObjCWrappers;
    struct RetainPtr<NSMutableDictionary> { 
        void *m_ptr; 
    }  m_classMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classInfoForClass:(Class)arg1;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
- (id)jsWrapperForObject:(id)arg1 inContext:(id)arg2;
- (id)objcWrapperForJSValueRef:(struct OpaqueJSValue { }*)arg1 inContext:(id)arg2;

@end
