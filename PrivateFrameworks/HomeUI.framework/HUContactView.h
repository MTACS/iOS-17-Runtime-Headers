
@interface HUContactView : UIView {
    NSArray * _accounts;
    UILabel * _appleIDAccountLabel;
    UILabel * _appleMusicAccountLabel;
    double  _avatarDiameter;
    CNAvatarView * _avatarView;
    NSMutableArray * _constraints;
    CNContact * _contact;
    NSString * _contactNameFontTextStyle;
    long long  _contactNameFormatStyle;
    UILabel * _messageLabel;
    UILabel * _nameLabel;
    unsigned long long  _numberOfLinesForMessage;
}

@property (nonatomic, retain) NSArray *accounts;
@property (nonatomic, retain) UILabel *appleIDAccountLabel;
@property (nonatomic, retain) UILabel *appleMusicAccountLabel;
@property (nonatomic) double avatarDiameter;
@property (nonatomic, retain) CNAvatarView *avatarView;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) NSString *contactNameFontTextStyle;
@property (nonatomic) long long contactNameFormatStyle;
@property (nonatomic, retain) NSAttributedString *message;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic) unsigned long long numberOfLinesForMessage;

- (void).cxx_destruct;
- (bool)_isPhoneNumberOnlyAccount;
- (void)_setupViews;
- (void)_updateConstraints;
- (void)_updateNameLabelFont;
- (id)accounts;
- (id)appleIDAccountLabel;
- (id)appleMusicAccountLabel;
- (double)avatarDiameter;
- (id)avatarView;
- (id)constraints;
- (id)contact;
- (id)contactNameFontTextStyle;
- (long long)contactNameFormatStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)message;
- (id)messageLabel;
- (id)nameLabel;
- (unsigned long long)numberOfLinesForMessage;
- (void)setAccounts:(id)arg1;
- (void)setAppleIDAccountLabel:(id)arg1;
- (void)setAppleMusicAccountLabel:(id)arg1;
- (void)setAvatarDiameter:(double)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactNameFontTextStyle:(id)arg1;
- (void)setContactNameFormatStyle:(long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNumberOfLinesForMessage:(unsigned long long)arg1;

@end
