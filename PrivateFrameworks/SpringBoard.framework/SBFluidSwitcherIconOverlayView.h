
@interface SBFluidSwitcherIconOverlayView : BSUIOrientationTransformWrapperView {
    double  _cornerRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _crossfadeViewFrame;
    NSArray * _crossfadeViews;
    UIViewFloatAnimatableProperty * _iconCrossfadeAnimatableProperty;
    CAMediaTimingFunction * _iconCrossfadeTimingFunction;
    UIView * _iconCrossfadeView;
    UIView * _iconOverlayContainerView;
    SBIconView * _iconOverlayView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialIconOverlayViewBounds;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } crossfadeViewFrame;
@property (nonatomic, readonly) SBIconView *iconView;

- (void).cxx_destruct;
- (void)_applyIconOverlayViewOverlayScaleProperties;
- (double)_currentFadeValue;
- (double)_iconOverlayScale;
- (void)_setCrossfadeViewsAlpha:(double)arg1;
- (void)_setUpIconCrossfadeAnimatableProperty;
- (void)_setUpIconCrossfadeView;
- (double)cornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })crossfadeViewFrame;
- (void)dealloc;
- (id)iconView;
- (id)initWithIconView:(id)arg1 crossfadeViews:(id)arg2 crossfadeViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 contentOrientation:(long long)arg4 containerOrientation:(long long)arg5;
- (void)invalidate;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg1;

@end
