
@protocol RBSServiceLocalProtocol

@required

- (RBSAssertionIdentifier *)acquireAssertion:(RBSAssertion *)arg1 error:(out id*)arg2;
- (NSDictionary *)assertionDescriptorsByPidWithFlattenedAttributes:(bool)arg1 error:(out id*)arg2;
- (NSSet *)busyExtensionInstancesFromSet:(NSSet *)arg1 error:(out id*)arg2;
- (NSString *)captureStateForSubsystem:(NSString *)arg1 error:(out id*)arg2;
- (bool)executeLaunchRequest:(RBSLaunchRequest *)arg1 process:(out id*)arg2 assertion:(out id*)arg3 error:(out id*)arg4;
- (bool)executeTerminateRequest:(RBSTerminateRequest *)arg1 assertion:(out id*)arg2 error:(out id*)arg3;
- (RBSProcessHandle *)handleForKey:(NSNumber *)arg1;
- (RBSProcessHandle *)handleForPredicate:(RBSProcessPredicate *)arg1 error:(out id*)arg2;
- (RBSProcessHandle *)hostProcessForInstance:(RBSProcessInstance *)arg1 error:(out id*)arg2;
- (NSSet *)identifiersForStateCaptureSubsystems:(out id*)arg1;
- (NSDictionary *)infoPlistResultForInstance:(RBSProcessInstance *)arg1 forKeys:(NSArray *)arg2 error:(out id*)arg3;
- (void)intendToExit:(RBSProcessInstance *)arg1 withStatus:(RBSProcessExitStatus *)arg2;
- (bool)invalidateAssertion:(RBSAssertion *)arg1 error:(out id*)arg2;
- (bool)invalidateAssertionWithIdentifier:(RBSAssertionIdentifier *)arg1 error:(out id*)arg2;
- (bool)isIdentityAnAngel:(RBSProcessIdentity *)arg1 withError:(out id*)arg2;
- (RBSProcessExitContext *)lastExitContextForInstance:(RBSProcessInstance *)arg1 error:(out id*)arg2;
- (RBSProcessLimitations *)limitationsForInstance:(RBSProcessInstance *)arg1 error:(out id*)arg2;
- (RBSMachPortTaskNameRight *)portForIdentifier:(RBSProcessIdentifier *)arg1;
- (NSSet *)preventLaunchPredicatesWithError:(out id*)arg1;
- (NSString *)processName:(NSNumber *)arg1;
- (void)reset;
- (bool)saveEndowment:(RBSSavedEndowment *)arg1 withError:(out id*)arg2;
- (NSArray *)statesForPredicate:(RBSProcessPredicate *)arg1 withDescriptor:(RBSProcessStateDescriptor *)arg2 error:(out id*)arg3;
- (bool)subscribeProcessStateMonitor:(RBSProcessMonitor *)arg1 configuration:(RBSProcessMonitorConfiguration *)arg2 error:(out id*)arg3;
- (void)subscribeToProcessDeath:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: RBSProcessIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RBSProcessExitContext *, NSError *, void*
- (void)unsubscribeProcessStateMonitor:(RBSProcessMonitor *)arg1 configuration:(RBSProcessMonitorConfiguration *)arg2;

@end
