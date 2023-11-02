
@interface KMIntentVocabularyDatasetBridge : NSObject <KMProviderDatasetBridge> {
    NSString * _appId;
    KMIntentVocabularyAuthorization * _authorization;
    NSArray * _intentSlots;
    KVItemMapper * _itemMapper;
    KMIntentVocabularyStoreManager * _storeManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithAppId:(id)arg1 intentSlots:(id)arg2 storeManager:(id)arg3 authorization:(id)arg4 itemMapper:(id)arg5;
- (long long)itemType;
- (id)originAppId;

@end
