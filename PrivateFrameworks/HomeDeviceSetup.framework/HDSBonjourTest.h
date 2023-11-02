
@interface HDSBonjourTest : NSObject {
    int  _bonjourTestState;
    CUBonjourBrowser * _browser;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    double  _metricTotalSeconds;
    SFSession * _sfSession;
    unsigned long long  _startTicks;
    NSString * _testID;
    double  _timeout;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) int bonjourTestState;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) double metricTotalSeconds;
@property (nonatomic, retain) SFSession *sfSession;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (void)_complete;
- (void)_handleFoundDevice:(id)arg1;
- (void)_handleTimeout;
- (void)activate;
- (int)bonjourTestState;
- (id /* block */)completionHandler;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (double)metricTotalSeconds;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setSfSession:(id)arg1;
- (void)setTimeout:(double)arg1;
- (id)sfSession;
- (double)timeout;

@end
