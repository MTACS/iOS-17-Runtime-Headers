
@interface MPCVocalAttenuationPolicyController : NSObject <MPCVocalAttenuationPolicyDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _blockingPolicies;
    <MPCVocalAttenuationPolicyControllerDelegate> * _delegate;
    NSMutableArray * _policies;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, copy) NSMutableArray *blockingPolicies;
@property (nonatomic, readonly) <MPCVocalAttenuationPolicyControllerDelegate> *delegate;
@property (nonatomic, copy) NSMutableArray *policies;

- (void).cxx_destruct;
- (void)_notifyDelegate;
- (void)_setupPoliciesWithParameters:(id)arg1;
- (id)accessQueue;
- (id)blockingEvaluation;
- (id)blockingPolicies;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 parameters:(id)arg2;
- (id)policies;
- (void)resetPolicies;
- (void)setAccessQueue:(id)arg1;
- (void)setBlockingPolicies:(id)arg1;
- (void)setPolicies:(id)arg1;
- (void)vocalAttenuationPolicy:(id)arg1 didChangeEvaluation:(id)arg2;

@end
