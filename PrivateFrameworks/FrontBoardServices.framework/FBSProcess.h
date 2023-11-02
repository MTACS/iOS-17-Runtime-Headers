
@interface FBSProcess : NSObject <BSDescriptionProviding, FBSProcessInternal> {
    BSProcessHandle * _handle;
    RBSProcessIdentity * _identity;
    bool  _running;
    BSMachPortTaskNameRight * _taskNameRight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) BSProcessHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) RBSProcessIdentity *identity;
@property (nonatomic, readonly) int pid;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) BSMachPortTaskNameRight *taskNameRight;

+ (id)currentProcess;

- (void).cxx_destruct;
- (id)_initForCurrentProcess;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (bool)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)handle;
- (id)identity;
- (id)init;
- (bool)isRunning;
- (int)pid;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)taskNameRight;

@end
