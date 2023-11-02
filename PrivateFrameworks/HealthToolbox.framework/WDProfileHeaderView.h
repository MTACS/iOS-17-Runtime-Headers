
@interface WDProfileHeaderView : UIView {
    UIView * _avatarView;
    NSPersonNameComponentsFormatter * _nameFormatter;
    UILabel * _nameLabel;
}

@property (nonatomic, retain) UIView *avatarView;
@property (nonatomic, retain) NSPersonNameComponentsFormatter *nameFormatter;
@property (getter=isNameHidden, nonatomic) bool nameHidden;
@property (nonatomic, retain) UILabel *nameLabel;

+ (double)avatarViewSize;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_updateFont;
- (id)avatarView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isNameHidden;
- (void)layoutSubviews;
- (id)nameFormatter;
- (id)nameLabel;
- (void)setAvatarView:(id)arg1;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (void)setNameFormatter:(id)arg1;
- (void)setNameHidden:(bool)arg1;
- (void)setNameLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
