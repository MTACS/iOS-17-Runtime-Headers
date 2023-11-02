
@interface KMCoreRoutineBridge : NSObject <KMProviderDatasetBridge> {
    KVItemMapper * _itemMapper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchLocationOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (long long)itemType;
- (id)originAppId;

@end
