
@interface NUBundledArticleDataProvider : NSObject <NUArticleDataProvider, NUFontRegistrator, SXEmbedDataProvider, SXResourceDataSource> {
    FCArticle * _article;
    <NUEmbedDataManager> * _embedDataManager;
    NULinkedContentManager * _linkedContentManager;
    NSArray * _linkedContentProviders;
    long long  _relativePriority;
}

@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, readonly, copy) NSString *articleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUEmbedDataManager> *embedDataManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NULinkedContentManager *linkedContentManager;
@property (nonatomic, readonly) NSArray *linkedContentProviders;
@property (nonatomic) long long relativePriority;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)article;
- (id)articleID;
- (void)cancelAssetPrefetch;
- (id)embedDataManager;
- (id)embedForType:(id)arg1;
- (id)fileURLForBundleURL:(id)arg1;
- (void)fileURLForURL:(id)arg1 onCompletion:(id /* block */)arg2 onError:(id /* block */)arg3;
- (id)initWithArticle:(id)arg1 embedDataManager:(id)arg2 linkedContentManager:(id)arg3;
- (id)linkedContentManager;
- (id)linkedContentProviders;
- (void)loadContextWithCompletionBlock:(id /* block */)arg1;
- (id /* block */)loadImagesForImageRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)performBlockForFontsInBundle:(id /* block */)arg1;
- (void)prefetchAssets;
- (void)registerFontsWithCompletion:(id /* block */)arg1;
- (long long)relativePriority;
- (void)setRelativePriority:(long long)arg1;
- (id)translateURL:(id)arg1;

@end
