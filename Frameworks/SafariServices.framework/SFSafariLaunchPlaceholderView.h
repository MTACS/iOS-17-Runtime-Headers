
@interface SFSafariLaunchPlaceholderView : UIView <UINavigationBarDelegate> {
    UIToolbar * _bottomToolbar;
    UIImageView * _browserIconView;
    UIBarButtonItem * _dismissButton;
    id /* block */  _dismissalHandler;
    UIButton * _largeDismissButton;
    UILabel * _linkCaptionLabel;
    UILabel * _linkTitleLabel;
    double  _topLayoutGuideInset;
    UINavigationBar * _topNavigationBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double topLayoutGuideInset;

+ (id)blankPlaceholder;
+ (id)compatibilityPlaceholderWithAppName:(id)arg1 destinationURL:(id)arg2 forAuthentication:(bool)arg3 dismissalHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)_dismissTapped:(id)arg1;
- (void)layoutSubviews;
- (long long)positionForBar:(id)arg1;
- (void)setTopLayoutGuideInset:(double)arg1;
- (double)topLayoutGuideInset;
- (void)updateBarTintColor:(id)arg1;
- (void)updateControlTintColor:(id)arg1;
- (void)updateDismissButtonStyle:(long long)arg1;

@end
