
@interface SUICFlamesView : UIView <SUICFlamesViewProvidingDelegate> {
    <SUICFlamesViewDelegate> * _flamesDelegate;
    UIView<SUICFlamesViewProviding> * _flamesView;
}

@property (nonatomic) bool accelerateTransitions;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } activeFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *dictationColor;
@property (nonatomic) <SUICFlamesViewDelegate> *flamesDelegate;
@property (nonatomic) bool freezesAura;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalScaleFactor;
@property (nonatomic, readonly) bool isRenderingEnabled;
@property (nonatomic) long long mode;
@property (nonatomic, retain) UIImage *overlayImage;
@property (nonatomic) bool paused;
@property (nonatomic) bool reduceFrameRate;
@property (nonatomic) bool reduceThinkingFramerate;
@property (nonatomic) bool renderInBackground;
@property (nonatomic) bool showAura;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

+ (bool)_isMetalAvailable;

- (void).cxx_destruct;
- (bool)accelerateTransitions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeFrame;
- (float)audioLevelForFlamesView:(id)arg1;
- (id)dictationColor;
- (void)didMoveToSuperview;
- (void)fadeOutCurrentAura;
- (id)flamesDelegate;
- (void)flamesViewAuraDidDisplay:(id)arg1;
- (bool)freezesAura;
- (double)horizontalScaleFactor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 screen:(id)arg2 fidelity:(long long)arg3;
- (bool)isRenderingEnabled;
- (void)layoutSubviews;
- (long long)mode;
- (id)overlayImage;
- (bool)paused;
- (void)prewarmShadersForCurrentMode;
- (bool)reduceFrameRate;
- (bool)reduceThinkingFramerate;
- (bool)renderInBackground;
- (void)resetAndReinitialize:(bool)arg1;
- (void)resetAndReinitializeMetal:(bool)arg1;
- (void)setAccelerateTransitions:(bool)arg1;
- (void)setActiveFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDictationColor:(id)arg1;
- (void)setFlamesDelegate:(id)arg1;
- (void)setFreezesAura:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHorizontalScaleFactor:(double)arg1;
- (void)setMode:(long long)arg1;
- (void)setOverlayImage:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setReduceFrameRate:(bool)arg1;
- (void)setReduceThinkingFramerate:(bool)arg1;
- (void)setRenderInBackground:(bool)arg1;
- (void)setRenderingEnabled:(bool)arg1 forReason:(id)arg2;
- (void)setShowAura:(bool)arg1;
- (void)setState:(long long)arg1;
- (bool)showAura;
- (long long)state;

@end
