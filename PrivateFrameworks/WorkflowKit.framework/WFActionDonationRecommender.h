
@interface WFActionDonationRecommender : NSObject <WFApplicationStateObserver> {
    NSObject<OS_dispatch_group> * _activeFetchGroup;
    WFCachedDonations * _cachedActionPredictionsForAllApps;
    NSMutableDictionary * _cachedActionPredictionsPerApp;
    WFCachedDonations * _cachedDonationsForAllApps;
    NSMutableDictionary * _cachedDonationsPerApp;
    NSArray * _defaultRecommendations;
    NSSet * _excludedAppBundleIdentifiers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *activeFetchGroup;
@property (nonatomic, retain) WFCachedDonations *cachedActionPredictionsForAllApps;
@property (nonatomic, retain) NSMutableDictionary *cachedActionPredictionsPerApp;
@property (nonatomic, retain) WFCachedDonations *cachedDonationsForAllApps;
@property (nonatomic, retain) NSMutableDictionary *cachedDonationsPerApp;
@property (nonatomic, readonly) NSArray *defaultRecommendations;
@property (nonatomic, readonly) NSSet *excludedAppBundleIdentifiers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)disabledSpotlightApps;
+ (id)donationsByRemovingDuplicatesFromDonations:(id)arg1 excludingAppIdentifiers:(id)arg2 includingSingleDonationPerApp:(bool)arg3;
+ (id)filterDonationsForTitleLength:(id)arg1;
+ (id)filteredActionDonations:(id)arg1 byApplicationAppIdentifier:(id)arg2;
+ (id)getDonationsFromActionResponse:(id)arg1;
+ (id)sharedRecommender;

- (void).cxx_destruct;
- (void)_fetchDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 includeSuggestedForAllApps:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)activeFetchGroup;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)cacheActionPredictionDonations:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ballpark:(unsigned long long)arg3;
- (void)cacheRecentDonations:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ballpark:(unsigned long long)arg3;
- (id)cachedActionPredictionsForAllApps;
- (id)cachedActionPredictionsPerApp;
- (id)cachedDonationsForAllApps;
- (id)cachedDonationsPerApp;
- (id)defaultRecommendations;
- (id)excludedAppBundleIdentifiers;
- (void)fetchDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 includeSuggestedForAllApps:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchRecommendedDonationsForAppPredictionsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)setActiveFetchGroup:(id)arg1;
- (void)setCachedActionPredictionsForAllApps:(id)arg1;
- (void)setCachedActionPredictionsPerApp:(id)arg1;
- (void)setCachedDonationsForAllApps:(id)arg1;
- (void)setCachedDonationsPerApp:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
