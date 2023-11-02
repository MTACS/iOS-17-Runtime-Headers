
@interface DBInCallWidgetAvatarView : UIButton {
    NSString * _appBundleIdentifier;
    UIImageView * _appIconView;
    CNAvatarViewController * _avatarController;
    CNAvatarViewControllerSettings * _avatarControllerSettings;
    TUCall * _currentCall;
    UIImageView * _focusRingView;
}

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, retain) UIImageView *appIconView;
@property (nonatomic, retain) CNAvatarViewController *avatarController;
@property (nonatomic, retain) CNAvatarViewControllerSettings *avatarControllerSettings;
@property (nonatomic, retain) TUCall *currentCall;
@property (nonatomic, retain) UIImageView *focusRingView;

- (void).cxx_destruct;
- (void)_setupImagesIfNecessary;
- (id)appBundleIdentifier;
- (id)appIconView;
- (id)avatarController;
- (id)avatarControllerSettings;
- (id)currentCall;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusRingView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setAppIconView:(id)arg1;
- (void)setAvatarController:(id)arg1;
- (void)setAvatarControllerSettings:(id)arg1;
- (void)setCurrentCall:(id)arg1;
- (void)setFocusRingView:(id)arg1;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)arg1;

@end
