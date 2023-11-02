
@interface ATXClientModelSuggestionReceiver : NSObject <ATXBlendingLayerDelegateProtocol, ATXBlendingLayerServerDelegateProtocol, UNUserNotificationCenterDelegate> {
    ATXAppDirectoryOrderingProvider * _appDirectoryOrderingProvider;
    ATXAppSwitcherSuggestionSender * _appSwitcherSuggestionSender;
    ATXUniversalBlendingLayerServer * _blendingLayerServer;
    ATXClientModelCacheManager * _clientModelCacheManager;
    _PASSimpleCoalescingTimer * _coalescedBlendingLayerRefreshOperation;
    int  _homeScreenStackChangeDarwinNotificationObserver;
    ATXHomeScreenSuggestionSender * _homeScreenSuggestionSender;
    ATXLockscreenSuggestionSender * _lockscreenSuggestionSender;
    UNUserNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _queue;
    ATXClientModelSuggestionRouter * _router;
    ATXSpotlightActionsSuggestionSender * _spotlightActionsSuggestionSender;
    _ATXInternalUninstallNotification * _uninstallNotificationListener;
}

@property (nonatomic, readonly) ATXUniversalBlendingLayerServer *blendingLayerServer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_updateCacheForClientModel:(id)arg1 withSuggestions:(id)arg2 cacheManager:(id)arg3;
+ (void)clearPreviouslyPersistedCachesForCardSuggestionClientsIfNecessary;
+ (id)layoutSelectorsForConsumerSubTypes;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_sendStackChangeDebugNotification:(id)arg1;
- (void)blendingLayerRerankedSuggestions:(id)arg1 consumerSubType:(unsigned char)arg2;
- (id)blendingLayerServer;
- (void)blendingLayerUpdatedUICache:(id)arg1 consumerSubType:(unsigned char)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithBlendingLayerServer:(id)arg1;
- (bool)rerouteSuggestions:(id)arg1 clientModelId:(id)arg2 completion:(id /* block */)arg3;
- (void)routeSuggestionsToInfoSuggestionEngine:(id)arg1 clientModelId:(id)arg2 completion:(id /* block */)arg3;
- (void)start;

@end
