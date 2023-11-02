
@interface HKKeyValueDomain : NSObject <_HKXPCExportable> {
    long long  _category;
    NSString * _domainName;
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    HKObserverSet<HKKeyValueDomainObserver> * _observers;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (nonatomic, readonly) long long category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *domainName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)clientInterface;
+ (id)emergencyDefaultsDomainWithHealthStore:(id)arg1;
+ (id)healthAppDefaultsDomainWithHealthStore:(id)arg1;
+ (id)healthArticlesDefaultsDomainWithHealthStore:(id)arg1;
+ (id)heartRhythmDefaultsDomainWithHealthStore:(id)arg1;
+ (id)safetyDefaultsDomainWithHealthStore:(id)arg1;
+ (id)safetyDefaultsLocalDomainWithHealthStore:(id)arg1;
+ (id)serverInterface;

- (void).cxx_destruct;
- (id)_dataFromPropertyListValue:(id)arg1 error:(id*)arg2;
- (void)_handleAutomaticProxyReconnection;
- (void)_observeKeyValueDomainChanges:(bool)arg1 completion:(id /* block */)arg2;
- (id)_propertyListValueFromData:(id)arg1 error:(id*)arg2;
- (void)_registerFirstObserverWithCompletion:(id /* block */)arg1;
- (void)_startObservation:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)_synchronouslyRegisterToObserveKeyValueDomainChanges:(id*)arg1;
- (void)_unregisterLastObserver;
- (void)allValuesWithCompletion:(id /* block */)arg1;
- (id)allValuesWithError:(id*)arg1;
- (long long)category;
- (void)clientRemote_didUpdate;
- (void)connectionInvalidated;
- (void)dataForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)dataForKey:(id)arg1 error:(id*)arg2;
- (void)dateForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)dateForKey:(id)arg1 error:(id*)arg2;
- (id)domainName;
- (id)exportedInterface;
- (id)healthStore;
- (id)hkhr_electrocardiogramRecordingFirstOnboardingCompletedDateWithError:(id*)arg1;
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2 healthStore:(id)arg3;
- (void)invalidate;
- (void)numberForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)numberForKey:(id)arg1 error:(id*)arg2;
- (void)propertyListValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)propertyListValueForKey:(id)arg1 error:(id*)arg2;
- (id)remoteInterface;
- (void)removeValuesForKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (bool)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setDate:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (bool)setDate:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setNumber:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (bool)setNumber:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setPropertyListValue:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (bool)setPropertyListValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setString:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (bool)setString:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setValueForAllKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)setValuesWithDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)startObservation:(id)arg1;
- (void)stopObservation:(id)arg1;
- (void)stringForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)stringForKey:(id)arg1 error:(id*)arg2;
- (void)unitTest_startObservation:(id)arg1 withCompletion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/HealthKitAdditions.framework/HealthKitAdditions

- (id)_dataWithErrorNoDataForKey:(id)arg1 error:(id*)arg2;
- (id)_dateWithErrorNoDataForKey:(id)arg1 error:(id*)arg2;
- (id)_numberWithErrorNoDataForKey:(id)arg1 error:(id*)arg2;
- (id)_propertyListValueWithErrorNoDataForKey:(id)arg1 error:(id*)arg2;
- (id)_stringWithErrorNoDataForKey:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)hkmc_cycleChartsHiddenRowsDomainWithHealthStore:(id)arg1;

- (bool)hkmc_setOnboardingTileLastDismissedDate:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HeartHealth.framework/HeartHealth

+ (id)hkhr_aFibBurdenDefaultsDomainWithHealthStore:(id)arg1;
+ (id)hkhr_aFibBurdenSyncedDefaultsDomainWithHealthStore:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MentalHealth.framework/MentalHealth

+ (id)hkmh_mentalHealthSyncedDefaultsDomainWithHealthStore:(id)arg1;

@end
