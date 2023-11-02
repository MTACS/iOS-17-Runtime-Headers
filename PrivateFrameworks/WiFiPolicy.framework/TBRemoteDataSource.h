
@interface TBRemoteDataSource : TBDataSource {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_captureTileFetchError:(id)arg1 tileKey:(id)arg2 duration:(double)arg3 trigger:(unsigned long long)arg4;
- (void)_executeLocationFetchRequest:(id)arg1;
- (void)_executeNetworkFetchRequest:(id)arg1;
- (void)_executeTileFetchRequest:(id)arg1;
- (void)_fetchTilesForTileItems:(id)arg1 completionHandler:(id /* block */)arg2 trigger:(unsigned long long)arg3;
- (void)_fetchTilesWithRequest:(id)arg1;
- (void)_submitNetworkSearch:(id)arg1 completion:(id /* block */)arg2;
- (void)_writeSearchTileToFile:(id)arg1;
- (void)executeFetchRequest:(id)arg1;
- (id)init;
- (id)queue;
- (void)setQueue:(id)arg1;
- (unsigned long long)type;

@end
