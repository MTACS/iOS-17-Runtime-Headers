
@interface SBHFeatherBlurNavigationBar : UINavigationBar {
    bool  _allowsAnimatedUpdating;
    UINavigationBarAppearance * _barAppearance;
    UIView * _capturedLargeTextLabelContainerView;
    UIView * _capturedTinyTextLabelContainerView;
    UINavigationItem * _configuredForItem;
    SBFFeatherBlurView * _featherBlurBackgroundView;
    UILabel * _featherBlurTitleLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _gradientMaskFrame;
    double  _largeTextHeight;
    NSArray * _maskLayers;
    double  _sb_maximumNavbarHeight;
    double  _sb_minimumNavbarHeight;
}

@property (nonatomic) bool allowsAnimatedUpdating;
@property (nonatomic, retain) SBFFeatherBlurView *featherBlurBackgroundView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } gradientMaskFrame;
@property (nonatomic, readonly) double sb_maximumNavbarHeight;
@property (nonatomic, readonly) double sb_minimumNavbarHeight;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateCompactNavBarFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateFeatherBlurBackgroundViewFrame;
- (id)_capturedLargeTextLabelContainerView;
- (id)_capturedTinyTextLabelContainerView;
- (double)_topMargin;
- (void)_updateAppearance;
- (void)_updateHeights;
- (void)_updateLabel;
- (bool)allowsAnimatedUpdating;
- (long long)barPosition;
- (id)featherBlurBackgroundView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gradientMaskFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)sb_maximumNavbarHeight;
- (double)sb_minimumNavbarHeight;
- (void)setAllowsAnimatedUpdating:(bool)arg1;
- (void)setFeatherBlurBackgroundView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
