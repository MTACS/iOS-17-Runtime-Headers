
@interface ASDSubscriptionEntitlements : NSObject {
    int  _activityCacheUpdatedNotificationToken;
    int  _appStoreArcadeSubscriptionBagUpdatedNotificationToken;
    int  _appStoreCacheUpdatedNotificationToken;
    int  _hwBundleCacheUpdatedNotificationToken;
    int  _iCloudCacheUpdatedNotificationToken;
    int  _musicCacheUpdatedNotificationToken;
    int  _newsCacheUpdatedNotificationToken;
    int  _podcastCacheUpdatedNotificationToken;
    ASDServiceBroker * _serviceBroker;
    int  _tvCacheUpdatedNotificationToken;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initWithServiceBroker:(id)arg1;
- (void)dealloc;
- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(id /* block */)arg1;
- (void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withResultHandler:(id /* block */)arg2;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:(id /* block */)arg1;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(id /* block */)arg1;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(bool)arg2 requestingBundleId:(id)arg3 withCacheInfoResultHandler:(id /* block */)arg4;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(bool)arg2 withCacheInfoResultHandler:(id /* block */)arg3;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(bool)arg2 withResultHandler:(id /* block */)arg3;
- (void)getSubscriptionEntitlementsIgnoreCaches:(bool)arg1 forActiveAccountWithResultHandler:(id /* block */)arg2;
- (id)init;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3;

@end
