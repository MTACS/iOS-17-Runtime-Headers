
@interface SICoreAnalyticManager : NSObject {
    struct unordered_map<const char *, float, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, float>>> { 
        struct __hash_table<std::__hash_value_type<const char *, float>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, float>, std::hash<const char *>, std::equal_to<const char *>>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, float>, std::equal_to<const char *>, std::hash<const char *>>, std::allocator<std::__hash_value_type<const char *, float>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, float>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, float>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, float>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, float>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, float>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, float>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, float>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, float>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, float>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, float>, std::hash<const char *>, std::equal_to<const char *>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, float>, std::equal_to<const char *>, std::hash<const char *>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _accumulatedData;
    NSSet * _accumulatedDataKeys;
    NSString * _coreAnalyticEventName;
    int  _coreAnalyticTimeInterval;
    NSString * _countItemKey;
    double  _createdTime;
    double  _elapseTime;
    double  _lastSummaryTimestamp;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)accumulateStatisticDataForKey:(id)arg1 value:(float)arg2;
- (void)averageAccumulatedDataOverKey:(id)arg1;
- (id)coreAnalyticDictionary;
- (id)initWithEventName:(id)arg1 requiredKeys:(id)arg2 minLogTimeInterval:(int)arg3;
- (void)resetStatisticData;
- (void)summaryCoreAnalyticEvent;

@end
