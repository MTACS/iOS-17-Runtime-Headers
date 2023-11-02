
@interface CNBadgingAvatarView : UIView {
    CNAvatarViewController * _avatarViewController;
    UIImageView * _badgeImageView;
    CNBadgingAvatarBadgeStyleSettings * _badgeStyleSettings;
    bool  _isDoNotDisturb;
    bool  _isMarkedForSyndication;
    <CNCancelable> * _likenessBadgeRendererToken;
    CNAvatarAccessoryView * _mediaContextBadge;
    UIImageView * _mediaContextBadgeView;
}

@property (nonatomic, retain) CNAvatarViewController *avatarViewController;
@property (nonatomic, retain) UIImage *badgeImage;
@property (nonatomic, retain) UIImageView *badgeImageView;
@property (nonatomic, retain) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings;
@property (nonatomic) bool isDoNotDisturb;
@property (nonatomic) bool isMarkedForSyndication;
@property (nonatomic, retain) <CNCancelable> *likenessBadgeRendererToken;
@property (nonatomic, retain) CNAvatarAccessoryView *mediaContextBadge;
@property (nonatomic, retain) UIImageView *mediaContextBadgeView;

- (void).cxx_destruct;
- (id)avatarViewController;
- (id)badgeImage;
- (id)badgeImageView;
- (id)badgeStyleSettings;
- (id)currentLikenessScope;
- (void)dealloc;
- (id)imageRenderer;
- (id)initWithAvatarViewController:(id)arg1;
- (bool)isDoNotDisturb;
- (bool)isMarkedForSyndication;
- (void)layoutSubviews;
- (id)likenessBadgeRendererToken;
- (id)mediaContextBadge;
- (id)mediaContextBadgeView;
- (void)renderLikenessBadge:(id)arg1;
- (void)renderMediaContextBadgeImage;
- (id)schedulerProvider;
- (void)setAvatarViewController:(id)arg1;
- (void)setBadgeImage:(id)arg1;
- (void)setBadgeImageView:(id)arg1;
- (void)setBadgeStyleSettings:(id)arg1;
- (void)setImage:(id)arg1 forAccessoryViewType:(unsigned long long)arg2;
- (void)setIsDoNotDisturb:(bool)arg1;
- (void)setIsMarkedForSyndication:(bool)arg1;
- (void)setLikenessBadgeRendererToken:(id)arg1;
- (void)setMediaContextBadge:(id)arg1;
- (void)setMediaContextBadgeView:(id)arg1;
- (void)updateBadgeCropStyle;
- (void)updateBadgeImageViewBackgroundColor;
- (void)updateBadgeImageViewContentMode;
- (void)updateBadgeImageViewFrame;
- (void)updateBadgeImageViewPosition;
- (void)updateBadgeTintColor;

@end
