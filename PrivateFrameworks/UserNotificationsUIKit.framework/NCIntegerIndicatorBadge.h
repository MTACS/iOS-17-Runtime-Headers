
@interface NCIntegerIndicatorBadge : UIView <MTVisualStylingRequiring, NCIntegerIndicatorBadging, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    unsigned long long  _badgeCount;
    unsigned long long  _badgeLocation;
    NCBadgedIconView * _badgedIconView;
    UIView * _countBackgroundView;
    UILabel * _countLabel;
    BSUIFontProvider * _fontProvider;
    NSString * _preferredContentSizeCategory;
    MTVisualStylingProvider * _strokeStylingProvider;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) unsigned long long badgeCount;
@property (nonatomic) unsigned long long badgeLocation;
@property (nonatomic, readonly) long long badgeType;
@property (nonatomic) NCBadgedIconView *badgedIconView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCountBackgroundViewIfNecessary;
- (void)_configureCountLabelIfNecessary;
- (id)_fontProvider;
- (void)_updateTextAttributesForCountLabel;
- (void)_updateVisualStylingOfView:(id)arg1 style:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4;
- (void)_visualStylingProviderDidChange:(id)arg1 forCategory:(long long)arg2 outgoingProvider:(id)arg3;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (unsigned long long)badgeCount;
- (unsigned long long)badgeLocation;
- (long long)badgeType;
- (id)badgedIconView;
- (id)initWithBadgeCount:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)preferredContentSizeCategory;
- (id)requiredVisualStyleCategories;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setBadgeCount:(unsigned long long)arg1;
- (void)setBadgeLocation:(unsigned long long)arg1;
- (void)setBadgedIconView:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
