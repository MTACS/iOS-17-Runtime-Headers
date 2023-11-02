
@interface FCPurchaseController : NSObject <FCAppActivityObserving, FCPurchaseProviderType, FCUserInfoObserving> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    FCCloudContext * _cloudContext;
    FCAsyncSerialQueue * _entitlementQueue;
    FCEntitlementService * _entitlementService;
    <FCEntitlementsOverrideProviderType> * _entitlementsOverrideProvider;
    NSDate * _lastEntitlementCheckTime;
    FCKeyValueStore * _localStore;
    FCPurchaseLookUpEntriesManager * _purchaseLookupEntriesManager;
    NSSet * _purchasesDiscoveredTagIDs;
    NSDictionary * _readOnlyPurchaseLookUpEntriesByTagID;
    NFLazy * _session;
    NSMutableDictionary * _webAccessEntriesByTagID;
}

@property (nonatomic, readonly) NSSet *allPurchaseIDs;
@property (nonatomic, readonly) NSSet *allPurchasedTagIDs;
@property (nonatomic, readonly) NSSet *allTagIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCEntitlementsOverrideProviderType> *entitlementsOverrideProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *lastSignedInItunesAccountName;
@property (nonatomic, readonly) NSDictionary *purchaseLookUpEntriesByTagID;
@property (nonatomic, readonly, copy) NSSet *purchasedTagIDs;
@property (nonatomic, readonly) NSSet *purchasesDiscoveredTagIDs;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *webAccessEntriesByTagID;

- (void).cxx_destruct;
- (void)activityObservingApplicationDidEnterBackground;
- (void)addAppStorePurchaseWithTagID:(id)arg1 purchaseID:(id)arg2;
- (void)addToWebAccessOptedInListWithTagID:(id)arg1;
- (id)allPurchaseIDs;
- (id)allPurchasedTagIDs;
- (id)allTagIDs;
- (void)clearAllAppStorePurchases;
- (void)dealloc;
- (id)entitlementsOverrideProvider;
- (id)expiredPurchaseChannelIDs;
- (void)fetchChannelIDsForPurchaseIDs:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)forceExpireAllSubscriptionsIfNeeded;
- (bool)hasPurchaseTypeAppStore;
- (bool)hasRenewalNoticeShownForTagID:(id)arg1;
- (id)init;
- (id)initWithCloudContext:(id)arg1 entitlementService:(id)arg2;
- (bool)isPaidSubscriber;
- (bool)isPaidSubscriberFromAppStore;
- (bool)isPaidSubscriberFromNews;
- (bool)isPaidSubscriberFromWeb;
- (bool)isTagIDPurchased:(id)arg1;
- (bool)isTagPurchased:(id)arg1;
- (id)lastSignedInItunesAccountName;
- (void)performEntitlementCheckWithIgnoreCache:(bool)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)purchaseLookUpEntriesByTagID;
- (id)purchaseLookUpEntryForTagID:(id)arg1;
- (id)purchasedTagIDs;
- (id)purchasesDiscoveredTagIDs;
- (void)removeFromPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)removeFromPurchasesDiscoveredList:(id)arg1 completion:(id /* block */)arg2;
- (void)removeWebPurchaseForTagID:(id)arg1 userInitiated:(bool)arg2;
- (void)renewalNoticeShownForPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)setEntitlementsOverrideProvider:(id)arg1;
- (void)shouldShowSignedInWithDifferentiTunesAccountAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(bool)arg3 isBundleSubscriber:(bool)arg4 completion:(id /* block */)arg5;
- (void)shouldShowiTunesSignedOutAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(bool)arg3 isBundleSubscriber:(bool)arg4 completion:(id /* block */)arg5;
- (void)silentExpireInAppSubscriptions;
- (void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 serialCompletion:(id /* block */)arg5 completion:(id /* block */)arg6;
- (id)subscriptionNotSupportedChannelIDs;
- (void)updatePurchaseEntryToExpired:(id)arg1;
- (void)updatePurchaseEntryToExpiredForTagIDs:(id)arg1;
- (void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2;
- (void)userInfo:(id)arg1 didRemoveAccessTokenForTagID:(id)arg2 userInitiated:(bool)arg3;
- (void)verifyAccessTokenWithTagID:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 serialCompletion:(id /* block */)arg4 callbackQueue:(id)arg5 completion:(id /* block */)arg6;
- (id)webAccessEntriesByTagID;
- (id)webAccessOptedInTagIDs;

@end
