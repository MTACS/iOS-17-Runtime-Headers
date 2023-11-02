
@interface SBSUIWallpaperProgressHUD : UIView {
    UIActivityIndicatorView * _activityIndicatorView;
    _UIBackdropView * _backdropView;
    UILabel * _label;
}

- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)showMessage:(id)arg1 inView:(id)arg2;

@end
