
@interface SBIconProgressView : UIView {
    _SBIconProgressFractionTransition * _activeFractionTransition;
    _SBIconProgressPausedTransition * _activePausedTransition;
    _SBIconProgressStateTransition * _activeStateTransition;
    double  _backgroundAlpha;
    bool  _canAnimate;
    double  _circleRadiusFraction;
    <SBIconProgressViewDelegate> * _delegate;
    CADisplayLink * _displayLink;
    double  _displayedFraction;
    long long  _displayedState;
    bool  _displayingPaused;
    double  _foregroundAlpha;
    bool  _hasOpaqueIconImage;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    double  _lastUpdate;
    double  _modelFraction;
    bool  _modelPaused;
    long long  _modelState;
    double  _pauseRadiusFraction;
}

@property (nonatomic, retain) _SBIconProgressFractionTransition *activeFractionTransition;
@property (nonatomic, retain) _SBIconProgressPausedTransition *activePausedTransition;
@property (nonatomic, retain) _SBIconProgressStateTransition *activeStateTransition;
@property (nonatomic) double backgroundAlpha;
@property (nonatomic) bool canAnimate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } circleBoundingRect;
@property (nonatomic) double circleRadiusFraction;
@property (nonatomic) <SBIconProgressViewDelegate> *delegate;
@property (nonatomic) double displayedFraction;
@property (nonatomic) long long displayedState;
@property (nonatomic) bool displayingPaused;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic) bool hasOpaqueIconImage;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic) double pauseRadiusFraction;

+ (id)_pieImageAtFraction:(double)arg1;
+ (id)_pieImagesMemoryPool;

- (void).cxx_destruct;
- (double)_circleScaleFactor;
- (void)_clearDisplayLink;
- (void)_drawIncomingCircleWithCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_drawOutgoingCircleWithCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_drawPauseUIWithCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_drawPieWithCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_ensureDisplayLink;
- (bool)_hasActiveTransitions;
- (void)_onDisplayLink:(id)arg1;
- (void)_updateFractionTransitionAnimated:(bool)arg1;
- (void)_updatePausedTransitionAnimated:(bool)arg1;
- (void)_updateStateTransitionAnimated:(bool)arg1;
- (void)_updateTransitionsAnimated:(bool)arg1;
- (id)activeFractionTransition;
- (id)activePausedTransition;
- (id)activeStateTransition;
- (double)backgroundAlpha;
- (bool)canAnimate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })circleBoundingRect;
- (double)circleRadiusFraction;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)displayedFraction;
- (long long)displayedState;
- (bool)displayingPaused;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)foregroundAlpha;
- (bool)hasOpaqueIconImage;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)pauseRadiusFraction;
- (void)setActiveFractionTransition:(id)arg1;
- (void)setActivePausedTransition:(id)arg1;
- (void)setActiveStateTransition:(id)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setCanAnimate:(bool)arg1;
- (void)setCircleRadiusFraction:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedFraction:(double)arg1;
- (void)setDisplayedState:(long long)arg1;
- (void)setDisplayingPaused:(bool)arg1;
- (void)setForegroundAlpha:(double)arg1;
- (void)setHasOpaqueIconImage:(bool)arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setPauseRadiusFraction:(double)arg1;
- (void)setState:(long long)arg1 paused:(bool)arg2 fractionLoaded:(double)arg3 animated:(bool)arg4;

@end
