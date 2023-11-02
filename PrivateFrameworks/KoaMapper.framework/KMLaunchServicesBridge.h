
@interface KMLaunchServicesBridge : NSObject <KMProviderDatasetBridge> {
    NSDictionary * _additionalFields;
    KVItemMapper * _itemMapper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appEnumerator;
- (bool)_checkAppValidity:(id)arg1;
- (id)_getOverrideByInfoPlist:(id)arg1;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithLanguageCode:(id)arg1;
- (long long)itemType;
- (id)originAppId;

@end
