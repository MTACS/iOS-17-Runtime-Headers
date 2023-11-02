
@interface HDSDeviceActivationOperation : NSObject <SignpostProviding> {
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _metricTotalSeconds;
    SFSession * _sfSession;
    unsigned long long  _startTicks;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) double metricTotalSeconds;
@property (nonatomic, retain) SFSession *sfSession;
@property (readonly) unsigned long long signpostID;
@property (nonatomic) unsigned long long startTicks;
@property (readonly) Class superclass;

+ (id)signpostLog;

- (void).cxx_destruct;
- (void)_beginActivationWithCompletion:(id /* block */)arg1;
- (void)_checkActivationStateWithCompletion:(id /* block */)arg1;
- (void)_continueActivationWithSessionData:(id)arg1 completion:(id /* block */)arg2;
- (void)_finishActivation:(id)arg1 responseHeader:(id)arg2 completion:(id /* block */)arg3;
- (void)_finishWithResult:(long long)arg1 error:(id)arg2;
- (void)_performActivationWithCompletion:(id /* block */)arg1;
- (void)_sendActivationURLRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)activate;
- (id /* block */)completionHandler;
- (id)dispatchQueue;
- (double)metricTotalSeconds;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setMetricTotalSeconds:(double)arg1;
- (void)setSfSession:(id)arg1;
- (void)setStartTicks:(unsigned long long)arg1;
- (id)sfSession;
- (unsigned long long)signpostID;
- (unsigned long long)startTicks;

@end
