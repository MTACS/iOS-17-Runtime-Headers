
@interface PKAvatarTableViewCell : UITableViewCell {
    CNAvatarView * _avatarView;
    CNContact * _contact;
}

@property (nonatomic, readonly) CNAvatarView *avatarView;
@property (nonatomic, retain) CNContact *contact;

- (void).cxx_destruct;
- (id)avatarView;
- (id)contact;
- (id)initWithContact:(id)arg1 delegate:(id)arg2 style:(long long)arg3 reuseIdentifier:(id)arg4;
- (void)layoutSubviews;
- (void)setContact:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
