
@interface AFUISiriEyesFreeView : UIView {
    SiriUIBackgroundBlurView * _backdropView;
    SiriUIVisualEffectView * _eyesFreeEffectView;
    UIImageView * _eyesFreeLogoView;
    long long  _eyesFreeMode;
}

@property (nonatomic, readonly) long long eyesFreeMode;

- (void).cxx_destruct;
- (void)_configureEyesFreePresentation:(long long)arg1;
- (id)backdropView;
- (void)checkForAndReportEyesFreeLogoBug;
- (long long)eyesFreeMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 eyesFreeMode:(long long)arg2;

@end
