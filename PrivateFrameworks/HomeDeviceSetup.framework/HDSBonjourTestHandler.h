
@interface HDSBonjourTestHandler : NSObject {
    CUBonjourAdvertiser * _advertiser;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    SFSession * _sfSession;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) SFSession *sfSession;

- (void).cxx_destruct;
- (void)_handleStart:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleStop:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)activate;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;
- (void)setSfSession:(id)arg1;
- (id)sfSession;

@end
