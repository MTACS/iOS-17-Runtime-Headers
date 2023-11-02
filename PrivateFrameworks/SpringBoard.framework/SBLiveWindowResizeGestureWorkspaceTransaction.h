
@interface SBLiveWindowResizeGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction {
    unsigned long long  _selectedEdge;
    long long  _selectedLayoutRole;
}

@property (nonatomic, readonly) unsigned long long selectedEdge;
@property (nonatomic, readonly) long long selectedLayoutRole;

- (void)_beginWithGesture:(id)arg1;
- (long long)_gestureType;
- (bool)isLiveResize;
- (unsigned long long)selectedEdge;
- (long long)selectedLayoutRole;

@end
