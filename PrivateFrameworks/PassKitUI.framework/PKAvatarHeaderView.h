
@interface PKAvatarHeaderView : UIView {
    CNAvatarView * _avatarView;
    CNContact * _contact;
    NSString * _counterpartHandle;
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
}

@property (nonatomic, copy) CNContact *contact;
@property (nonatomic, copy) NSString *counterpartHandle;
@property (nonatomic, copy) UILabel *primaryLabel;
@property (nonatomic, copy) UILabel *secondaryLabel;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 applyLayout:(bool)arg2;
- (void)configureForContact;
- (id)contact;
- (id)counterpartHandle;
- (id)initWithContact:(id)arg1 counterpartHandle:(id)arg2;
- (void)layoutSubviews;
- (id)primaryLabel;
- (id)secondaryLabel;
- (void)setContact:(id)arg1;
- (void)setCounterpartHandle:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
