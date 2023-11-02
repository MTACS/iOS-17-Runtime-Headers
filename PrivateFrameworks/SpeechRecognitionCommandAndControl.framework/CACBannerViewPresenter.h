
@interface CACBannerViewPresenter : NSObject {
    CACBannerView * _bannerView;
    UIView * _containingView;
}

@property (nonatomic, retain) CACBannerView *bannerView;
@property (nonatomic, readonly) UIView *containingView;

+ (double)durationToDisplayMessageString:(id)arg1;

- (void).cxx_destruct;
- (void)_hideBannerView;
- (id)bannerView;
- (id)containingView;
- (void)dismissBannerView;
- (id)initWithContainingView:(id)arg1;
- (void)presentBannerViewWithText:(id)arg1 type:(long long)arg2 avoidingSystemAperature:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)presentBannerViewWithText:(id)arg1 type:(long long)arg2 avoidingSystemAperature:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 duration:(double)arg4;
- (void)setBannerView:(id)arg1;

@end
