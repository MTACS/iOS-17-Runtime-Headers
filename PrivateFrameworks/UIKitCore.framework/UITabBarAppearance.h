
@interface UITabBarAppearance : UIBarAppearance {
    UITabBarItemAppearance * _compactInlineLayoutAppearance;
    UITabBarItemAppearance * _inlineLayoutAppearance;
    _UITabBarLayoutData * _layoutData;
    UITabBarItemAppearance * _stackedLayoutAppearance;
}

@property (setter=_setSelectedItemVibrancyEffect:, nonatomic, copy) UIVibrancyEffect *_selectedItemVibrancyEffect;
@property (nonatomic, copy) UITabBarItemAppearance *compactInlineLayoutAppearance;
@property (nonatomic, copy) UITabBarItemAppearance *inlineLayoutAppearance;
@property (nonatomic, retain) UIImage *selectionIndicatorImage;
@property (nonatomic, copy) UIColor *selectionIndicatorTintColor;
@property (nonatomic) long long stackedItemPositioning;
@property (nonatomic) double stackedItemSpacing;
@property (nonatomic) double stackedItemWidth;
@property (nonatomic, copy) UITabBarItemAppearance *stackedLayoutAppearance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_checkEqualTo:(id)arg1;
- (id)_compactInlineTabButtonAppearanceData;
- (void)_completeInit;
- (void)_copyFromAppearance:(id)arg1;
- (id)_dataForItemStyle:(long long)arg1;
- (void)_decodeFromCoder:(id)arg1;
- (void)_describeInto:(id)arg1;
- (unsigned long long)_hashInto:(unsigned long long)arg1;
- (id)_inlineTabButtonAppearanceData;
- (void)_setupDefaults;
- (id)_stackedTabButtonAppearanceData;
- (void)_tabBarItemDataChanged:(id)arg1;
- (id)_tabLayoutAppearanceData;
- (id)compactInlineLayoutAppearance;
- (void)encodeWithCoder:(id)arg1;
- (id)inlineLayoutAppearance;
- (id)selectionIndicatorImage;
- (id)selectionIndicatorTintColor;
- (void)setCompactInlineLayoutAppearance:(id)arg1;
- (void)setInlineLayoutAppearance:(id)arg1;
- (void)setSelectionIndicatorImage:(id)arg1;
- (void)setSelectionIndicatorTintColor:(id)arg1;
- (void)setStackedItemPositioning:(long long)arg1;
- (void)setStackedItemSpacing:(double)arg1;
- (void)setStackedItemWidth:(double)arg1;
- (void)setStackedLayoutAppearance:(id)arg1;
- (long long)stackedItemPositioning;
- (double)stackedItemSpacing;
- (double)stackedItemWidth;
- (id)stackedLayoutAppearance;

@end
