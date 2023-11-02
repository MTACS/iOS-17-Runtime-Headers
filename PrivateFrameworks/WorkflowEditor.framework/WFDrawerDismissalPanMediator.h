
@interface WFDrawerDismissalPanMediator : NSObject {
    CADisplayLink * _displayLink;
    <WFDrawerDragTracking> * _dragTracker;
    UIPanGestureRecognizer * _gestureRecognizer;
    double  _peakVelocity;
    double  _previousVelocity;
    double  _translation;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleDisplayLink:(id)arg1;
- (id)initWithPanGesture:(id)arg1 dragTracker:(id)arg2;
- (void)invalidate;

@end
