
@interface CACGestureLivePreviewOverlayManager : CACSimpleContentViewManager {
    CACGestureLivePreviewViewController * _gestureViewController;
}

@property (nonatomic, retain) CACGestureLivePreviewViewController *gestureViewController;

- (void).cxx_destruct;
- (void)addPointsToLiveRecordingGesturePreviewByFingerIdentifier:(id)arg1 forces:(id)arg2 atTime:(double)arg3;
- (id)gestureViewController;
- (bool)isOverlay;
- (bool)isPhysiciallyInteractiveOverlay;
- (void)removeTrackingForFingerIdentifier:(id)arg1;
- (void)setGestureViewController:(id)arg1;
- (void)showGestureLivePreviewViewer;

@end
