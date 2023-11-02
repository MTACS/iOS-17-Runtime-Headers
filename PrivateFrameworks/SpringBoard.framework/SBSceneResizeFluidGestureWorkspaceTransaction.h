
@interface SBSceneResizeFluidGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction <SBSceneLayoutWorkspaceTransactionObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)_gestureType;
- (void)_willAddChildTransaction:(id)arg1;
- (id)layoutState;
- (id)selectedAppLayout;

@end
