
@interface RoomPlan.RoomCaptureCoachingOverlayView : UIView <UIGestureRecognizerDelegate> {
    void $__lazy_storage_$_pitchAdjustment;
    void ambientLight;
    void arGlyphView;
    void arcBallCamera;
    void cameraTransform;
    void coachingLabel;
    void coachingLabelContainer;
    void coachingText;
    void completionMargin;
    void currentInitializationState;
    void currentInstruction;
    void directionalDebugEntity;
    void directionalLight;
    void directionalLightDirection;
    void dollHouse;
    void dollHouseARView;
    void immediateLongPressRecognizer;
    void isModelEnabled;
    void lightingAnchor;
    void onboardingText;
    void panGestureRecognizer;
    void pinchGestureRecognizer;
    void runtimeScaleAdjustment;
    void scaleAdjustment;
    void sceneObserver;
}

- (void).cxx_destruct;
- (void)didPanWithPanGesture:(id)arg1;
- (void)didPinchWithPinchGesture:(id)arg1;
- (void)didTouchDownWithLongPressGesture:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
