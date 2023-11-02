
@interface XRLazyKVOAdapter : NSObject {
    bool  _implementsWillChangeHandler;
    NSMapTable * _keyPathsByContextByClz;
    NSMapTable * _keyPathsByContextByObj;
    struct unordered_set<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>> { 
        struct __hash_table<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<const void *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *>, std::allocator<std::__hash_node<const void *, void *>>> { 
                struct __hash_node_base<std::__hash_node<const void *, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<const void *>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<const void *>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _presentedContexts;
    <XRLazyKVOResponder> * _responder;
    NSArray * _runLoopModes;
    _XRLazyKVOBlockToken * _strongBlockAdapterToken;
    bool  _suspended;
    struct unordered_set<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>> { 
        struct __hash_table<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<const void *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *>, std::allocator<std::__hash_node<const void *, void *>>> { 
                struct __hash_node_base<std::__hash_node<const void *, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<const void *>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<const void *>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _updatedContexts;
}

@property (nonatomic, copy) NSArray *runLoopModes;
@property (nonatomic, retain) _XRLazyKVOBlockToken *strongBlockAdapterToken;
@property (getter=isSuspended, nonatomic) bool suspended;

+ (id)observeKeyPath:(id)arg1 object:(id)arg2 observer:(id)arg3 lazyUpdateBlock:(id /* block */)arg4;
+ (id)observeKeyPathArray:(id)arg1 object:(id)arg2 observer:(id)arg3 lazyUpdateBlock:(id /* block */)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_callbackHandler;
- (void)clear;
- (void)dealloc;
- (void)fireCallbackContext:(const void*)arg1 whenKeypaths:(id)arg2 changeOnClass:(Class)arg3;
- (bool)hasContextChanged:(const void*)arg1;
- (id)init;
- (id)initWithLazyKVOResponder:(id)arg1;
- (bool)isSuspended;
- (void)observeObject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObservationsForObject:(id)arg1;
- (id)runLoopModes;
- (void)setRunLoopModes:(id)arg1;
- (void)setStrongBlockAdapterToken:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (id)strongBlockAdapterToken;

@end
