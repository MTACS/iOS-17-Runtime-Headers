
@interface CNStarkContactNameView : UIView {
    CNAvatarViewController * _avatarViewController;
    CNContact * _contact;
    UILabel * _nameLabel;
}

@property (nonatomic, readonly) CNAvatarViewController *avatarViewController;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) UILabel *nameLabel;

- (void).cxx_destruct;
- (id)avatarViewController;
- (id)contact;
- (id)initWithName:(id)arg1;
- (id)nameLabel;
- (void)setupAvatar;
- (void)setupConstraints;
- (void)setupNameLabel;

@end
