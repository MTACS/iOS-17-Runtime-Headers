
@interface _UIStackedImageContainerView : UIView <_UIImageViewOverlayViewDelegate> {
    _UIStackedImageConfiguration * _config;
    NSObject<UINamedLayerStack> * _constructedStackImage;
    bool  _installsMotionEffectsWhenFocused;
    UIView * _overlayView;
    UIImage * _stackImage;
    UIMotionEffectGroup * _stackMotionEffects;
}

@property (nonatomic, copy) _UIStackedImageConfiguration *config;
@property (nonatomic, retain) NSObject<UINamedLayerStack> *constructedStackImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint { double x1; double x2; } focusDirection;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool installsMotionEffectsWhenFocused;
@property (nonatomic, retain) UIView *overlayView;
@property (getter=isPressed, nonatomic) bool pressed;
@property (getter=isStackFocused, nonatomic) bool stackFocused;
@property (nonatomic, retain) UIImage *stackImage;
@property (readonly) Class superclass;

+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (id)_focusedFrameGuide;
- (id)_focusedFrameGuideCreateIfNecessary:(bool)arg1;
- (id)_imageContainerLayer;
- (void)_installMotionEffects;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_setStackFocused:(bool)arg1 animated:(bool)arg2 focusAnimationCoordinator:(id)arg3;
- (void)_uninstallMotionEffects;
- (void)_updateContainerLayerImages;
- (void)_updateFocusedFrameGuideConstraintsIfApplicable;
- (void)_updateOverlayLayer;
- (id)config;
- (id)constructedStackImage;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })focusDirection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)installsMotionEffectsWhenFocused;
- (bool)isPressed;
- (bool)isStackFocused;
- (id)overlayView;
- (void)overlayView:(id)arg1 didChangeClipsToBounds:(bool)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfig:(id)arg1;
- (void)setConstructedStackImage:(id)arg1;
- (void)setFocusDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInstallsMotionEffectsWhenFocused:(bool)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPressed:(bool)arg1;
- (void)setStackFocused:(bool)arg1;
- (void)setStackFocused:(bool)arg1 withFocusAnimationCoordinator:(id)arg2;
- (void)setStackImage:(id)arg1;
- (id)stackImage;

@end