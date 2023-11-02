
@interface CNMeCardSharedProfileCellContentView : UIView {
    CNAvatarView * _avatarView;
    NSArray * _constraints;
    UIStackView * _labelStackView;
    CNContact * _meContact;
    UILabel * _titleLabel;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) CNAvatarView *avatarView;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) UIStackView *labelStackView;
@property (nonatomic, retain) CNContact *meContact;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *valueLabel;

+ (id)log;

- (void).cxx_destruct;
- (id)avatarView;
- (id)constraints;
- (id)displayStringForSharingAudience;
- (id)init;
- (id)labelStackView;
- (id)meContact;
- (void)setAvatarHidden:(bool)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setLabelStackView:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setMeContact:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpAvatarView;
- (void)setUpLabels;
- (void)setValueLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (id)titleLabel;
- (void)updateAvatarViewContact;
- (void)updateConstraints;
- (void)updateView;
- (id)valueLabel;

@end
