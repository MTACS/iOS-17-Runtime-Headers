
@interface PKDashboardMessageCell : UITableViewCell {
    id /* block */  _actionOnDismiss;
    CNContact * _avatarContact;
    CNAvatarView * _avatarView;
    UIButton * _dismissButton;
    UIImage * _dismissImage;
    UIImage * _iconImage;
    UIColor * _iconImageTintColor;
    UIImageView * _iconImageView;
    bool  _isTemplateLayout;
    UILabel * _labelMessage;
    UILabel * _labelSecondaryMessage;
    UILabel * _labelSecondaryTitle;
    UILabel * _labelTitle;
    double  _leftContentInset;
    NSString * _message;
    NSString * _secondaryMessage;
    NSString * _secondaryTitle;
    bool  _smallDevice;
    NSString * _title;
    unsigned long long  _type;
}

@property (nonatomic, copy) id /* block */ actionOnDismiss;
@property (nonatomic, retain) CNContact *avatarContact;
@property (nonatomic, retain) UIImage *dismissImage;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) UIColor *iconImageTintColor;
@property (nonatomic, readonly) UILabel *labelMessage;
@property (nonatomic, readonly) UILabel *labelSecondaryMessage;
@property (nonatomic, readonly) UILabel *labelSecondaryTitle;
@property (nonatomic, readonly) UILabel *labelTitle;
@property (nonatomic) double leftContentInset;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *secondaryMessage;
@property (nonatomic, copy) NSString *secondaryTitle;
@property (nonatomic) bool smallDevice;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateAvatarView;
- (id /* block */)actionOnDismiss;
- (id)avatarContact;
- (void)dismissButtonPressed:(id)arg1;
- (id)dismissImage;
- (id)iconImage;
- (id)iconImageTintColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelMessage;
- (id)labelSecondaryMessage;
- (id)labelSecondaryTitle;
- (id)labelTitle;
- (void)layoutSubviews;
- (double)leftContentInset;
- (id)message;
- (void)prepareForReuse;
- (id)secondaryMessage;
- (id)secondaryTitle;
- (void)setActionOnDismiss:(id /* block */)arg1;
- (void)setAvatarContact:(id)arg1;
- (void)setDismissImage:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconImageTintColor:(id)arg1;
- (void)setLeftContentInset:(double)arg1;
- (void)setMessage:(id)arg1;
- (void)setSecondaryMessage:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSmallDevice:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)smallDevice;
- (id)title;
- (unsigned long long)type;

@end
