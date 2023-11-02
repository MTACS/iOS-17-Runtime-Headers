
@interface HKFeatureStatusManager : NSObject <HKFeatureAvailabilityProvidingObserver, HKFeatureAvailabilityRequirementSatisfactionObserver, HKFeatureStatusProviding> {
    HKFeatureAvailabilityContextConstraint * _contextConstraint;
    HKFeatureStatus * _currentFeatureStatus;
    <HKFeatureAvailabilityProviding> * _featureAvailabilityProviding;
    bool  _isObserving;
    _HKDelayedOperation * _notifyObserversOperation;
    HKObserverSet * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    HKFeatureAvailabilityRequirementSet * _requirements;
    HKFeatureAvailabilityRequirementEvaluationDataSource * _strongDataSource;
    HKFeatureAvailabilityRequirementEvaluationDataSource * _weakDataSource;
}

@property (nonatomic, readonly) HKFeatureAvailabilityContextConstraint *contextConstraint;
@property (nonatomic, retain) HKFeatureStatus *currentFeatureStatus;
@property (nonatomic, readonly) HKFeatureAvailabilityRequirementEvaluationDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HKFeatureAvailabilityProviding> *featureAvailabilityProviding;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isObserving;
@property (nonatomic, retain) _HKDelayedOperation *notifyObserversOperation;
@property (nonatomic, readonly) HKObserverSet *observers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) HKFeatureAvailabilityRequirementSet *requirements;
@property (nonatomic, retain) HKFeatureAvailabilityRequirementEvaluationDataSource *strongDataSource;
@property (readonly) Class superclass;
@property (nonatomic) HKFeatureAvailabilityRequirementEvaluationDataSource *weakDataSource;

+ (id)childFeatureStatusManagerWithFeatureAvailabilityProviding:(id)arg1 featureAvailabilityDataSource:(id)arg2 contextConstraint:(id)arg3;

- (void).cxx_destruct;
- (void)__unregisterForFeatureStatusChanges;
- (void)_notifyObserversWithFeatureStatus:(id)arg1;
- (void)_queue_attemptFeatureStatusUpdateDrivenByObservation;
- (void)_queue_registerForFeatureStatusChanges;
- (void)_queue_unregisterForFeatureStatusChanges;
- (id)_queue_updateFeatureStatusWithRequestDrivenByObservation:(bool)arg1 error:(id*)arg2;
- (void)_registerForRequirementSatisfactionOverrideChangesForRequirements:(id)arg1;
- (id)_requirementSatisfactionOverrides;
- (void)_updateOverriddenSatisfactionOfRequirement:(id)arg1 overriddenSatisfaction:(id)arg2;
- (void)_updateSatisfactionOfRequirement:(id)arg1 isSatisfied:(bool)arg2;
- (id)contextConstraint;
- (id)currentFeatureStatus;
- (id)dataSource;
- (void)dealloc;
- (id)description;
- (id)featureAvailabilityProviding;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)arg1;
- (void)featureAvailabilityRequirement:(id)arg1 didUpdateSatisfaction:(bool)arg2;
- (id)featureIdentifier;
- (id)featureStatusWithError:(id*)arg1;
- (id)initWithFeatureAvailabilityProviding:(id)arg1 featureAvailabilityDataSource:(id)arg2;
- (id)initWithFeatureAvailabilityProviding:(id)arg1 featureAvailabilityDataSource:(id)arg2 contextConstraint:(id)arg3;
- (id)initWithFeatureAvailabilityProviding:(id)arg1 healthDataSource:(id)arg2;
- (id)initWithFeatureAvailabilityProviding:(id)arg1 healthDataSource:(id)arg2 countryCodeSource:(long long)arg3;
- (id)initWithFeatureAvailabilityProviding:(id)arg1 healthDataSource:(id)arg2 currentCountryCode:(id)arg3;
- (id)initWithFeatureIdentifier:(id)arg1 healthStore:(id)arg2;
- (id)initWithFeatureIdentifier:(id)arg1 healthStore:(id)arg2 cachingDefaults:(id)arg3;
- (id)initWithFeatureIdentifier:(id)arg1 healthStore:(id)arg2 countryCodeSource:(long long)arg3;
- (id)initWithFeatureIdentifier:(id)arg1 healthStore:(id)arg2 currentCountryCode:(id)arg3;
- (bool)isObserving;
- (id)notifyObserversOperation;
- (id)observers;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (id)requirements;
- (void)setCurrentFeatureStatus:(id)arg1;
- (void)setIsObserving:(bool)arg1;
- (void)setNotifyObserversOperation:(id)arg1;
- (void)setRequirements:(id)arg1;
- (void)setStrongDataSource:(id)arg1;
- (void)setWeakDataSource:(id)arg1;
- (id)strongDataSource;
- (void)unregisterObserver:(id)arg1;
- (id)weakDataSource;

@end
