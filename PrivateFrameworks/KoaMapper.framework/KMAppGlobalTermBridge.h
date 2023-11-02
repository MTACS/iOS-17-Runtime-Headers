
@interface KMAppGlobalTermBridge : NSObject <KMProviderDatasetBridge> {
    NSString * _appId;
    NSURL * _appIntentVocabURL;
    struct __CFBundle { } * _cfbundle;
    KVItemMapper * _itemMapper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithDeletedOriginAppId:(id)arg1 itemMapper:(id)arg2;
- (id)initWithOriginAppId:(id)arg1 languageCode:(id)arg2 itemMapper:(id)arg3;
- (long long)itemType;
- (id)originAppId;

@end
