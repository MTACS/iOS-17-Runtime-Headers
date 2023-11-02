
@interface HDPeriodicCountryMonitor : NSObject <HDDiagnosticObject, HDNanoSyncManagerObserver> {
    <HKRegulatoryDomainProvider> * _countryCodeManager;
    id /* block */  _countryCodeProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_shouldBypassNextBuildVersionLimit;
    <_HDPeriodicCountryMonitorNanoSyncManagerProviding> * _nanoSyncManager;
    NSObject<OS_dispatch_queue> * _observerQueue;
    HKSynchronousObserverSet * _observers;
    HDProfile * _profile;
    unsigned long long  _state;
    NSDate * _unitTest_currentDate;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastCheckAttemptDate;
@property (nonatomic, readonly, copy) NSString *lastFetchAttemptBuild;
@property (nonatomic, readonly, copy) NSDate *lastFetchAttemptDate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observerQueue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *unitTest_currentDate;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (void)_recordSuccessfulFetchForCurrentPairedBuilds;
- (id)diagnosticDescription;
- (void)enqueueMaintenanceFetch;
- (void)fetchCurrentISOCountryCodeAndNotifyObserversWithCompletion:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 nanoSyncManager:(id)arg2;
- (id)initWithProfile:(id)arg1 nanoSyncManager:(id)arg2 countryCodeProvider:(id /* block */)arg3 userDefaults:(id)arg4;
- (id)lastCheckAttemptDate;
- (id)lastFetchAttemptBuild;
- (id)lastFetchAttemptDate;
- (void)nanoSyncManager:(id)arg1 pairedDevicesChanged:(id)arg2;
- (id)observerQueue;
- (void)registerObserver:(id)arg1;
- (void)setUnitTest_currentDate:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (id)unitTest_currentDate;
- (void)unregisterObserver:(id)arg1;
- (id)userDefaults;

@end
