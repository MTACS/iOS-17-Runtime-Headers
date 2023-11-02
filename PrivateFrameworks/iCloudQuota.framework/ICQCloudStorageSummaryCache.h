
@interface ICQCloudStorageSummaryCache : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    id  _cloudSubscriptionFeaturesObserver;
    bool  _hasDisplayedDetailsPage;
    id  _quotaChangeNotificationObserver;
    id  _quotaInfoChangeNotificationObserver;
    NSMutableDictionary * _summaryCache;
}

@property (nonatomic) bool hasDisplayedDetailsPage;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cleanupCacheForPrimaryAccount;
- (void)_startObservingCloudSubscriptionFeaturesNotifications;
- (void)_startObservingQuotaChangeNotifications;
- (void)_stopObservingCloudSubscriptionFeaturesNotifications;
- (void)_stopObservingQuotaChangeNotifications;
- (void)dealloc;
- (bool)hasDisplayedDetailsPage;
- (id)init;
- (void)setHasDisplayedDetailsPage:(bool)arg1;
- (void)setStorageSummary:(id)arg1 forAltDSID:(id)arg2;
- (id)storageSummaryForAltDSID:(id)arg1;

@end
