
@interface PKAvatarView : UIView {
    CNAvatarViewController * _avatarViewController;
    CNContact * _contact;
    UILabel * _contactNameLabel;
    double  _diameter;
    UIImage * _placeholderImage;
    UIImageView * _placeholderImageView;
    NSString * _placeholderName;
    bool  _showsName;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) double diameter;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic, retain) NSString *placeholderName;
@property (nonatomic) bool showsName;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplate:(bool)arg2;
- (id)contact;
- (id)descriptorForRequiredKeys;
- (double)diameter;
- (id)init;
- (void)layoutSubviews;
- (id)placeholderImage;
- (id)placeholderName;
- (void)setContact:(id)arg1;
- (void)setDiameter:(double)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPlaceholderName:(id)arg1;
- (void)setShowsName:(bool)arg1;
- (bool)showsName;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
