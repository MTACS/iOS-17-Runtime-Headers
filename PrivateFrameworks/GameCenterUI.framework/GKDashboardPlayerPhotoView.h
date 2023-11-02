
@interface GKDashboardPlayerPhotoView : UIView {
    UIImageView * _avatarImageView;
    long long  _avatarSize;
    NSObject<GKPlayerAvatarViewDelegate> * _delegate;
    bool  _dimmed;
    bool  _focusable;
    GKPlayer * _player;
    bool  _selected;
    bool  _useDarkerPlaceholder;
    bool  _usingPlaceholder;
}

@property (nonatomic, retain) UIImageView *avatarImageView;
@property (nonatomic) long long avatarSize;
@property (nonatomic) NSObject<GKPlayerAvatarViewDelegate> *delegate;
@property (nonatomic) bool dimmed;
@property (nonatomic) bool focusable;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic) bool selected;
@property (nonatomic) bool useDarkerPlaceholder;
@property (getter=isUsingPlaceholder, nonatomic) bool usingPlaceholder;

- (void).cxx_destruct;
- (id)avatarImageView;
- (long long)avatarSize;
- (bool)canBecomeFocused;
- (void)commonInit;
- (id)delegate;
- (bool)dimmed;
- (bool)focusable;
- (bool)hasImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidatePhoto;
- (bool)isUsingPlaceholder;
- (void)layoutSubviews;
- (id)player;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)refreshImageWithCompletionHandler:(id /* block */)arg1;
- (bool)selected;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setAvatarSize:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setFocusable:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setSelected:(bool)arg1;
- (void)setUseDarkerPlaceholder:(bool)arg1;
- (void)setUsingPlaceholder:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)useDarkerPlaceholder;

@end
