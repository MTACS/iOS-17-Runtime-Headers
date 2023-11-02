
@interface CKNicknameUpdatesCollectionViewCell : UICollectionViewCell <CKNicknameUpdateInterface> {
    CKAvatarView * _avatarView;
    UIView * _bottomSeparator;
    NSLayoutConstraint * _bottomSeparatorLeadingConstraint;
    <CKNicknameUpdatesCollectionViewCellDelegate> * _delegate;
    UIButton * _ignoreButton;
    UIImageView * _imageView;
    bool  _needsContextualMenu;
    CKNicknameUpdate * _nicknameUpdate;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UIView * _topSeparator;
    UIButton * _updateButton;
}

@property (nonatomic, retain) CKAvatarView *avatarView;
@property (nonatomic, retain) UIView *bottomSeparator;
@property (nonatomic, retain) NSLayoutConstraint *bottomSeparatorLeadingConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKNicknameUpdatesCollectionViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIButton *ignoreButton;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool needsContextualMenu;
@property (nonatomic, retain) CKNicknameUpdate *nicknameUpdate;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIView *topSeparator;
@property (nonatomic, retain) UIButton *updateButton;

+ (bool)recalculateUsesStackedButtonLayout;
+ (id)reuseIdentifier;
+ (void)setRecalculateUsesStackedButtonLayout:(bool)arg1;
+ (void)setUsesStackedButtonLayout:(bool)arg1;
+ (bool)usesStackedButtonLayout;

- (void).cxx_destruct;
- (void)_activateButtonConstraints;
- (void)_activateCatalystButtonConstraints;
- (void)_activateImageConstraints;
- (void)_activateSeparatorConstraints;
- (void)_activateStackedButtonConstraints;
- (void)_activateStandardButtonConstraints;
- (void)_activateSubtitleConstraints;
- (void)_activateTitleConstraints;
- (void)_configureContentView;
- (void)_configureIgnoreButton;
- (void)_configureUpdateButton;
- (id)_generateButton;
- (void)_ignoreButtonTapped:(id)arg1;
- (bool)_shouldUseStackedButtonLayout;
- (bool)_showsSeparators;
- (void)_updateButtonTapped:(id)arg1;
- (id)avatarView;
- (id)bottomSeparator;
- (id)bottomSeparatorLeadingConstraint;
- (void)configureWithNicknameUpdate:(id)arg1 order:(unsigned long long)arg2;
- (id)delegate;
- (id)ignoreButton;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)needsContextualMenu;
- (id)nicknameUpdate;
- (void)prepareForReuse;
- (void)setAvatarView:(id)arg1;
- (void)setBottomSeparator:(id)arg1;
- (void)setBottomSeparatorLeadingConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIgnoreButton:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setNeedsContextualMenu:(bool)arg1;
- (void)setNicknameUpdate:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopSeparator:(id)arg1;
- (void)setUpdateButton:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)topSeparator;
- (id)updateButton;
- (void)updateInterfaceSelectedAction:(unsigned long long)arg1 forUpdate:(id)arg2;
- (void)updateSeparatorsForOrder:(unsigned long long)arg1;

@end
