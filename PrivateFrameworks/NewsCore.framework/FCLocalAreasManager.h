
@interface FCLocalAreasManager : NSObject <FCLocalAreasManager> {
    <FCContentContext> * _contentContext;
    FCOnce * _loadFromCacheOnce;
    FCLocalAreasMapping * _localAreasMapping;
    NSDate * _localAreasMappingFetchDate;
    FCAsyncSerialQueue * _queue;
}

@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, readonly) FCOnce *loadFromCacheOnce;
@property (retain) FCLocalAreasMapping *localAreasMapping;
@property (retain) NSDate *localAreasMappingFetchDate;
@property (nonatomic, retain) FCAsyncSerialQueue *queue;

- (void).cxx_destruct;
- (void)_loadFromCache;
- (void)_refreshWithQoS:(long long)arg1 completion:(id /* block */)arg2;
- (id)contentContext;
- (void)fetchLocalAreasProvider:(id /* block */)arg1;
- (id)initWithContentContext:(id)arg1;
- (id)loadFromCacheOnce;
- (id)localAreasMapping;
- (id)localAreasMappingFetchDate;
- (id)queue;
- (void)setContentContext:(id)arg1;
- (void)setLocalAreasMapping:(id)arg1;
- (void)setLocalAreasMappingFetchDate:(id)arg1;
- (void)setQueue:(id)arg1;

@end
