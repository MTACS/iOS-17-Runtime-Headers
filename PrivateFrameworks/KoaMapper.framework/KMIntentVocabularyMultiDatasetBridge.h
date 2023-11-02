
@interface KMIntentVocabularyMultiDatasetBridge : NSObject <KMProviderMultiDatasetBridge> {
    KMIntentVocabularyAuthorization * _authorization;
    KVItemMapper * _itemMapper;
    KMIntentVocabularyStoreManager * _storeManager;
}

- (void).cxx_destruct;
- (void)enumerateAllDatasets:(unsigned long long*)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithStoreManager:(id)arg1 authorization:(id)arg2;

@end
