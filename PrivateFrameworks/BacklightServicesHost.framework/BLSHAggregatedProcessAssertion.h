
@interface BLSHAggregatedProcessAssertion : NSObject <BSInvalidatable> {
    BLSHAggregateProcessAssertion * _aggregate;
    double  _duration;
    NSString * _explanation;
    bool  _invalidated;
    RBSProcessIdentity * _processIdentity;
    bool  _shouldFaultOnFailureToAcquire;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) RBSProcessIdentity *processIdentity;
@property bool shouldFaultOnFailureToAcquire;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acquireWithCompletion:(id /* block */)arg1;
- (id)createRBSAssertion;
- (void)dealloc;
- (id)description;
- (double)duration;
- (id)explanation;
- (id)initWithExplanation:(id)arg1 processIdentity:(id)arg2 duration:(double)arg3;
- (void)invalidate;
- (id)processIdentity;
- (void)setShouldFaultOnFailureToAcquire:(bool)arg1;
- (bool)shouldFaultOnFailureToAcquire;

@end
