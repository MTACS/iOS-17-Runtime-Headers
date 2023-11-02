
@interface NUArticleViewControllerFactory : NSObject <NUArticleViewControllerFactory> {
    <SXAppStateMonitor> * _appStateMonitor;
    <NUArticleDataProviderFactory> * _articleDataProviderFactory;
    <NUArticlePrefetcherType> * _articlePrefetcher;
    <NUArticleScrollPositionManagerType> * _articleScrollPositionManager;
    <NUDocumentSectionBlueprintProvider> * _headerBlueprintProvider;
    <NUArticleKeyCommandManager> * _keyCommandManager;
    NSHashTable * _loadingListeners;
    <TFResolver> * _resolver;
    <NUSpotlightManager> * _spotlightManager;
}

@property (nonatomic, readonly) <SXAppStateMonitor> *appStateMonitor;
@property (nonatomic, readonly) <NUArticleDataProviderFactory> *articleDataProviderFactory;
@property (nonatomic, readonly) <NUArticlePrefetcherType> *articlePrefetcher;
@property (nonatomic, readonly) <NUArticleScrollPositionManagerType> *articleScrollPositionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUDocumentSectionBlueprintProvider> *headerBlueprintProvider;
@property (nonatomic, readonly) <NUArticleKeyCommandManager> *keyCommandManager;
@property (nonatomic, readonly) NSHashTable *loadingListeners;
@property (nonatomic, readonly) <TFResolver> *resolver;
@property (nonatomic, readonly) <NUSpotlightManager> *spotlightManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appStateMonitor;
- (id)articleDataProviderFactory;
- (id)articlePrefetcher;
- (id)articleScrollPositionManager;
- (id)createArticleViewControllerWithArticle:(id)arg1 issue:(id)arg2 context:(id)arg3 relativePriority:(long long)arg4 articleHostViewController:(id)arg5;
- (id)headerBlueprintProvider;
- (id)initWithArticleDataProviderFactory:(id)arg1 appStateMonitor:(id)arg2 keyCommandManager:(id)arg3 headerBlueprintProvider:(id)arg4 articlePrefetcher:(id)arg5 articleScrollPositionManager:(id)arg6 spotlightManager:(id)arg7 resolver:(id)arg8;
- (id)keyCommandManager;
- (id)loadingListeners;
- (id)resolver;
- (id)spotlightManager;

@end
