
@interface PKAccountUserDetailHeaderView : UIView {
    CNContactInlineActionsViewController * _actionsViewController;
    PKAvatarHeaderView * _avatarHeaderView;
    CNContact * _contactForActions;
    CNContact * _contactForDisplay;
}

@property (nonatomic, retain) CNContact *contactForActions;
@property (nonatomic, retain) CNContact *contactForDisplay;

- (void).cxx_destruct;
- (id)contactForActions;
- (id)contactForDisplay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setContactForActions:(id)arg1;
- (void)setContactForDisplay:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
