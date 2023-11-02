
@interface TabSnapshotCacheStressTestRunner : NSObject <TabSnapshotCacheDelegate> {
    TabSnapshotCache * _cache;
    unsigned long long  _cachesUntilNextIteration;
    NSMutableOrderedSet * _currentUUIDs;
    <TabSnapshotCacheStressTestRunnerDelegate> * _delegate;
    unsigned long long  _iterations;
    unsigned long long  _maxIterations;
}

@property (nonatomic, retain) TabSnapshotCache *cache;
@property (nonatomic) unsigned long long cachesUntilNextIteration;
@property (nonatomic, retain) NSMutableOrderedSet *currentUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TabSnapshotCacheStressTestRunnerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iterations;
@property (nonatomic) unsigned long long maxIterations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_mutableOrderedSetOfUUIDsWithCount:(unsigned long long)arg1;
- (id)_mutatedUUIDsFromUUIDs:(id)arg1;
- (void)_runIteration;
- (id)cache;
- (unsigned long long)cachesUntilNextIteration;
- (unsigned long long)capacityForTabSnapshotCache:(id)arg1;
- (id)currentUUIDs;
- (id)delegate;
- (unsigned long long)iterations;
- (unsigned long long)maxIterations;
- (void)setCache:(id)arg1;
- (void)setCachesUntilNextIteration:(unsigned long long)arg1;
- (void)setCurrentUUIDs:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIterations:(unsigned long long)arg1;
- (void)setMaxIterations:(unsigned long long)arg1;
- (id)snapshotsToPersistOnDiskForTabSnapshotCache:(id)arg1;
- (void)start;
- (void)tabSnapshotCache:(id)arg1 didCacheSnapshotWithIdentifier:(id)arg2;
- (void)tabSnapshotCache:(id)arg1 didEvictSnapshotWithIdentifier:(id)arg2;
- (void)tabSnapshotCache:(id)arg1 requestSnapshotWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (bool)tabSnapshotCache:(id)arg1 shouldRequestSavedSnapshotWithIdentifier:(id)arg2;
- (void)tabSnapshotCacheDidFinishUpdating:(id)arg1;
- (bool)tabSnapshotCacheShouldDeferNextSnapshotRequest:(id)arg1;

@end
