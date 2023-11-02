
@interface HMDBackingStoreCacheFetchGroupInformation : HMDBackingStoreOperation {
    id /* block */  _fetchResult;
    HMDBackingStoreCacheGroup * _group;
}

@property (nonatomic, copy) id /* block */ fetchResult;
@property (nonatomic, retain) HMDBackingStoreCacheGroup *group;

- (void).cxx_destruct;
- (id /* block */)fetchResult;
- (id)group;
- (id)initWithGroup:(id)arg1 fetchResult:(id /* block */)arg2;
- (id)mainReturningError;
- (void)setFetchResult:(id /* block */)arg1;
- (void)setGroup:(id)arg1;

@end
