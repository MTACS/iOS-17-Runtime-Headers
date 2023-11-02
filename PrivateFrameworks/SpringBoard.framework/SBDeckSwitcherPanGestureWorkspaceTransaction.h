
@interface SBDeckSwitcherPanGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction <SBHomeGrabberDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_begin;
- (void)_beginWithGesture:(id)arg1;
- (void)_didComplete;
- (void)_finishWithGesture:(id)arg1;
- (long long)_gestureType;
- (void)_removeHysteresisFromTranslation;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (id)selectedAppLayoutForGestureRecognizer:(id)arg1;
- (bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (id)touchHistoryProvidingGesture;

@end
