
@interface SBHIconTableViewCell : UITableViewCell <SBHLegibility> {
    UIView * _customSelectedBackgroundView;
    SBIcon * _icon;
    NSString * _iconDescription;
    UIView<SBIconLabelAccessoryView> * _iconLabelAccessoryView;
    NSArray * _iconLabelAccessoryViewConstraints;
    UILabel * _iconNameLabel;
    SBIconView * _iconView;
    UIView * _iconViewContainerView;
    NSArray * _iconViewContainerViewConstraints;
    long long  _labelAccessoryType;
    UIView * _labelContainerView;
    _UILegibilitySettings * _legibilitySettings;
}

@property (nonatomic, readonly) SBIcon *icon;
@property (nonatomic, readonly) NSString *iconDescription;
@property (nonatomic, readonly) UILabel *iconNameLabel;
@property (nonatomic, retain) SBIconView *iconView;
@property (nonatomic, readonly) UIView *iconViewContainerView;
@property (nonatomic, copy) NSArray *iconViewContainerViewConstraints;
@property (nonatomic, readonly) UIView *labelContainerView;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;

+ (double)defaultTableViewCellHeightForIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
+ (double)defaultTableViewCellHorizontalMargin;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultTableViewCellSeparatorInsetsForIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;

- (void).cxx_destruct;
- (void)_resetContent;
- (void)_resetIconView;
- (bool)_setLabelAccessoryType:(long long)arg1;
- (void)_teardownIconLabelAccessoryView;
- (void)_updateHighlightBackgroundView;
- (bool)_updateIconNameLabelForDisplayName:(id)arg1 labelAccessoryType:(long long)arg2;
- (void)_updateTitleLabelFont;
- (void)configureCellForIcon:(id)arg1;
- (id)icon;
- (id)iconDescription;
- (id)iconNameLabel;
- (id)iconView;
- (id)iconViewContainerView;
- (id)iconViewContainerViewConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)labelContainerView;
- (id)legibilitySettings;
- (void)prepareForReuse;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setIconView:(id)arg1;
- (void)setIconViewContainerViewConstraints:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
