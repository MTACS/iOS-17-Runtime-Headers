
@interface TPSDiscoverabilityController : NSObject <TPSDEventsProviderManagerDelegate> {
    NSMutableDictionary * _contextualInfoMap;
    NSObject<OS_dispatch_queue> * _contextualInfoQueue;
    <TPSDiscoverabilityControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _eventRegistrationQueue;
    NSObject<OS_dispatch_queue> * _eventResultsProcessingQueue;
    TPSEventsHistoryController * _eventsHistoryController;
    TPSEventsProviderManager * _eventsProviderManager;
    long long  _overrideHintMaxDisplayedCount;
    NSMutableSet * _registeredEventIdentifiers;
    TPSTipStatusController * _tipStatusController;
}

@property (nonatomic, readonly) NSDictionary *contextualInfoMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *contextualInfoQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TPSDiscoverabilityControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) TPSEventsHistoryController *eventsHistoryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) TPSTipStatusController *tipStatusController;

+ (id)contextualInfoMap;
+ (void)removeContextualInfoCache;

- (void).cxx_destruct;
- (void)_cleanupContextualInfoMap;
- (bool)_isConditionMet:(id)arg1 hasUpdates:(bool*)arg2 forIdentifier:(id)arg3;
- (id)_matchingIdentifiersForConditionWithType:(unsigned long long)arg1 forObserverIdentifiers:(id)arg2 hasUpdates:(bool*)arg3;
- (void)_reconcileRegisteredEvents;
- (void)_registerWakingCallbackForContextualInfo:(id)arg1;
- (void)_removeCacheData;
- (void)_updateCacheData;
- (void)_updateContextualInfoMapCache;
- (void)_updateRegisteredEventIdentifiers;
- (bool)_updateTriggerConditionForObserverIdentifiers:(id)arg1;
- (void)addHintDisplayedForIdentifier:(id)arg1 context:(id)arg2;
- (void)contextualEligibilityWithTipIdentifiers:(id)arg1 tipsDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 experimentCampChangesToAll:(bool)arg4;
- (id)contextualInfoForIdentifier:(id)arg1;
- (id)contextualInfoIdentifiers;
- (id)contextualInfoMap;
- (id)contextualInfoQueue;
- (long long)customizationIDForContentID:(id)arg1;
- (void)dataProviderManager:(id)arg1 didFinishQueryWithResults:(id)arg2 type:(long long)arg3;
- (void)dataProviderManager:(id)arg1 didReceiveCallbackWithResult:(id)arg2 type:(long long)arg3;
- (id)delegate;
- (id)discoverabilityTipWithMetadata:(id)arg1 contentDictionary:(id)arg2 preconditions:(id)arg3;
- (id)eventsHistoryController;
- (id)init;
- (id)initWithTipStatusController:(id)arg1;
- (bool)isContentHintDisplayMaxDisplayedCountExceededForIdentifier:(id)arg1;
- (bool)isContextualInfoExistForIdentifier:(id)arg1;
- (void)markHintIneligibleForIdentifiers:(id)arg1 bundleID:(id)arg2 context:(id)arg3 reason:(long long)arg4;
- (void)markHintIneligibleForIdentifiers:(id)arg1 context:(id)arg2 reason:(long long)arg3;
- (id)monitoringEventsForContentID:(id)arg1;
- (void)processEventProviderQueryResults:(id)arg1 type:(long long)arg2;
- (void)queryCurrentEvents;
- (void)removeAllContextualInfos;
- (void)removeContextualInfoForIdentifiers:(id)arg1;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)arg1;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)arg1 updateCache:(bool)arg2;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifiers:(id)arg1;
- (void)setContextualInfoQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTipStatusController:(id)arg1;
- (id)tipStatusController;
- (void)updateContentViewedForIdentifier:(id)arg1;
- (bool)updateDesiredOutcomeConditionForObserverIdentifers:(id)arg1;
- (void)updateHintDismissedForIdentifier:(id)arg1 dismissType:(id)arg2 context:(id)arg3;
- (void)updateHintWouldHaveBeenDisplayedForIdentifier:(id)arg1 context:(id)arg2;
- (void)updateIdentifier:(id)arg1 withContextualInfo:(id)arg2;

@end
