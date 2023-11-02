
@interface TPSDiscoverabilityUsageController : NSObject {
    NSString * _currentOSBuildVersion;
    NSString * _currentOSMajorVersion;
    TPSDuetDataProvider * _duetProvider;
    NSSortDescriptor * _eventSortDescriptor;
}

@property (nonatomic, readonly, copy) NSString *currentOSBuildVersion;
@property (nonatomic, readonly, copy) NSString *currentOSMajorVersion;
@property (nonatomic, readonly) TPSDuetDataProvider *duetProvider;
@property (nonatomic, readonly, copy) NSSortDescriptor *eventSortDescriptor;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_discoverabilityUsageStream;
- (id)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 fromEvents:(id)arg3;
- (unsigned long long)_evaluateFrequencyControlForBundleID:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)_eventsPredicateForAbsentUsageFlag;
- (id)_eventsPredicateForBundleID:(id)arg1;
- (id)_eventsPredicateForBundleID:(id)arg1 sinceDate:(id)arg2;
- (id)_eventsPredicateForContentID:(id)arg1 sinceDate:(id)arg2;
- (id)_eventsPredicateForContentIDs:(id)arg1 sinceDate:(id)arg2;
- (id)_eventsPredicateForHintDisplayed;
- (id)_eventsPredicateForInactiveContentIDs:(id)arg1 sinceDate:(id)arg2;
- (id)_eventsPredicateForInactiveHintStates;
- (id)_filterFrequencyControlForTips:(id)arg1 bundleID:(id)arg2 context:(id)arg3 error:(id*)arg4;
- (id)_initWithDirectory:(id)arg1;
- (id)_majorVersionFilterPredicate;
- (id)_majorVersionForBuildVersion:(id)arg1;
- (id)_metaDataForUsageEvent:(id)arg1;
- (id)_tipIdentifiersFromTips:(id)arg1;
- (void)addContentUsageEvents:(id)arg1 completion:(id /* block */)arg2;
- (id)currentOSBuildVersion;
- (id)currentOSMajorVersion;
- (id)duetProvider;
- (void)eligibleContentForBundleID:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (id)eligibleContentForBundleID:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)eventSortDescriptor;
- (id)init;

@end
