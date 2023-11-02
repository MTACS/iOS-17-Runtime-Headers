
@interface CAMStageLightOverlayView : UIView {
    unsigned long long  __activeTimerID;
    CAMStageLightAnimator * __animator;
    CAShapeLayer * __circleLayer;
    CAGradientLayer * __gradientLayer;
    UIView * __tintView;
    UIImageView * __vignetteView;
    bool  _active;
    double  _bottomContentInset;
    long long  _orientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewportFrame;
    bool  _visible;
}

@property (setter=_setActiveTimerID:, nonatomic) unsigned long long _activeTimerID;
@property (setter=_setAnimator:, nonatomic, retain) CAMStageLightAnimator *_animator;
@property (nonatomic, readonly) CAShapeLayer *_circleLayer;
@property (nonatomic, readonly) CAGradientLayer *_gradientLayer;
@property (nonatomic, readonly) UIView *_tintView;
@property (nonatomic, readonly) UIImageView *_vignetteView;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) double bottomContentInset;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewportFrame;
@property (getter=isVisible, nonatomic) bool visible;

+ (double)_circleDiameterForViewportSize:(struct CGSize { double x1; double x2; })arg1 orientation:(long long)arg2 screenScale:(double)arg3;
+ (bool)_useLargeLayoutForViewportSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })circleFrameForViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orientation:(long long)arg2 bottomContentInset:(double)arg3 screenScale:(double)arg4;

- (void).cxx_destruct;
- (unsigned long long)_activeTimerID;
- (id)_animator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_circleFrameForOrientation:(long long)arg1;
- (id)_circleLayer;
- (id)_gradientLayer;
- (void)_setActiveTimerID:(unsigned long long)arg1;
- (void)_setAnimator:(id)arg1;
- (id)_tintView;
- (void)_updateAnimatorState;
- (void)_updateShadowViewsAnimated:(bool)arg1;
- (id)_vignetteView;
- (double)bottomContentInset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isActive;
- (bool)isVisible;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setActive:(bool)arg1;
- (void)setActive:(bool)arg1 animated:(bool)arg2;
- (void)setBottomContentInset:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setViewportFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(bool)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewportFrame;

@end
