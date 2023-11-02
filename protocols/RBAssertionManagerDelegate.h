
@protocol RBAssertionManagerDelegate <NSObject>

@required

- (void)assertionManager:(id <RBAssertionManaging>)arg1 didAddProcess:(RBProcess *)arg2 withState:(RBProcessState *)arg3;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didBeginTrackingInFightUpdatesForProcessIdentity:(RBSProcessIdentity *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didBeginTrackingStateForProcessIdentity:(RBSProcessIdentity *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didEndTrackingInFightUpdatesForProcessIdentity:(RBSProcessIdentity *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didEndTrackingStateForProcessIdentity:(RBSProcessIdentity *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didInvalidateAssertions:(NSSet *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didRejectAcquisitionFromOriginatorWithExcessiveAssertions:(RBProcess *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didRemoveProcess:(RBProcess *)arg2 withState:(RBProcessState *)arg3;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didResolveSystemState:(RBSystemState *)arg2;
- (void)assertionManager:(void *)arg1 didUpdateProcessStates:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: <RBAssertionManaging> *, RBProcessStateChangeSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)assertionManager:(id <RBAssertionManaging>)arg1 willExpireAssertionsSoonForProcess:(RBProcess *)arg2 expirationTime:(double)arg3;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 willInvalidateAssertion:(RBAssertion *)arg2;

@end
