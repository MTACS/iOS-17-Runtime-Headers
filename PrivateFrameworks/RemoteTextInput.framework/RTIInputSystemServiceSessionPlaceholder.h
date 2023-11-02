
@interface RTIInputSystemServiceSessionPlaceholder : RTIInputSystemServiceSession

+ (id)placeholderServiceSessionWithIdentifier:(id)arg1 traits:(id)arg2 state:(id)arg3;

- (void)_killConnectionWithCallback;
- (void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(id /* block */)arg1;
- (id)bundleIdentifier;
- (void)didInitializeWithConnection:(id)arg1;
- (void)flushOperations;
- (void)flushOperationsWithResultHandler:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1;
- (id)initWithIdentifier:(id)arg1 traits:(id)arg2 state:(id)arg3;
- (int)pid;
- (id)valueForEntitlement:(id)arg1;

@end
