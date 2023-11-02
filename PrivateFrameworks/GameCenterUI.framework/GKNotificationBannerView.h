
@interface GKNotificationBannerView : UIView {
    UILabel * _actionLabel;
    bool  _canTransitionToPlayerAvatar;
    id /* block */  _completionHandler;
    double  _duration;
    UIView * _leadingAccessoryView;
    UILabel * _messageLabel;
    GKDashboardPlayerPhotoView * _playerAvatarView;
    double  _preferredBannerWidth;
    UILabel * _titleLabel;
    id /* block */  _touchHandler;
    bool  _useShortBanner;
}

@property (nonatomic, retain) UILabel *actionLabel;
@property (nonatomic) bool canTransitionToPlayerAvatar;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) double duration;
@property (nonatomic, retain) UIView *leadingAccessoryView;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) GKDashboardPlayerPhotoView *playerAvatarView;
@property (nonatomic, readonly) double preferredBannerWidth;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) id /* block */ touchHandler;
@property (nonatomic) bool useShortBanner;

+ (bool)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (void)_wasTouched:(id)arg1;
- (id)actionLabel;
- (void)awakeFromNib;
- (void)callCompletionHandler;
- (bool)canTransitionToPlayerAvatar;
- (id /* block */)completionHandler;
- (void)createBackdropViewWithBlurStyle:(long long)arg1;
- (void)createMessageLabel:(id)arg1 withTextStyle:(id)arg2;
- (void)createTitleLabel:(id)arg1 withTextStyle:(id)arg2;
- (void)dealloc;
- (double)duration;
- (void)fadeInWithCompletionHandler:(id /* block */)arg1;
- (void)fadeOutQuickly:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)hideBanner;
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 useShortBanner:(bool)arg4;
- (id)initWithTitle:(id)arg1 player:(id)arg2 leadingAccessoryView:(id)arg3 message:(id)arg4 useShortBanner:(bool)arg5;
- (void)layoutSubviews;
- (id)leadingAccessoryView;
- (id)messageLabel;
- (id)playerAvatarView;
- (double)preferredBannerWidth;
- (void)setActionLabel:(id)arg1;
- (void)setCanTransitionToPlayerAvatar:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDuration:(double)arg1;
- (void)setLeadingAccessoryView:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setPlayerAvatarView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTouchHandler:(id /* block */)arg1;
- (void)setUseShortBanner:(bool)arg1;
- (void)showPlayerAvatarAnimationWithCompletionHandler:(id /* block */)arg1;
- (void)showWithCompletionHandler:(id /* block */)arg1;
- (void)showWithTouchHandler:(id /* block */)arg1;
- (void)startLoadingPlayerAvatar;
- (id)titleLabel;
- (id /* block */)touchHandler;
- (void)transitionToPlayerAvatar;
- (bool)useShortBanner;

@end
