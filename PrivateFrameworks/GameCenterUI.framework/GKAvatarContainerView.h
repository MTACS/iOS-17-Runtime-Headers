
@interface GKAvatarContainerView : UIView <GKPlayerAvatarViewDelegate> {
    <GKAvatarContainerViewDelegate> * _delegate;
    UIView * _editImage;
    UIImageView * _editImageBackground;
    GKGradientLabel * _editLabel;
    UILabel * _emailLabel;
    UIView * _imageContainer;
    NSLayoutConstraint * _imageContainerTopConstraint;
    UILabel * _nicknameLabel;
    GKDashboardPlayerPhotoView * _playerAvatarView;
    UITapGestureRecognizer * _tapGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GKAvatarContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *editImage;
@property (nonatomic, retain) UIImageView *editImageBackground;
@property (nonatomic, retain) GKGradientLabel *editLabel;
@property (nonatomic, retain) UILabel *emailLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *imageContainer;
@property (nonatomic, retain) NSLayoutConstraint *imageContainerTopConstraint;
@property (nonatomic, retain) UILabel *nicknameLabel;
@property (nonatomic, retain) GKDashboardPlayerPhotoView *playerAvatarView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGesture;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)delegate;
- (void)didMoveToSuperview;
- (void)didSelectPlayerAvatarView:(id)arg1;
- (void)didSetPlayerAvatarImage:(id)arg1;
- (id)editImage;
- (id)editImageBackground;
- (id)editLabel;
- (id)emailLabel;
- (id)imageContainer;
- (id)imageContainerTopConstraint;
- (void)layoutSubviews;
- (id)nicknameLabel;
- (id)playerAvatarView;
- (void)prepareForDefaultNicknameViewController;
- (void)refreshHeaderViewProfileImage;
- (void)refreshViewForLocalPlayer;
- (void)setDelegate:(id)arg1;
- (void)setEditImage:(id)arg1;
- (void)setEditImageBackground:(id)arg1;
- (void)setEditLabel:(id)arg1;
- (void)setEmailLabel:(id)arg1;
- (void)setImageContainer:(id)arg1;
- (void)setImageContainerTopConstraint:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setPlayerAvatarView:(id)arg1;
- (void)setTapGesture:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setupEditImageBackground;
- (id)tapGesture;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAvatarEditingAvailability;

@end
