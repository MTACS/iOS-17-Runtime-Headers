
@interface BCSBusinessQueryController : NSObject <BCSLinkQueryChopperDelegate, BCSXPCDaemonProtocol> {
    <BCSConfigResolving> * _businessCallerConfigResolver;
    <BCSItemResolving> * _businessCallerItemResolver;
    <BCSFetchTrigger> * _businessCallerMegashardFetchTrigger;
    <BCSShardResolving> * _businessCallerShardResolver;
    <BCSFetchTrigger> * _businessLinkMegashardFetchTrigger;
    <BCSCacheClearing> * _cacheClearer;
    <BCSConfigResolving> * _chatSuggestConfigResolver;
    <BCSChatSuggestControllerProtocol> * _chatSuggestController;
    <BCSItemResolving> * _chatSuggestItemResolver;
    <BCSFetchTrigger> * _chatSuggestMegashardFetchTrigger;
    <BCSShardResolving> * _chatSuggestShardResolver;
    <BCSConfigCaching> * _configCache;
    <BCSConfigCacheSkipping> * _configCacheSkip;
    <BCSEntitlementVerifying> * _entitlementVerifier;
    <BCSHousekeeping> * _housekeeper;
    <BCSIconControllerProtocol> * _iconController;
    <BCSIdentityServiceProtocol> * _identityService;
    <BCSConfigResolving> * _linkConfigResolver;
    <BCSItemResolving> * _linkItemResolver;
    <BCSShardResolving> * _linkShardResolver;
    <BCSMetricFactoryProtocol> * _metricFactory;
    <BCSURLPatternControllerProtocol> * _patternController;
    <BCSQueryChopperProtocol> * _queryChopper;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
    <BCSShardCacheQueryable> * _shardCache;
    <BCSShardCacheSkipping> * _shardCacheSkip;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deleteInMemoryCache;
- (void)_isBusinessRegisteredWithItemIdentifier:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)_itemWithIdentifier:(id)arg1 forClientBundleID:(id)arg2 skipFilterCheck:(bool)arg3 completion:(id /* block */)arg4;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)clearCachesForType:(long long)arg1 completion:(id /* block */)arg2;
- (void)clearExpiredCachesForType:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchBusinessCallerMetadataForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchBusinessItemWithPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchIsBusinessPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchLinkItemModelWithHash:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchLinkItemModelWithURL:(id)arg1 chopURL:(bool)arg2 forClientBundleID:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchSquareIconDataForBusinessItem:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithChatSuggestMegashardFetchTrigger:(id)arg1 businessLinkMegashardFetchTrigger:(id)arg2 businessCallerMegashardFetchTrigger:(id)arg3 entitlementVerifier:(id)arg4 identityService:(id)arg5 chatSuggestController:(id)arg6 iconController:(id)arg7 cacheClearer:(id)arg8 shardCache:(id)arg9 configCache:(id)arg10 configCacheSkip:(id)arg11 shardCacheSkip:(id)arg12 chatSuggestConfigResolver:(id)arg13 linkConfigResolver:(id)arg14 businessCallerConfigResolver:(id)arg15 chatSuggestShardResolver:(id)arg16 linkShardResolver:(id)arg17 businessCallerShardResolver:(id)arg18 chatSuggestItemResolver:(id)arg19 linkItemResolver:(id)arg20 businessCallerItemResolver:(id)arg21 queryChopper:(id)arg22 patternController:(id)arg23 metricFactory:(id)arg24 housekeeper:(id)arg25;
- (id)initWithChatSuggestMegashardFetcher:(id)arg1 businessLinkMegashardFetcher:(id)arg2 businessCallerMegashardFetcher:(id)arg3 shardCache:(id)arg4 cacheManager:(id)arg5 chatSuggestRemoteFetcher:(id)arg6 businessLinkRemoteFetcher:(id)arg7 businessCallerRemoteFetcher:(id)arg8 userDefaults:(id)arg9 metricFactory:(id)arg10;
- (void)isBusinessCallerRegisteredForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)isBusinessRegisteredForURL:(id)arg1 chopURL:(bool)arg2 forClientBundleID:(id)arg3 completion:(id /* block */)arg4;
- (void)prefetchMegashardsWithCompletion:(id /* block */)arg1;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1 forClientBundleID:(id)arg2;

@end
