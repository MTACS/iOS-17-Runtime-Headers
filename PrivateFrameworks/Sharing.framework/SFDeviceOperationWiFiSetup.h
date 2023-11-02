
@interface SFDeviceOperationWiFiSetup : NSObject {
    CUBonjourBrowser * _bonjourBrowser;
    NSString * _bonjourTestID;
    int  _bonjourTestState;
    NSObject<OS_dispatch_source> * _bonjourTimer;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    double  _metricBonjourTestSeconds;
    double  _metricTotalSeconds;
    double  _metricWiFiSetupSeconds;
    bool  _reachabilityEnabled;
    CUReachabilityMonitor * _reachabilityMonitor;
    unsigned int  _repairFlags;
    unsigned int  _setupFlags;
    SFSession * _sfSession;
    bool  _skipLocalReachability;
    bool  _skipReachability;
    unsigned long long  _startBonjourTestTicks;
    unsigned long long  _startTicks;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic, readonly) int bonjourTestState;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) double metricBonjourTestSeconds;
@property (nonatomic, readonly) double metricTotalSeconds;
@property (nonatomic, readonly) double metricWiFiSetupSeconds;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned int setupFlags;
@property (nonatomic, retain) SFSession *sfSession;
@property (nonatomic) bool skipLocalReachability;
@property (nonatomic) bool skipReachability;

- (void).cxx_destruct;
- (void)_activate;
- (void)_activate2;
- (void)_bonjourTestFoundDevice:(id)arg1;
- (void)_bonjourTestStart;
- (void)_bonjourTestTimeout;
- (void)_complete:(id)arg1;
- (void)_setupResponse:(id)arg1;
- (void)activate;
- (int)bonjourTestState;
- (id /* block */)completionHandler;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (double)metricBonjourTestSeconds;
- (double)metricTotalSeconds;
- (double)metricWiFiSetupSeconds;
- (unsigned int)repairFlags;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setRepairFlags:(unsigned int)arg1;
- (void)setSetupFlags:(unsigned int)arg1;
- (void)setSfSession:(id)arg1;
- (void)setSkipLocalReachability:(bool)arg1;
- (void)setSkipReachability:(bool)arg1;
- (unsigned int)setupFlags;
- (id)sfSession;
- (bool)skipLocalReachability;
- (bool)skipReachability;

@end
