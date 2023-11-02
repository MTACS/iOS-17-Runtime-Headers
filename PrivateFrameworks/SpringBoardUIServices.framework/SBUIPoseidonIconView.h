
@interface SBUIPoseidonIconView : UIView <CAAnimationDelegate> {
    _UILegibilityView * _coachingButton;
    SBUILegibilityLabel * _coachingLabel;
    UIView * _coachingLabelRotationView;
    bool  _containsFirstRowIcons;
    <SBUIPoseidonIconViewDelegate> * _delegate;
    double  _fullProgressFillDuration;
    NSTimer * _idleUntilShimmerTimer;
    bool  _isFilling;
    _UILegibilitySettings * _legibilitySettings;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _localTransform;
    CAGradientLayer * _progressFillGradient;
    NSTimer * _reduceMotionShimmerTimer;
    NSTimer * _restToOpenIdleTimer;
    SBUILegibilityLabel * _restToOpenLabel;
    UIView * _restToOpenLabelRotationView;
    CAGradientLayer * _shimmerGradient;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sidebarFrame;
    double  _startProgressFillTime;
    long long  _state;
}

@property (nonatomic) bool containsFirstRowIcons;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIPoseidonIconViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } localTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sidebarFrame;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelRestToOpenIdleTimer;
- (void)_cancelRestToOpenProgress;
- (void)_contentSizeCategoryDidChange;
- (double)_fontSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_physicalButtonNormalizedFrame;
- (void)_startReduceMotionShimmer;
- (void)_startRestToOpenIdleTimer;
- (void)_startShimmer;
- (void)_stopShimmer;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (bool)containsFirstRowIcons;
- (id)delegate;
- (void)fillRestToOpenWithDuration:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })localTransform;
- (void)resetRestToOpen;
- (void)setContainsFirstRowIcons:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setLocalTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setSidebarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 forIdleTimeout:(bool)arg2 withCompletion:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sidebarFrame;
- (long long)state;

@end
