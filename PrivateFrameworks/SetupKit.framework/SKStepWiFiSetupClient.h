
@interface SKStepWiFiSetupClient : NSObject <CULabelable, SKStepable> {
    CUBonjourBrowser * _bonjourBrowser;
    NSString * _bonjourTestID;
    NSObject<OS_dispatch_source> * _bonjourTimer;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _internetReachabilityEnabled;
    CUReachabilityMonitor * _internetReachabilityMonitor;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    NSString * _label;
    double  _metricTotalSeconds;
    double  _metricWiFiSetupSeconds;
    int  _runState;
    id /* block */  _skCompletionHandler;
    <CUMessaging> * _skMessaging;
    SKSetupBase * _skSetupObject;
    unsigned long long  _startBonjourTestTicks;
    unsigned long long  _startTicks;
    bool  _stepDone;
    NSError * _stepError;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    CWFInterface * _wifiInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) double metricTotalSeconds;
@property (nonatomic, readonly) double metricWiFiSetupSeconds;
@property (nonatomic, copy) id /* block */ skCompletionHandler;
@property (nonatomic, retain) <CUMessaging> *skMessaging;
@property (nonatomic) SKSetupBase *skSetupObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;
- (void)_invalidateCore;
- (void)_invalidated;
- (void)_run;
- (bool)_runInit;
- (void)_runInternetReachabilityStart;
- (void)_runWiFiSetupStart;
- (void)activate;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id)label;
- (double)metricTotalSeconds;
- (double)metricWiFiSetupSeconds;
- (void)setDispatchQueue:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSkCompletionHandler:(id /* block */)arg1;
- (void)setSkMessaging:(id)arg1;
- (void)setSkSetupObject:(id)arg1;
- (id /* block */)skCompletionHandler;
- (id)skMessaging;
- (id)skSetupObject;

@end
