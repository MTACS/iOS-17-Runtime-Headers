
@interface CKDetailsGroupHeaderCell : CKDetailsShowMoreContactsCell {
    CKDetailsAvatarPancakeView * _avatarView;
    NSArray * _avatarViews;
    UILabel * _subTitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) CKDetailsAvatarPancakeView *avatarView;
@property (nonatomic, retain) NSArray *avatarViews;
@property (nonatomic, retain) UILabel *subTitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (double)_additionalHeightToAccommodateInterTextVerticalSpacing;
- (void)addConstraints;
- (id)avatarView;
- (id)avatarViews;
- (void)configureCellIconForCollapsedState:(bool)arg1;
- (id)constraintsForAccessibility;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 participants:(id)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAvatarView:(id)arg1;
- (void)setAvatarViews:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)standardConstraints;
- (id)standardWolfConstraints;
- (id)subTitleLabel;
- (id)titleLabel;

@end
