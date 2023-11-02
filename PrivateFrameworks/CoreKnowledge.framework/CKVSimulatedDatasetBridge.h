
@interface CKVSimulatedDatasetBridge : NSObject <KMProviderDatasetBridge> {
    KVDataset * _dataset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithDataset:(id)arg1;
- (long long)itemType;
- (id)originAppId;

@end
