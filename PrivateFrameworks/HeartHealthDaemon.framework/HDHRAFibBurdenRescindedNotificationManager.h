
@interface HDHRAFibBurdenRescindedNotificationManager : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HKFeatureStatusProvidingObserver> {
    <HKFeatureStatusProviding> * _featureStatusProvider;
    HDKeyValueDomain * _localKeyValueDomain;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _unitTesting_postNotificationHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_postNotificationHandler;

- (void).cxx_destruct;
- (bool)_isFeatureRescindedWithRequirementsEvaluation:(id)arg1;
- (bool)_isFeatureUnavailableForNonRescindedReasonsWithRequirementsEvaluation:(id)arg1;
- (void)_queue_presentRescindedOrReEnabledAlertIfNeededWithFeatureStatus:(id)arg1;
- (void)_queue_pullFeatureStatusAndPresentAlertIfNeeded;
- (id)_rescindedAlertBodyKeyForUnsatisfiedRequirementIdentifiers:(id)arg1;
- (id)_rescindedAlertTitleKeyForUnsatisfiedRequirementIdentifiers:(id)arg1;
- (id)_rescindedRequirementIdentifiers;
- (void)_sendNotificationRequest:(id)arg1;
- (void)_showRescindedNotificationWithTitleKey:(id)arg1 bodyKey:(id)arg2;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (void)featureStatusProviding:(id)arg1 didUpdateFeatureStatus:(id)arg2;
- (id)initWithProfile:(id)arg1 featureStatusProvider:(id)arg2;
- (id)initWithProfile:(id)arg1 featureStatusProvider:(id)arg2 keyValueDomain:(id)arg3;
- (void)setUnitTesting_postNotificationHandler:(id /* block */)arg1;
- (id /* block */)unitTesting_postNotificationHandler;

@end
