
@interface NTKGradientComposedView : UIView {
    UIView * _backgroundDimmingView;
    NTKGradientView * _backgroundGradientTransitionView;
    NTKGradientView * _backgroundGradientView;
    UIImageView * _backgroundImageView;
    UIView * _composedView;
    UIView * _cornerMaskView;
    NTKRoundedCornerOverlayView * _cornerOverlayView;
    NTKGradientView * _filterGradientView;
    bool  _filterOn;
    UIView * _rootContainerView;
    bool  _showForegroundGradient;
}

@property (nonatomic, readonly) UIView *backgroundDimmingView;
@property (nonatomic, readonly) NTKGradientView *backgroundGradientTransitionView;
@property (nonatomic, readonly) NTKGradientView *backgroundGradientView;
@property (nonatomic, readonly) UIImageView *backgroundImageView;
@property (nonatomic, readonly) UIView *composedView;
@property (nonatomic, readonly) UIView *cornerMaskView;
@property (nonatomic, readonly) NTKRoundedCornerOverlayView *cornerOverlayView;
@property (nonatomic, readonly) NTKGradientView *filterGradientView;
@property (nonatomic) bool filterOn;
@property (nonatomic) UIView *rootContainerView;
@property (nonatomic) bool showForegroundGradient;

- (void).cxx_destruct;
- (void)applyBackgroundGradientColorsFromPalette:(id)arg1;
- (void)applyEditingComplicationsFraction:(double)arg1;
- (void)applyForegroundGradientWithTopColor:(id)arg1 centerColor:(id)arg2 bottomColor:(id)arg3;
- (void)applyGossamerColorPalette:(id)arg1;
- (void)applyGradientColorsFromColorPalette:(id)arg1 toView:(id)arg2;
- (void)applyImageViewTransitionFraction:(double)arg1;
- (id)backgroundDimmingView;
- (id)backgroundGradientTransitionView;
- (id)backgroundGradientView;
- (id)backgroundImageView;
- (id)composedView;
- (id)cornerMaskView;
- (id)cornerOverlayView;
- (id)filterGradientView;
- (bool)filterOn;
- (id)initWithDevice:(id)arg1;
- (id)rootContainerView;
- (void)setFilterOn:(bool)arg1;
- (void)setRootContainerView:(id)arg1;
- (void)setShowForegroundGradient:(bool)arg1;
- (bool)showForegroundGradient;

@end
