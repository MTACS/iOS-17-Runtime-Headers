
@interface HMDBackingStoreCacheFetchMigratedResult : HMDBackingStoreOperation {
    id /* block */  _fetchResult;
    HMDBackingStoreCacheGroup * _group;
    bool  _migration;
    bool  _update;
}

@property (nonatomic, copy) id /* block */ fetchResult;
@property (nonatomic, retain) HMDBackingStoreCacheGroup *group;
@property (readonly) bool migration;
@property (readonly) bool update;

- (void).cxx_destruct;
- (id /* block */)fetchResult;
- (id)group;
- (id)initWithGroup:(id)arg1 update:(bool)arg2 migration:(bool)arg3 fetchResult:(id /* block */)arg4;
- (id)mainReturningError;
- (bool)migration;
- (void)setFetchResult:(id /* block */)arg1;
- (void)setGroup:(id)arg1;
- (bool)update;

@end
