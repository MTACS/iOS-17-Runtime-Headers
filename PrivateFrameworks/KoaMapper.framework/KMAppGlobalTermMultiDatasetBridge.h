
@interface KMAppGlobalTermMultiDatasetBridge : NSObject <KMProviderMultiDatasetBridge> {
    NSSet * _deletedAppIds;
    KVItemMapper * _itemMapper;
    NSString * _languageCode;
    NSSet * _modifiedAppIds;
}

- (void).cxx_destruct;
- (void)enumerateAllDatasets:(unsigned long long*)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithModifiedOriginAppIds:(id)arg1 deletedOriginAppIds:(id)arg2 languageCode:(id)arg3;

@end
