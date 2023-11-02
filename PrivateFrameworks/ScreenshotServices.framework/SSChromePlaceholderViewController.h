
@interface SSChromePlaceholderViewController : UIViewController {
    SSChromePlaceholderView * _placeholderView;
}

@property (nonatomic, readonly) long long backgroundBlurEffectStyle;
@property (nonatomic) double contentAlpha;
@property (nonatomic, readonly) UIColor *cropsCornerColor;
@property (nonatomic, readonly) double cropsCornerContentPadding;
@property (nonatomic, readonly) double cropsCornerEdgeLength;
@property (nonatomic, readonly) double cropsCornerLineWidth;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenshotContentFrame;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (int)_preferredStatusBarVisibility;
- (long long)backgroundBlurEffectStyle;
- (double)contentAlpha;
- (id)cropsCornerColor;
- (double)cropsCornerContentPadding;
- (double)cropsCornerEdgeLength;
- (double)cropsCornerLineWidth;
- (long long)preferredStatusBarStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenshotContentFrame;
- (void)setContentAlpha:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
