
@interface DS_TKeyValueObserverGlue : NSObject {
    struct function<void ()>="__f_"{__value_func<void ()>="__buf_"{type="__lx"[24C] {}  _functor;
    struct function<void (NSDictionary<NSString *,NSObject *> *)>="__f_"{__value_func<void (NSDictionary<NSString *,NSObject *> *)>="__buf_"{type="__lx"[24C] {}  _functorWithChange;
    struct TString { 
        struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { 
            struct __CFString {} *fRef; 
        } fString; 
    }  _observedKeyPath;
    struct unordered_set<NSObject *__unsafe_unretained, std::hash<NSObject *__unsafe_unretained>, std::equal_to<NSObject *__unsafe_unretained>, std::allocator<NSObject *__unsafe_unretained>> { 
        struct __hash_table<NSObject *__unsafe_unretained, std::hash<NSObject *__unsafe_unretained>, std::equal_to<NSObject *__unsafe_unretained>, std::allocator<NSObject *__unsafe_unretained>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *>, std::allocator<std::__hash_node<NSObject *__unsafe_unretained, void *>>> { 
                struct __hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<NSObject *__unsafe_unretained>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<NSObject *__unsafe_unretained>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _observedObjects;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)initCommon:(const void*)arg1 observedKeyPath:(const void*)arg2;
- (id)initWithFunctor:(const void*)arg1 observedObjects:(const void*)arg2 observedKeyPath:(const void*)arg3;
- (id)initWithFunctorWithChange:(const void*)arg1 observedObjects:(const void*)arg2 observedKeyPath:(const void*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
