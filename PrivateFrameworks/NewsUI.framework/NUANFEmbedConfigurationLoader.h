
@interface NUANFEmbedConfigurationLoader : NSObject <NUEmbedConfigurationLoader> {
    <FCNewsAppConfigurationManager> * _appConfigurationManager;
    FCAsyncOnceOperation * _asyncOnceOperation;
    SXJSONDictionary * _embedConfiguration;
    FCFlintResourceManager * _flintResourceManager;
}

@property (nonatomic, retain) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (nonatomic, retain) FCAsyncOnceOperation *asyncOnceOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXJSONDictionary *embedConfiguration;
@property (nonatomic, retain) FCFlintResourceManager *flintResourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appConfigurationManager;
- (id)asyncLoadEmbedConfigurationOnceWithCompletion:(id /* block */)arg1;
- (id)asyncOnceOperation;
- (id)embedConfiguration;
- (id)flintResourceManager;
- (id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2;
- (id)loadEmbededConfigurationWithCompletion:(id /* block */)arg1;
- (void)setAppConfigurationManager:(id)arg1;
- (void)setAsyncOnceOperation:(id)arg1;
- (void)setFlintResourceManager:(id)arg1;

@end
