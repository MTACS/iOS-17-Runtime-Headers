
@interface KMLanguageModelBridge : NSObject <KMProviderDatasetBridge> {
    KVItemBuilder * _builder;
    NSString * _languageCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getItemWithTokenID:(unsigned int)arg1 dynamicToken:(id)arg2 error:(id*)arg3;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithLanguageCode:(id)arg1;
- (long long)itemType;
- (id)originAppId;

@end
