
@interface RoomPlan.DollHouseCameraController : NSObject <UIGestureRecognizerDelegate> {
    void $__lazy_storage_$_pitchAdjustment;
    void arView;
    void arViewSize;
    void camera;
    void delegate;
    void immediateLongPressRecognizer;
    void panGestureRecognizer;
    void pinchGestureRecognizer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  startTapTime;
}

- (void).cxx_destruct;
- (void)didPanWithPanGesture:(id)arg1;
- (void)didPinchWithPinchGesture:(id)arg1;
- (void)didTouchDownWithLongPressGesture:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;

@end
