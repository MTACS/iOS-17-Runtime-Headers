
@interface SBContinuousExposeStripRevealGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction {
    bool  _completedGestureWithTransitionRequest;
}

- (bool)_canBeInterrupted;
- (long long)_gestureType;
- (void)handleTransitionRequestForGestureComplete:(id)arg1 fromGestureManager:(id)arg2;

@end
