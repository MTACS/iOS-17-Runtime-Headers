
@interface FBProcessExitContext : NSObject <BSDescriptionProviding> {
    unsigned long long  _exitReason;
    NSError * _launchError;
    FBProcessState * _stateBeforeExiting;
    long long  _terminationReason;
    FBSProcessTerminationRequest * _terminationRequest;
    RBSProcessExitContext * _underlyingContext;
    FBProcessWatchdogEventContext * _watchdogContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long exitReason;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSError *launchError;
@property (nonatomic, copy) FBProcessState *stateBeforeExiting;
@property (readonly) Class superclass;
@property (nonatomic) long long terminationReason;
@property (nonatomic, retain) FBSProcessTerminationRequest *terminationRequest;
@property (nonatomic, readonly) RBSProcessExitContext *underlyingContext;
@property (nonatomic, retain) FBProcessWatchdogEventContext *watchdogContext;

+ (id)descriptionForExitReason:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)consideredJetsam;
- (id)createError;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (int)exitCode;
- (unsigned long long)exitReason;
- (long long)exitStatus;
- (bool)exitedNormally;
- (bool)fairPlayFailure;
- (id)initWithLaunchError:(id)arg1 underlyingContext:(id)arg2;
- (id)initWithUnderlyingContext:(id)arg1;
- (id)launchError;
- (void)setStateBeforeExiting:(id)arg1;
- (void)setTerminationReason:(long long)arg1;
- (void)setTerminationRequest:(id)arg1;
- (void)setWatchdogContext:(id)arg1;
- (id)stateBeforeExiting;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)terminationReason;
- (id)terminationRequest;
- (int)terminationSignal;
- (id)underlyingContext;
- (id)watchdogContext;

@end
