
@interface MTSleepManager : NSObject <HKSPSleepStoreObserver, MTAlarmObserver, MTSource> {
    <MTAlarmStorage> * _alarmStorage;
    HKSPFeatureAvailabilityStore * _featureStore;
    HKHealthStore * _healthStore;
    <MTPersistence> * _persistence;
    HKSPSleepStore * _sleepStore;
    id /* block */  _sleepStoreProvider;
}

@property (nonatomic, readonly) <MTAlarmStorage> *alarmStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKSPFeatureAvailabilityStore *featureStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) <MTPersistence> *persistence;
@property (nonatomic, retain) HKSPSleepStore *sleepStore;
@property (nonatomic, copy) id /* block */ sleepStoreProvider;
@property (readonly) Class superclass;

+ (id)nextSleepAlarm;

- (void).cxx_destruct;
- (bool)_didCompleteSleepOnboarding;
- (id)alarmStorage;
- (id)featureStore;
- (id)healthStore;
- (id)initWithAlarmStorage:(id)arg1;
- (id)initWithAlarmStorage:(id)arg1 sleepStoreProvider:(id /* block */)arg2 featureStoreProvider:(id /* block */)arg3 healthStore:(id)arg4 persistence:(id)arg5;
- (void)markSleepMigrationComplete;
- (id)persistence;
- (void)resetSleepAlarmSnoozeState;
- (void)setFeatureStore:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setSleepStore:(id)arg1;
- (void)setSleepStoreProvider:(id /* block */)arg1;
- (id)sleepStore;
- (void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2;
- (id /* block */)sleepStoreProvider;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (id)sourceIdentifier;
- (void)updateSleepAlarms;
- (bool)watchSleepFeaturesEnabled;

@end
