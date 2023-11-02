
@interface APOdmlXpcLifecycleHandler : NSObject {
    bool  _performDeferralCheck;
    NSString * _requestIdentifier;
    NSDate * _startDate;
    NSOperationQueue * _workQueue;
    NSObject<OS_xpc_object> * _xpc_activity;
}

@property (nonatomic) bool performDeferralCheck;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly) bool shouldDefer;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSOperationQueue *workQueue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpc_activity;

- (void).cxx_destruct;
- (void)_backgroundDeferralCheck:(id)arg1 completion:(id /* block */)arg2;
- (bool)continueTask;
- (bool)deferTask;
- (void)endBackgroundDeferralCheck;
- (bool)finishTask;
- (id)initWithActivity:(id)arg1;
- (bool)performDeferralCheck;
- (id)requestIdentifier;
- (void)setPerformDeferralCheck:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setXpc_activity:(id)arg1;
- (bool)shouldDefer;
- (void)startBackgroundDeferralCheckForTime:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)startDate;
- (bool)taskCanContinueForTime:(id)arg1;
- (bool)taskIsContinuing;
- (bool)taskIsDeferred;
- (id)workQueue;
- (id)xpc_activity;

@end
