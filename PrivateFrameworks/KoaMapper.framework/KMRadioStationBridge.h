
@interface KMRadioStationBridge : NSObject <KMProviderBridgeListener, KMProviderDatasetBridge> {
    KVItemBuilder * _builder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)bootstrapListenerWithHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (long long)itemType;
- (id)originAppId;

@end
