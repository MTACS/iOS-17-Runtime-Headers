
@interface ConversationKit.LocalParticipantControlsView : UIView {
    void $__lazy_storage_$_shutterButton;
    void $__lazy_storage_$_spinnerView;
    void $__lazy_storage_$_videoMessageViewModel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _videoMessagingState;
    void blurEnabled;
    void callAgainHUDView;
    void cameraBlurButton;
    void cameraFlipButton;
    void cinematicFramingButton;
    void cinematicFramingIsEnabled;
    void collapseButton;
    void controlsLayoutGuide;
    void currentConstraints;
    void delegate;
    void effectsButton;
    void effectsSelected;
    void hasInitializedShutterButton;
    void isDisabled;
    void reactionEffectGestureButton;
    void reactionEffectGestureIsEnabled;
    void rotateButton;
    void studioLightButton;
    void studioLightIsEnabled;
    void style;
    void subscriptions;
    void timerSink;
    void videoMessageControls;
    void videoPauseButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewModel;
}

@property (nonatomic, readonly) UIControl *cameraBlurButton;
@property (nonatomic, readonly) UIControl *cameraFlipButton;
@property (nonatomic, readonly) UIControl *cinematicFramingButton;
@property (nonatomic, readonly) UIControl *collapseButton;
@property (nonatomic, readonly) UIControl *effectsButton;
@property (nonatomic, readonly) UIControl *reactionEffectGestureButton;
@property (nonatomic, readonly) UIControl *rotateButton;
@property (nonatomic, retain) UIView *shutterButton;
@property (nonatomic, readonly) UIControl *studioLightButton;
@property (nonatomic, readonly) UIControl *videoPauseButton;

- (void).cxx_destruct;
- (void)callBack;
- (id)cameraBlurButton;
- (id)cameraFlipButton;
- (id)cinematicFramingButton;
- (void)close;
- (id)collapseButton;
- (id)effectsButton;
- (void)handleCameraBlurTapped;
- (void)handleCameraFlipTapped;
- (void)handleCinematicFramingTapped;
- (void)handleCollapseButtonTapped;
- (void)handleEffectsTapped;
- (void)handleReactionEffectGestureTapped;
- (void)handleRotateButtonTapped;
- (void)handleShutterButtonTapped;
- (void)handleStudioLightTapped;
- (void)handleVideoMessageButtonTapped;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)reactionEffectGestureButton;
- (id)rotateButton;
- (void)setShutterButton:(id)arg1;
- (void)showCallDetails;
- (id)shutterButton;
- (id)studioLightButton;
- (id)videoPauseButton;

@end
