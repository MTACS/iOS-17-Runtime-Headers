
@interface TBDataSourceMediator : NSObject {
    NSOperationQueue * _fetchQueue;
    TBCoreDataSource * _local;
    TBDataSource * _remote;
}

@property (nonatomic, retain) NSOperationQueue *fetchQueue;
@property (nonatomic, retain) TBCoreDataSource *local;
@property (nonatomic, retain) TBDataSource *remote;

- (void).cxx_destruct;
- (void)executeFetchRequest:(id)arg1;
- (id)fetchQueue;
- (id)initWithLocalStoreDescriptor:(id)arg1;
- (id)initWithLocalStoreDescriptor:(id)arg1 remoteStore:(id)arg2;
- (id)local;
- (void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)remote;
- (void)removeAllWithCompletionHandler:(id /* block */)arg1;
- (void)removeWithFetchRequest:(id)arg1;
- (void)setFetchQueue:(id)arg1;
- (void)setLocal:(id)arg1;
- (void)setRemote:(id)arg1;

@end
