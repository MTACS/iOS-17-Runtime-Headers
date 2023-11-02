
@interface WBSHistoryServiceURLCompletion : NSObject {
    struct URLCompletionEntryMap { 
        struct HashTable<SafariShared::URLCompletionEntryKey, SafariShared::URLCompletionEntry, SafariShared::URLCompletionEntryKeyExtractor, SafariShared::URLCompletionEntryHash, SafariShared::URLCompletionEntryValueTraits, SafariShared::URLCompletionEntryKeyTraits> { 
            union { 
                struct URLCompletionEntry {} *m_table; 
                unsigned int *m_tableForLLDB; 
            } ; 
        } _map; 
        struct unordered_map<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>>> { 
            struct __hash_table<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::hash<NSString *>, std::equal_to<NSString *>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::equal_to<NSString *>, std::hash<NSString *>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } _extras; 
    }  _map;
    NSObject<OS_dispatch_queue> * _queue;
    struct unordered_multimap<NSString *, NSString *, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, NSString *>>> { 
        struct __hash_table<std::__hash_value_type<NSString *, NSString *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, NSString *>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, NSString *>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, NSString *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, NSString *>, std::hash<NSString *>, std::equal_to<NSString *>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, NSString *>, std::equal_to<NSString *>, std::hash<NSString *>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _redirectSources;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_endOfRedirectChain:(id)arg1;
- (id)_warmUpWithDatabase:(id)arg1;
- (void)computeFrequentlyVisitedSites:(unsigned long long)arg1 minimalVisitCountScore:(unsigned long long)arg2 blockList:(id)arg3 allowList:(id)arg4 options:(unsigned long long)arg5 currentTime:(double)arg6 completionHandler:(id /* block */)arg7;
- (id)init;
- (double)lastVisitTimeForURLString:(id)arg1;
- (void)noteRedirectFromURLString:(id)arg1 toURLString:(id)arg2;
- (bool)queryVisitCounts:(id)arg1 outVisitCountScore:(long long*)arg2 outDailyVisitCounts:(id*)arg3 outWeeklyVisitCounts:(id*)arg4;
- (void)recordVisit:(id)arg1 sourceVisit:(id)arg2 title:(id)arg3 loadSuccessful:(bool)arg4 visitWasFromThisDevice:(bool)arg5 increaseVisitCount:(bool)arg6 score:(int)arg7 statusCode:(long long)arg8;
- (void)removeURLStrings:(id)arg1;
- (void)searchForUserTypedString:(id)arg1 options:(unsigned long long)arg2 currentTime:(double)arg3 enumerationGroup:(id)arg4 enumerationBlock:(id /* block */)arg5;
- (void)updateItemWithLatestVisit:(id)arg1 database:(id)arg2;
- (void)updateURLString:(id)arg1 autocompleteTriggerData:(id)arg2;
- (void)updateVisit:(id)arg1 oldScore:(int)arg2 newScore:(int)arg3 completionHandler:(id /* block */)arg4;
- (void)updateVisit:(id)arg1 title:(id)arg2;
- (id)warmUpWithDatabase:(id)arg1;

@end
