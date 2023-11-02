
@interface CNContactNavBarAvatarView : UIView {
    CNAvatarView * _avatarView;
    CNContact * _contact;
    bool  _showing;
}

@property (nonatomic, retain) CNAvatarView *avatarView;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) bool showing;

- (void).cxx_destruct;
- (id)avatarView;
- (id)contact;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAvatarView:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setShowing:(bool)arg1;
- (void)setShowing:(bool)arg1 animated:(bool)arg2;
- (bool)showing;

@end
