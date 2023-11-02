
@interface HDHealthRecordsAccountExistenceNotifier : NSObject <HDHealthRecordsAccountEventObserver, HDProfileReadyObserver> {
    <HDHealthRecordsProfileExtension> * _healthRecordsProfileExtension;
    bool  _isProfileReady;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKObserverSet<HDHealthRecordsAccountExistenceObserver> * _observers;
    HDProfile * _profile;
    long long  _state;
    long long  _testOverrideState;
    id /* block */  _unitTesting_profileReadyCompleteHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ontologyEnablingHealthRecordsAccountExists;
@property (nonatomic, readonly) long long ontologyEnablingHealthRecordsAccountState;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_profileReadyCompleteHandler;

- (void).cxx_destruct;
- (void)addAccountExistenceObserver:(id)arg1;
- (void)addAccountExistenceObserver:(id)arg1 queue:(id)arg2;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (bool)ontologyEnablingHealthRecordsAccountExists;
- (long long)ontologyEnablingHealthRecordsAccountState;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (void)profileExtension:(id)arg1 accountEventOccurred:(unsigned long long)arg2;
- (void)removeAccountExistenceObserver:(id)arg1;
- (void)setUnitTesting_profileReadyCompleteHandler:(id /* block */)arg1;
- (id /* block */)unitTesting_profileReadyCompleteHandler;
- (void)unitTesting_setOntologyEnablingHealthRecordsAccountExists:(bool)arg1;

@end
