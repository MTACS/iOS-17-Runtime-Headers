
@interface HKClinicalSourceAuthorizationController : NSObject {
    id /* block */  __unitTesting_reminderRegistryCompletion;
    bool  _anyDeterminedTypeAllowsReading;
    long long  _authorizationModeForSource;
    HKAuthorizationStore * _authorizationStore;
    NSDate * _displayReadAuthorizationAnchorDate;
    NSError * _fetchError;
    HKHealthRecordsStore * _healthRecordsStore;
    HKHealthStore * _healthStore;
    NSArray * _orderedTypesForReading;
    HKSource * _source;
    NSMutableSet * _typesEnabledForReading;
    NSSet * _typesForReading;
    NSSet * _typesRequestedForReading;
}

@property (setter=_unitTesting_setReminderRegistryCompletion:, nonatomic, copy) id /* block */ _unitTesting_reminderRegistryCompletion;
@property (nonatomic) bool anyDeterminedTypeAllowsReading;
@property (nonatomic, readonly) bool anyTypeRequested;
@property (nonatomic) long long authorizationModeForSource;
@property (nonatomic, readonly) HKAuthorizationStore *authorizationStore;
@property (nonatomic, copy) NSDate *displayReadAuthorizationAnchorDate;
@property (nonatomic, copy) NSError *fetchError;
@property (nonatomic, readonly) HKHealthRecordsStore *healthRecordsStore;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly, copy) NSArray *orderedTypesForReading;
@property (nonatomic, readonly, copy) HKSource *source;
@property (nonatomic, readonly) NSMutableSet *typesEnabledForReading;
@property (nonatomic, copy) NSSet *typesForReading;
@property (nonatomic, readonly, copy) NSSet *typesRequestedForReading;

- (void).cxx_destruct;
- (id)_authorizationModesWithMode:(long long)arg1 types:(id)arg2;
- (long long)_authorizationStatusWithType:(id)arg1;
- (id)_authorizationStatusesWithTypes:(id)arg1;
- (void)_commitModeConfirmationAlertRegistrationShouldDisplay:(bool)arg1;
- (id)_fetchAllClinicalAuthorizationRecordsWithError:(id*)arg1;
- (id)_orderTypes:(id)arg1;
- (void)_setAuthorizationStatuses:(id)arg1 modes:(id)arg2 shouldUpdateAnchor:(bool)arg3;
- (bool)_shouldUpdateDisplayReadAuthorizationAnchorDateWhenCommittingWithMode:(long long)arg1;
- (id /* block */)_unitTesting_reminderRegistryCompletion;
- (void)_unitTesting_setReminderRegistryCompletion:(id /* block */)arg1;
- (void)_updateDisplayReadAuthorizationAnchorDateIfNeededForCommittingModes:(id)arg1;
- (void)_updateReminderRegistrationIfNeededForCommittingModes:(id)arg1 anyTypeEnabled:(bool)arg2;
- (bool)allTypesEnabled;
- (bool)anyDeterminedTypeAllowsReading;
- (bool)anyTypeEnabled;
- (bool)anyTypeRequested;
- (long long)authorizationModeForSource;
- (id)authorizationStore;
- (void)commitAllTypesAndUpdateAuthorizationAnchorWithMode:(long long)arg1;
- (id)displayReadAuthorizationAnchorDate;
- (id)fetchError;
- (id)healthRecordsStore;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 healthRecordsStore:(id)arg2 source:(id)arg3 typesRequestedForReading:(id)arg4;
- (bool)isTypeEnabled:(id)arg1;
- (id)orderedTypesForReading;
- (void)reload;
- (void)setAnyDeterminedTypeAllowsReading:(bool)arg1;
- (void)setAuthorizationModeForSource:(long long)arg1;
- (void)setDisplayReadAuthorizationAnchorDate:(id)arg1;
- (void)setEnabled:(bool)arg1 forType:(id)arg2 commit:(bool)arg3;
- (void)setEnabledForAllTypes:(bool)arg1;
- (void)setFetchError:(id)arg1;
- (void)setTypesForReading:(id)arg1;
- (id)source;
- (id)typesEnabledForReading;
- (id)typesForReading;
- (id)typesRequestedForReading;

@end
