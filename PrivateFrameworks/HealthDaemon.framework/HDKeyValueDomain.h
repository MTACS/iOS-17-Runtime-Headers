
@interface HDKeyValueDomain : NSObject <HDHRAFibBurdenNotificationManagerNotificationLastSentDateStore> {
    long long  _category;
    NSString * _domainName;
    Class  _entityClass;
    HKObserverSet * _observers;
    HDProfile * _profile;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSString *domainName;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)_wristTemperatureIdentifierDomainWithProfile:(id)arg1;
+ (id)healthAppUserDefaultsDomainWithProfile:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_unitTest_countOfObservers;
- (id)_wristTemperatureResolvedSourceIdentifiersBySourceIdentifier;
- (id)_wristTemperatureSerialNumbersBySourceIdentifier;
- (id)allValuesWithError:(id*)arg1;
- (long long)category;
- (id)dataForKey:(id)arg1 error:(id*)arg2;
- (id)dateForKey:(id)arg1 error:(id*)arg2;
- (id)domainName;
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2 profile:(id)arg3;
- (id)modificationDatesForKeys:(id)arg1 error:(id*)arg2;
- (void)notifyObservers;
- (id)numberForKey:(id)arg1 error:(id*)arg2;
- (id)propertyListValueForKey:(id)arg1 error:(id*)arg2;
- (id)quantityForKey:(id)arg1 unit:(id)arg2 error:(id*)arg3;
- (bool)removeValuesForKeys:(id)arg1 error:(id*)arg2;
- (bool)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setData:(id)arg1 forKey:(id)arg2 syncIdentity:(long long)arg3 error:(id*)arg4;
- (bool)setDate:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setNumber:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setPropertyListValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setQuantity:(id)arg1 unit:(id)arg2 forKey:(id)arg3 error:(id*)arg4;
- (bool)setString:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setValueForAllKeys:(id)arg1 error:(id*)arg2;
- (bool)setValuesWithDictionary:(id)arg1 error:(id*)arg2;
- (void)startObservation:(id)arg1;
- (void)stopObservation:(id)arg1;
- (id)stringForKey:(id)arg1 error:(id*)arg2;
- (id)valuesForKeys:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthMedicationsDaemonPlugin.framework/HealthMedicationsDaemonPlugin

+ (id)hdmd_defaultDomainWithProfile:(id)arg1;

- (bool)hdmd_numberValueAsBoolForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

+ (id)hdmc_appProtectedSyncedMenstrualCyclesDefaultsDomainWithProfile:(id)arg1;
+ (id)hdmc_cycleChartsHiddenRowsDomainWithProfile:(id)arg1;
+ (id)hdmc_deviationDetectionAnalyticsProtectedDomainWithProfile:(id)arg1;
+ (id)hdmc_menstrualCyclesOvulationConfirmationNotificationStateDeviceLocalDomainWithProfile:(id)arg1;
+ (id)hdmc_menstrualCyclesUnconfirmedDeviationNotificationStateDeviceLocalDomainWithProfile:(id)arg1;
+ (id)hdmc_syncedMenstrualCyclesDefaultsDomainWithProfile:(id)arg1;
+ (id)hdmc_syncedUnprotectedDomainWithProfile:(id)arg1;

- (id)hdmc_lastLoggedInCycleTrackingDateWithError:(id*)arg1;
- (id)hdmc_legacyOnboardingFirstCompletedDateWithError:(id*)arg1;
- (id)hdmc_legacyOnboardingVersionCompletedWithError:(id*)arg1;
- (id)hdmc_menstrualCyclesOvulationConfirmationNotificationGetStateWithError:(id*)arg1;
- (bool)hdmc_menstrualCyclesOvulationConfirmationNotificationSetValuesWithState:(id)arg1 error:(id*)arg2;
- (id)hdmc_menstrualCyclesUnconfirmedDeviationNotificationGetStateWithError:(id*)arg1;
- (bool)hdmc_menstrualCyclesUnconfirmedDeviationNotificationSetValuesWithState:(id)arg1 error:(id*)arg2;
- (id)hdmc_onboardingTileLastDismissedDateWithError:(id*)arg1;
- (bool)hdmc_setLastLoggedInCycleTrackingDate:(id)arg1 error:(id*)arg2;
- (bool)hdmc_setOnboardingTileLastDismissedTimeIntervalSinceReferenceDate:(id)arg1 error:(id*)arg2;
- (bool)hdmc_setUnconfirmedDeviationDismissalDayIndex:(id)arg1 error:(id*)arg2;
- (bool)hdmc_setUpdatedFertileWindowNotificationFireDate:(id)arg1 error:(id*)arg2;
- (id)hdmc_unconfirmedDeviationDismissalDayIndexWithError:(id*)arg1;
- (id)hdmc_updatedFertileWindowNotificationFireDateWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon

+ (id)hdhr_aFibBurdenProtectedLocalDomainForProfile:(id)arg1;
+ (id)hdhr_aFibBurdenProtectedSyncedDomainForProfile:(id)arg1;
+ (id)hdhr_heartRhythmProtectedLocalDomainForProfile:(id)arg1;
+ (id)hdhr_heartRhythmProtectedSyncedDomainForProfile:(id)arg1;

- (id)hdhr_atrialFibrillationOnboardingCompletedDateWithError:(id*)arg1;
- (id)hdhr_atrialFibrillationOnboardingCompletionVersionWithError:(id*)arg1;
- (id)hdhr_atrialFibrillationOnboardingCountryCodeWithError:(id*)arg1;
- (id)hdhr_electrocardiogramRecordingCountryCodeProvenanceWithError:(id*)arg1;
- (id)hdhr_electrocardiogramRecordingFirstOnboardingCompletedDateWithError:(id*)arg1;
- (id)hdhr_electrocardiogramRecordingOnboardingCompletionVersionWithError:(id*)arg1;
- (id)hdhr_electrocardiogramRecordingOnboardingCountryCodeWithError:(id*)arg1;
- (id)hdhr_electrocardiogramRecordingOnboardingHistoryWithError:(id*)arg1;
- (id)hdhr_irregularRhythmNotificationsOnboardingCompletionForFeatureIdentifier:(id)arg1 error:(id*)arg2;
- (bool)hdhr_resetAtrialFibrillationDetectionOnboardingWithError:(id*)arg1;
- (bool)hdhr_resetElectrocardiogramRecordingFirstOnboardingCompletedDateWithError:(id*)arg1;
- (bool)hdhr_setAtrialFibrillationDetectionCurrentOnboardingVersionCompletedInCountryCode:(id)arg1 error:(id*)arg2;
- (bool)hdhr_setElectrocardiogramRecordingFirstOnboardingCompletedDate:(id)arg1 error:(id*)arg2;
- (void)setNotificationSentDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MentalHealthDaemon.framework/MentalHealthDaemon

+ (id)hdmh_mentalHealthSyncedDefaultsDomainWithProfile:(id)arg1;

@end
