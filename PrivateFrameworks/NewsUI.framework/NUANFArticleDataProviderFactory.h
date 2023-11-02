
@interface NUANFArticleDataProviderFactory : NSObject <NUArticleDataProviderFactory> {
    <FCContentContext> * _contentContext;
    <NUEmbedDataManager> * _embedDataManager;
    <NUFontRegistration> * _fontRegistration;
    <SXHost> * _host;
    NULinkedContentManagerFactory * _linkedContentManagerFactory;
}

@property (nonatomic, readonly) <FCContentContext> *contentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUEmbedDataManager> *embedDataManager;
@property (nonatomic, readonly) <NUFontRegistration> *fontRegistration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXHost> *host;
@property (nonatomic, readonly) NULinkedContentManagerFactory *linkedContentManagerFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentContext;
- (id)createArticleDataProviderWithArticle:(id)arg1;
- (id)embedDataManager;
- (id)fontRegistration;
- (id)host;
- (id)initWithContentContext:(id)arg1 fontRegistration:(id)arg2 host:(id)arg3 embedDataManager:(id)arg4 linkedContentManagerFactory:(id)arg5;
- (id)linkedContentManagerFactory;

@end
