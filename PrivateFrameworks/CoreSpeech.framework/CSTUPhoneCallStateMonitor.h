
@interface CSTUPhoneCallStateMonitor : CSPhoneCallStateMonitor {
    NSObject<OS_dispatch_queue> * _queue;
    TUCallCenter * _tuCallCenter;
    unsigned long long  _tuPhoneCallState;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) TUCallCenter *tuCallCenter;
@property (nonatomic) unsigned long long tuPhoneCallState;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_callStatusDidChangeHandler:(id)arg1;
- (unsigned long long)_fetchTUPhoneCallState;
- (void)_registerPhoneCallStateChangeNotifier;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (bool)firstPartyCall;
- (id)init;
- (unsigned long long)phoneCallState;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setTuCallCenter:(id)arg1;
- (void)setTuPhoneCallState:(unsigned long long)arg1;
- (id)tuCallCenter;
- (unsigned long long)tuPhoneCallState;

@end
