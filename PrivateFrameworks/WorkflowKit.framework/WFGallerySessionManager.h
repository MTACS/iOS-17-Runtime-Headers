
@interface WFGallerySessionManager : NSObject {
    NSCache * _bannerImageCache;
    NSCache * _collectionSearchCache;
    CKContainer * _container;
    NSString * _currentIdiom;
    NSString * _currentRegion;
    CKDatabase * _database;
    NSCache * _pageCache;
    bool  _performExpensiveFetchOperations;
    NSArray * _preferredLocalizations;
    NSCache * _workflowCache;
    NSCache * _workflowSearchCache;
}

@property (nonatomic, readonly) NSCache *bannerImageCache;
@property (nonatomic, readonly) NSCache *collectionSearchCache;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) NSString *containerDescription;
@property (nonatomic, readonly, copy) NSString *currentIdiom;
@property (nonatomic, readonly, copy) NSString *currentRegion;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) NSCache *pageCache;
@property (nonatomic, readonly) bool performExpensiveFetchOperations;
@property (nonatomic, readonly, copy) NSArray *preferredLocalizations;
@property (nonatomic, readonly) NSCache *workflowCache;
@property (nonatomic, readonly) NSCache *workflowSearchCache;

+ (id)currentDeviceIdiom;
+ (id)defaultPreferredLocalizations;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)bannerImageCache;
- (bool)bannerIsRestricted:(id)arg1;
- (bool)collectionIsRestricted:(id)arg1;
- (id)collectionSearchCache;
- (id)collectionWithoutRestrictedContent:(id)arg1;
- (id)container;
- (id)containerDescription;
- (void)createBannerWithName:(id)arg1 detailPage:(id)arg2 iphone2xImage:(id)arg3 iphone3xImage:(id)arg4 ipadImage:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)createCollection:(id)arg1 small2xImage:(id)arg2 large2xImage:(id)arg3 small3xImage:(id)arg4 large3xImage:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)createItemRequest;
- (id)currentIdiom;
- (id)currentRegion;
- (id)database;
- (void)deleteBanner:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteCollection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCollectionForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCollectionForPersistentIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCurrentUserIdentifierWithCompletionHandler:(id /* block */)arg1;
- (void)getHomeWithCompletionHandler:(id /* block */)arg1;
- (void)getHomeWithPreferredLanguages:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)getImageForBanner:(id)arg1 size:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)getPageWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)getWorkflowForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithContainer:(id)arg1 preferredLocalizations:(id)arg2 currentRegion:(id)arg3 currentIdiom:(id)arg4 performExpensiveFetchOperations:(bool)arg5;
- (id)loadWorkflowInGalleryWorkflow:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)pageCache;
- (id)pageWithoutRestrictedContent:(id)arg1;
- (bool)performExpensiveFetchOperations;
- (id)preferredLocalizations;
- (id)preferredPageInPages:(id)arg1 preferredLanguages:(id)arg2;
- (id)queryFilterForTokenizedKey:(id)arg1 query:(id)arg2;
- (void)reportWorkflow:(id)arg1 iCloudIdentifier:(id)arg2 reportReason:(id)arg3 reportMessage:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)searchCollections:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)searchUsingWebServicesForItem:(Class)arg1 query:(id)arg2 queryFilter:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)searchWorkflows:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)searchWorkflowsAndCollections:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)sortAndFilterSearchResults:(id)arg1 query:(id)arg2;
- (id)unshareSharedShortcut:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateBanner:(id)arg1 withName:(id)arg2 detailPage:(id)arg3 iphone2xImage:(id)arg4 iphone3xImage:(id)arg5 ipadImage:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)updateCollection:(id)arg1 small2xImage:(id)arg2 large2xImage:(id)arg3 small3xImage:(id)arg4 large3xImage:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)updateItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePage:(id)arg1 withName:(id)arg2 banners:(id)arg3 collections:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)updateWorkflow:(id)arg1 withName:(id)arg2 shortDescription:(id)arg3 longDescription:(id)arg4 workflow:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)uploadWorkflow:(id)arg1 withName:(id)arg2 shortDescription:(id)arg3 longDescription:(id)arg4 private:(bool)arg5 completionHandler:(id /* block */)arg6;
- (long long)version;
- (id)workflowCache;
- (bool)workflowIsRestricted:(id)arg1;
- (id)workflowSearchCache;

@end
