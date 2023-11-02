
@interface CNSharingProfileOnboardingNameCell : UITableViewCell {
    UIImage * _avatarImage;
    UIImageView * _avatarImageView;
    UIView * _fakeSeparator;
    UITextField * _familyNameField;
    UITextField * _givenNameField;
    long long  _nameOrder;
}

@property (nonatomic, retain) UIImage *avatarImage;
@property (nonatomic, retain) UIImageView *avatarImageView;
@property (nonatomic, retain) UIView *fakeSeparator;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, retain) UITextField *familyNameField;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, retain) UITextField *givenNameField;
@property (nonatomic) long long nameOrder;

+ (id)cellIdentifier;
+ (double)desiredMinimumCellHeight;

- (void).cxx_destruct;
- (id)avatarImage;
- (id)avatarImageView;
- (id)fakeSeparator;
- (id)familyName;
- (id)familyNameField;
- (id)givenName;
- (id)givenNameField;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (long long)nameOrder;
- (void)prepareForReuse;
- (double)separatorHeight;
- (void)setAvatarImage:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setFakeSeparator:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setFamilyNameField:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setGivenNameField:(id)arg1;
- (void)setGivenNameField:(id)arg1 familyNameField:(id)arg2;
- (void)setNameOrder:(long long)arg1;
- (id)textFieldForIndex:(long long)arg1;

@end
