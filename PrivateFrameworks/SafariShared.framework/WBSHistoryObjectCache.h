
@interface WBSHistoryObjectCache : NSObject {
    struct unordered_map<long long, WBSHistoryItem *, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, WBSHistoryItem *>>> { 
        struct __hash_table<std::__hash_value_type<long long, WBSHistoryItem *>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, WBSHistoryItem *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::hash<long long>, std::equal_to<long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::equal_to<long long>, std::hash<long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _itemsByDatabaseID;
    struct unordered_map<long long, WBSHistoryVisit *__weak, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, WBSHistoryVisit *__weak>>> { 
        struct __hash_table<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, WBSHistoryVisit *__weak>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::hash<long long>, std::equal_to<long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::equal_to<long long>, std::hash<long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _weakVisitsByDatabaseID;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearNilReferences;
- (id)allItems;
- (void)changeItemIDs:(id)arg1;
- (void)changeVisitIDs:(id)arg1;
- (void)clear;
- (id)init;
- (id)itemForID:(long long)arg1;
- (void)removeItemWithID:(long long)arg1;
- (void)reserveItemCapacity:(long long)arg1;
- (void)setItem:(id)arg1 forID:(long long)arg2;
- (void)setVisit:(id)arg1 forID:(long long)arg2;
- (id)visitForID:(long long)arg1;

@end
