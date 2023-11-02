
@interface HDSampleAggregateCachingSession : NSObject {
    HDAssertion * _accessibilityAssertion;
    NSDate * _anchorDate;
    bool  _anchorSetOnInsert;
    HDSampleAggregateCacheStore * _cacheStore;
    Class  _cachedClass;
    NSString * _cachingIdentifier;
    NSError * _fatalError;
    long long  _generationNumber;
    NSDateComponents * _intervalComponents;
    NSArray * _invalidationQueryDescriptors;
    long long  _maxAnchor;
    NSDate * _persistentAnchorDate;
    HDProfile * _profile;
    NSDateInterval * _queryInterval;
    NSError * _sampleAggregateCachingSessionQueue_insertError;
    HDSourceEntity * _sourceEntity;
    struct unordered_set<long, std::hash<long>, std::equal_to<long>, std::allocator<long>> { 
        struct __hash_table<long, std::hash<long>, std::equal_to<long>, std::allocator<long>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<long, void *> *>, std::allocator<std::__hash_node<long, void *>>> { 
                struct __hash_node_base<std::__hash_node<long, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<long>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<long>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _staleIndexes;
    long long  _state;
}

@property (nonatomic, retain) HDAssertion *accessibilityAssertion;
@property (nonatomic, copy) NSArray *invalidationQueryDescriptors;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityAssertion;
- (bool)activateWithError:(id*)arg1 cacheHandler:(id /* block */)arg2;
- (long long)cachesExistWithError:(id*)arg1;
- (void)deleteCachesForIntervals:(id)arg1 completion:(id /* block */)arg2;
- (void)finishWithCompletion:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 cachingIdentifier:(id)arg2 sourceEntity:(id)arg3 queryDescriptor:(id)arg4 cachedClass:(Class)arg5 queryInterval:(id)arg6 anchorDate:(id)arg7 intervalComponents:(id)arg8 timeIntervalToBucketIndex:(id /* block */)arg9;
- (void)insertCaches:(id)arg1 anchor:(id)arg2 completion:(id /* block */)arg3;
- (id)invalidationQueryDescriptors;
- (id)persistentAnchorDateWithError:(id*)arg1;
- (void)setAccessibilityAssertion:(id)arg1;
- (void)setInvalidationQueryDescriptors:(id)arg1;

@end
