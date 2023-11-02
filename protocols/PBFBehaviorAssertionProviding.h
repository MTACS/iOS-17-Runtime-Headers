
@protocol PBFBehaviorAssertionProviding <NSObject>

@required

- (<BSInvalidatable> *)acquireEditingSessionAssertionForProvider:(NSString *)arg1 withReason:(NSString *)arg2;
- (<BSInvalidatable> *)acquireSnapshotterDisabledAssertionForProvider:(NSString *)arg1 withReason:(NSString *)arg2;
- (<BSInvalidatable> *)acquireSnapshotterInUseAssertionWithReason:(NSString *)arg1;
- (NSSet *)activeEditingSessionAssertionExtensionIdentifiers;
- (void)addBehaviorAssertionObserver:(id <PBFBehaviorAssertionObserver>)arg1;
- (void)removeBehaviorAssertionObserver:(id <PBFBehaviorAssertionObserver>)arg1;

@end
