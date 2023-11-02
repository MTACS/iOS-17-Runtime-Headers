
@interface CSCXPhoneCallStateMonitor : CSPhoneCallStateMonitor <CXCallObserverDelegate> {
    CXCallObserver * _callObserver;
    TUCallProviderManager * _tuCallProviderManager;
}

@property (nonatomic, retain) CXCallObserver *callObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) TUCallProviderManager *tuCallProviderManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)callObserver;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (bool)firstPartyCall;
- (id)init;
- (unsigned long long)phoneCallState;
- (void)setCallObserver:(id)arg1;
- (void)setTuCallProviderManager:(id)arg1;
- (id)tuCallProviderManager;

@end
