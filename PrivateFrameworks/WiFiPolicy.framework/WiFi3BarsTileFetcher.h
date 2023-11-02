
@interface WiFi3BarsTileFetcher : NSObject {
    NSXPCConnection * _connectionToService;
    TBDataSourceMediator * _dataSourceMediator;
    unsigned long long  _lastFetchedKey;
    WiFi3BarsTileCacheObserver * _tileCacheObserver;
}

@property (nonatomic, readonly) NSXPCConnection *connectionToService;
@property (nonatomic, retain) TBDataSourceMediator *dataSourceMediator;
@property (nonatomic) unsigned long long lastFetchedKey;
@property (nonatomic, retain) WiFi3BarsTileCacheObserver *tileCacheObserver;

- (void).cxx_destruct;
- (void)_handleLocationManagerVisitCallbackWithVisit:(id)arg1;
- (id)connectionToService;
- (id)dataSourceMediator;
- (void)dealloc;
- (id)initWithDataSourceMediator:(id)arg1;
- (unsigned long long)lastFetchedKey;
- (void)setDataSourceMediator:(id)arg1;
- (void)setLastFetchedKey:(unsigned long long)arg1;
- (void)setTileCacheObserver:(id)arg1;
- (id)tileCacheObserver;

@end
