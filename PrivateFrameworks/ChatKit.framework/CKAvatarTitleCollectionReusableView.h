
@interface CKAvatarTitleCollectionReusableView : UICollectionReusableView {
    bool  _avatarPickerActive;
    long long  _avatarTitleAccessoryImageType;
    bool  _chevronHidden;
    UIImageView * _chevronImageView;
    <CKAvatarTitleCollectionReusableViewDelegate> * _delegate;
    UILabel * _locationLabel;
    NSMutableArray * _pendingTitles;
    UIImageView * _statusIndicatorImageView;
    long long  _statusIndicatorType;
    long long  _style;
    CKLabel * _titleLabel;
}

@property (getter=isAvatarPickerActive, nonatomic) bool avatarPickerActive;
@property (nonatomic) long long avatarTitleAccessoryImageType;
@property (getter=isChevronHidden, nonatomic) bool chevronHidden;
@property (nonatomic, retain) UIImageView *chevronImageView;
@property (nonatomic) <CKAvatarTitleCollectionReusableViewDelegate> *delegate;
@property (nonatomic, retain) UILabel *locationLabel;
@property (nonatomic, retain) NSMutableArray *pendingTitles;
@property (nonatomic, retain) UIImageView *statusIndicatorImageView;
@property (nonatomic) long long statusIndicatorType;
@property (nonatomic) long long style;
@property (nonatomic, retain) CKLabel *titleLabel;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (void).cxx_destruct;
- (void)_animateFromQueue;
- (void)_rotateChevronImageView;
- (long long)avatarTitleAccessoryImageType;
- (id)chevronImageView;
- (void)configureChevronImageView;
- (void)configureWithTitle:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAvatarPickerActive;
- (bool)isChevronHidden;
- (bool)isLTR;
- (void)layoutSubviews;
- (id)locationLabel;
- (id)pendingTitles;
- (void)setAvatarPickerActive:(bool)arg1;
- (void)setAvatarTitleAccessoryImageType:(long long)arg1;
- (void)setChevronHidden:(bool)arg1;
- (void)setChevronImageView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setPendingTitles:(id)arg1;
- (void)setStatusIndicatorImageView:(id)arg1;
- (void)setStatusIndicatorType:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1 animated:(bool)arg2;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusIndicatorImageView;
- (long long)statusIndicatorType;
- (long long)style;
- (id)titleLabel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
