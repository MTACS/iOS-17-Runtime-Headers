
@interface FICompoundNode : FICustomNode {
    NSArray * _nodes;
    struct unordered_set<FINode *, std::hash<FINode *>, std::equal_to<FINode *>, std::allocator<FINode *>> { 
        struct __hash_table<FINode *, std::hash<FINode *>, std::equal_to<FINode *>, std::allocator<FINode *>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<FINode *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<FINode *, void *> *>, std::allocator<std::__hash_node<FINode *, void *>>> { 
                struct __hash_node_base<std::__hash_node<FINode *, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<FINode *>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<FINode *>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _nodesToComplete;
    bool  _openSyncStartedSent;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dispatchEvent:(id)arg1 forObserver:(id)arg2;
- (id)fileURL;
- (id)fpItem;
- (id)initWithFINodes:(id)arg1;
- (id)iteratorIncludingInvisibleItems:(bool)arg1 synchronous:(bool)arg2;
- (id)nodesToObserve;
- (void)synchronizeChildren:(unsigned int)arg1 events:(void*)arg2;

@end
