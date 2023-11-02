
@interface ATXActionCacheReader : ATXActionCacheClientReader {
    NSString * _abGroup;
    struct unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::allocator<std::pair<ATXAction *const, int>>> { 
        struct __hash_table<std::__hash_value_type<ATXAction *, int>, std::__unordered_map_hasher<ATXAction *, std::__hash_value_type<ATXAction *, int>, ATXActionHash, ATXActionEqual>, std::__unordered_map_equal<ATXAction *, std::__hash_value_type<ATXAction *, int>, ATXActionEqual, ATXActionHash>, std::allocator<std::__hash_value_type<ATXAction *, int>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<ATXAction *, std::__hash_value_type<ATXAction *, int>, ATXActionHash, ATXActionEqual>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<ATXAction *, std::__hash_value_type<ATXAction *, int>, ATXActionEqual, ATXActionHash>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _actionToIndexMap;
    long long  _assetVersion;
    struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { 
        struct ATXPredictionItem {} *__begin_; 
        struct ATXPredictionItem {} *__end_; 
        struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { 
            struct ATXPredictionItem {} *__value_; 
        } __end_cap_; 
    }  _extraPredictionItems;
    struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { 
        struct ATXPredictionItem {} *__begin_; 
        struct ATXPredictionItem {} *__end_; 
        struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { 
            struct ATXPredictionItem {} *__value_; 
        } __end_cap_; 
    }  _predictionItems;
}

@property (nonatomic, readonly) NSString *abGroup;
@property (nonatomic, readonly) long long assetVersion;

+ (void)_getActionKeyToPredictionItemMapFromChunk:(id)arg1 map:(void*)arg2 abGroup:(id*)arg3 assetVersion:(long long*)arg4;
+ (void)_getExtraPredictionsFromChunk:(id)arg1 map:(void*)arg2 abGroup:(id*)arg3 assetVersion:(long long*)arg4;
+ (void)_getIndexToPredictionItemMapWithChunk:(id)arg1 withPredictionCount:(long long)arg2 map:(void*)arg3 abGroup:(id*)arg4 assetVersion:(long long*)arg5;
+ (struct unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::allocator<std::pair<NSString *const, ATXPredictionItem>>> { struct __hash_table<std::__hash_value_type<NSString *, ATXPredictionItem>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, ATXNSStringEqual>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, ATXNSStringHash>, std::allocator<std::__hash_value_type<NSString *, ATXPredictionItem>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; })getActionKeyToPredictionItemMapFromChunk:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::allocator<std::pair<ATXAction *const, int>>> { struct __hash_table<std::__hash_value_type<ATXAction *, int>, std::__unordered_map_hasher<ATXAction *, std::__hash_value_type<ATXAction *, int>, ATXActionHash, ATXActionEqual>, std::__unordered_map_equal<ATXAction *, std::__hash_value_type<ATXAction *, int>, ATXActionEqual, ATXActionHash>, std::allocator<std::__hash_value_type<ATXAction *, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; })_getActionToIndexMap;
- (id)abGroup;
- (long long)assetVersion;
- (void)enumerateActionsAndPredictionItemsForConsumerSubtype:(unsigned char)arg1 limit:(unsigned long long)arg2 block:(id /* block */)arg3;
- (void)enumerateExtraPredictionItemsWithBlock:(id /* block */)arg1;
- (void)failAndLog:(id)arg1;
- (id)init;
- (id)initWithChunks:(id)arg1;
- (id)initWithData:(id)arg1;
- (struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; })predictionItemForAction:(id)arg1;

@end
