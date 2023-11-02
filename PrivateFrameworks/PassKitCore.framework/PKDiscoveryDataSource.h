
@interface PKDiscoveryDataSource : NSObject <PKDiscoveryObserver> {
    AMSMetrics * _AMPMetrics;
    NSArray * _articleLayouts;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _articleLayoutsLock;
    <PKDiscoveryDataSourceDelegate> * _delegate;
    PKDiscoveryService * _discoveryService;
    bool  _miniCardsAllowed;
    bool  _updatingArticles;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSArray *articleLayouts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKDiscoveryDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMiniCardsAllowed, nonatomic) bool miniCardsAllowed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDismissActionToArticleLayouts:(id)arg1;
- (id)_articleLayoutForItemIdentifier:(id)arg1;
- (void)_manifestAllowsMiniCardsWithCompletion:(id /* block */)arg1;
- (bool)_queue_updateArticleLayouts:(id)arg1;
- (void)_updateArticlesWithCompletion:(id /* block */)arg1;
- (id)articleLayouts;
- (id)cachedDiscoveryArticleLayoutForItemWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)discoveryService:(id)arg1 completedCTAForItem:(id)arg2;
- (void)discoveryService:(id)arg1 receivedUpdatedDiscoveryArticleLayouts:(id)arg2;
- (void)displayedDiscoveryItem:(id)arg1 isWelcomeCard:(bool)arg2 afterSwipingToCard:(bool)arg3 multipleStoryCardsAvailable:(bool)arg4 callToAction:(long long)arg5 cardSize:(long long)arg6;
- (id)initWithDelegate:(id)arg1;
- (bool)isMiniCardsAllowed;
- (void)setArticleLayouts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMiniCardsAllowed:(bool)arg1;
- (void)tappedDiscoveryItem:(id)arg1 callToAction:(id)arg2 cardSize:(long long)arg3;
- (void)updateArticleLayouts;

@end
