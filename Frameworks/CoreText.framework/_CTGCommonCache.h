
@interface _CTGCommonCache : NSObject {
    struct GCommonCache { 
        struct LangSysTable {} *fLastLangSysTable; 
        struct atomic<const unsigned int *> { 
            struct __cxx_atomic_impl<const unsigned int *, std::__cxx_atomic_base_impl<const unsigned int *>> { 
                _Atomic unsigned int *__a_value; 
            } __a_; 
        } fDynamicClassTable; 
    }  _cache;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
