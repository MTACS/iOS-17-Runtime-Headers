
@interface PHASESoundEventNodeAsset : PHASEAsset {
    struct unique_ptr<Phase::ActionTree, std::default_delete<Phase::ActionTree>> { 
        struct __compressed_pair<Phase::ActionTree *, std::default_delete<Phase::ActionTree>> { 
            struct ActionTree {} *__value_; 
        } __ptr_; 
    }  _actionTreeOwnedAsset;
    const void * _actionTreeReference;
    struct unordered_map<unsigned long long, std::deque<int>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::deque<int>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, std::deque<int>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::deque<int>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::deque<int>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::deque<int>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::deque<int>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::deque<int>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _randomHistory;
    NSMutableDictionary * _streamNodeFormats;
}

@property (nonatomic, readonly) NSMutableDictionary *streamNodeFormats;

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)getActionTree;
- (void*)getRandomHistory:(unsigned long long)arg1;
- (id)init;
- (id)initWithUID:(id)arg1 actionTreeWeakReference:(const void*)arg2 assetRegistry:(id)arg3 details:(id)arg4;
- (id)initWithUID:(id)arg1 assetRegistry:(id)arg2;
- (id)initWithUID:(id)arg1 ownedActionTree:(struct unique_ptr<Phase::ActionTree, std::default_delete<Phase::ActionTree>> { struct __compressed_pair<Phase::ActionTree *, std::default_delete<Phase::ActionTree>> { struct ActionTree {} *x_1_1_1; } x1; })arg2 assetRegistry:(id)arg3 details:(id)arg4;
- (unsigned long long)sizeInBytes;
- (id)streamNodeFormats;

@end
