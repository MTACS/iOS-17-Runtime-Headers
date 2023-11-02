
@interface PKDiscoveryService : NSObject <PKDiscoveryServiceExportedInterface> {
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    PKXPCService * _remoteService;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (void)beginReporingDiscoveryAnalytics;
- (void)completedCTAForItem:(id)arg1;
- (void)completedDiscoveryItemCTAWithCompletion:(id /* block */)arg1;
- (void)deleteRuleWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)dialogRequestsChangedForPlacement:(id)arg1;
- (void)dialogRequestsForPlacement:(id)arg1 completion:(id /* block */)arg2;
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)discoveryArticleLayoutsUpdated:(id)arg1;
- (void)discoveryArticleLayoutsWithCompletion:(id /* block */)arg1;
- (void)discoveryEngagementMessagesForPassUniqueIdentifier:(id)arg1 active:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)discoveryEngagementMessagesUpdated;
- (void)discoveryItemWithIdentifier:(id)arg1 callToAction:(long long)arg2 isScrollable:(bool)arg3;
- (void)discoveryItemWithIdentifier:(id)arg1 callToAction:(long long)arg2 wasScrolledToTheBottom:(bool)arg3;
- (void)discoveryItemWithIdentifier:(id)arg1 launchedWithReferralSource:(unsigned long long)arg2;
- (void)discoveryItemsWithCompletion:(id /* block */)arg1;
- (void)dismissedDiscoveryItemWithIdentifier:(id)arg1 callToAction:(long long)arg2 cardSize:(long long)arg3;
- (void)dismissedDiscoveryItems:(id /* block */)arg1;
- (void)displayedDiscoveryEngagementMessageWithIdentifier:(id)arg1;
- (void)displayedDiscoveryItemWithIdentifier:(id)arg1 isWelcomeCard:(bool)arg2 afterSwipingToCard:(bool)arg3 multipleStoryCardsAvailable:(bool)arg4 callToAction:(long long)arg5 cardSize:(long long)arg6;
- (void)endReporingDiscoveryAnalytics;
- (id /* block */)errorHandlerForMethod:(SEL)arg1 completion:(id /* block */)arg2;
- (void)evaluateRulesWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)expandedDiscoveryItemWithIdentifier:(id)arg1 callToAction:(long long)arg2 afterSwipingToCard:(bool)arg3 multipleStoryCardsAvailable:(bool)arg4 cardSize:(long long)arg5;
- (void)fetchUserProperties:(id)arg1 withParameters:(id)arg2 completion:(id /* block */)arg3;
- (void)fireEngagementEventNamed:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)insertDiscoveryEngagementMessages:(id)arg1 completion:(id /* block */)arg2;
- (void)insertDiscoveryItems:(id)arg1 discoveryArticleLayouts:(id)arg2 completion:(id /* block */)arg3;
- (void)insertRule:(id)arg1 completion:(id /* block */)arg2;
- (void)manifestAllowsMiniCardsWithCompletion:(id /* block */)arg1;
- (id)observers;
- (void)processDiscoveryItemsAndMessagesWithCompletion:(id /* block */)arg1;
- (void)removeDiscoveryMessageWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeDiscoveryUserNotificationsWithCompletion:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)removedAllDiscoveryItems;
- (void)rulesWithCompletion:(id /* block */)arg1;
- (void)tappedDiscoveryItemWithIdentifier:(id)arg1 callToAction:(long long)arg2 cardSize:(long long)arg3;
- (void)updateDiscoveryEngagementMessageWithIdentifier:(id)arg1 forAction:(long long)arg2 completion:(id /* block */)arg3;
- (void)updateDiscoveryItemWithIdentifier:(id)arg1 forAction:(long long)arg2 completion:(id /* block */)arg3;
- (void)updateDiscoveryManifestWithCompletion:(id /* block */)arg1;
- (long long)welcomeCardCount;

@end
