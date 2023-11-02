
@interface SKStepWiFiSetupServer : NSObject <CULabelable, SKStepable> {
    bool  _activateCalled;
    CUBonjourAdvertiser * _bonjourAdvertiser;
    NSObject<OS_dispatch_source> * _bonjourTimeoutTimer;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _internetReachabilityEnabled;
    CUReachabilityMonitor * _internetReachabilityMonitor;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    NSString * _label;
    double  _metricTotalSeconds;
    id /* block */  _responseHandler;
    int  _runState;
    NSDictionary * _scanResult;
    id /* block */  _skCompletionHandler;
    <CUMessaging> * _skMessaging;
    SKSetupBase * _skSetupObject;
    unsigned long long  _startTicks;
    bool  _stepDone;
    NSError * _stepError;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    int  _wifiChannel;
    bool  _wifiDirected;
    id  _wifiEAPConfig;
    id  _wifiEAPTrustExceptions;
    bool  _wifiHomeNetwork;
    NSData * _wifiPSK;
    NSString * _wifiPassword;
    NSString * _wifiSSID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) id /* block */ skCompletionHandler;
@property (nonatomic, retain) <CUMessaging> *skMessaging;
@property (nonatomic) SKSetupBase *skSetupObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_completeWithError:(id)arg1;
- (void)_handleRequestBonjourTestDone:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleRequestBonjourTestStart:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleRequestWiFiSetup:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_invalidated;
- (void)_run;
- (void)_runInternetReachabilityStart;
- (void)_runJoinStart:(int)arg1;
- (void)_runScanResults:(id)arg1 error:(id)arg2 channel:(int)arg3;
- (void)_runScanStart:(int)arg1;
- (void)activate;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id)label;
- (void)setDispatchQueue:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSkCompletionHandler:(id /* block */)arg1;
- (void)setSkMessaging:(id)arg1;
- (void)setSkSetupObject:(id)arg1;
- (id /* block */)skCompletionHandler;
- (id)skMessaging;
- (id)skSetupObject;

@end
