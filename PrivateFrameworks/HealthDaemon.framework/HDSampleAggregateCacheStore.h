
@interface HDSampleAggregateCacheStore : NSObject {
    NSDate * _anchorDate;
    NSString * _cachingIdentifier;
    NSDateComponents * _intervalComponents;
    NSArray * _invalidationQueryDescriptors;
    NSDate * _persistentAnchorDate;
    HDProfile * _profile;
    HDQueryDescriptor * _queryDescriptor;
    HDSourceEntity * _sourceEntity;
    id /* block */  _timeIntervalToBucketIndex;
}

@property (nonatomic, copy) NSArray *invalidationQueryDescriptors;
@property (nonatomic, readonly, copy) HDQueryDescriptor *queryDescriptor;
@property (nonatomic, copy) id /* block */ timeIntervalToBucketIndex;

- (void).cxx_destruct;
- (long long)cachesExistWithError:(id*)arg1;
- (bool)deleteCachesForIndexes:(id)arg1 generationNumber:(long long)arg2 error:(id*)arg3;
- (bool)enumerateForInterval:(id)arg1 cachedClass:(Class)arg2 anchorAfterDatabaseScan:(long long*)arg3 error:(id*)arg4 cacheHandler:(id /* block */)arg5;
- (bool)enumerateForInterval:(id)arg1 cachedClass:(Class)arg2 anchorAfterDatabaseScan:(long long*)arg3 nowDate:(id)arg4 calendar:(id)arg5 error:(id*)arg6 cacheHandler:(id /* block */)arg7;
- (id)initWithProfile:(id)arg1 queryDescriptor:(id)arg2 cachingIdentifier:(id)arg3 sourceEntity:(id)arg4 anchorDate:(id)arg5 intervalComponents:(id)arg6 timeIntervalToBucketIndex:(id /* block */)arg7;
- (id)invalidationQueryDescriptors;
- (id)persistentAnchorDateWithError:(id*)arg1;
- (id)queryDescriptor;
- (bool)saveCaches:(id)arg1 generationNumber:(long long)arg2 error:(id*)arg3;
- (void)setInvalidationQueryDescriptors:(id)arg1;
- (void)setTimeIntervalToBucketIndex:(id /* block */)arg1;
- (id /* block */)timeIntervalToBucketIndex;

@end
