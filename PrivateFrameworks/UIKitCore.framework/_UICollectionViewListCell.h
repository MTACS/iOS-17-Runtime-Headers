
@interface _UICollectionViewListCell : UICollectionViewListCell {
    long long  __backgroundViewConfigurationGrouping;
}

@property (setter=_setBackgroundViewConfigurationGrouping:, nonatomic) long long _backgroundViewConfigurationGrouping;
@property (nonatomic, readonly) UILayoutGuide *_separatorLayoutGuide;
@property (nonatomic) bool expanded;
@property (nonatomic) bool indentsLeadingAccessories;
@property (nonatomic, copy) NSArray *leadingAccessoryConfigurations;
@property (nonatomic, copy) NSArray *leadingEditingAccessoryConfigurations;
@property (nonatomic) long long selectionStyle;
@property (nonatomic, copy) NSArray *trailingAccessoryConfigurations;
@property (nonatomic, copy) NSArray *trailingEditingAccessoryConfigurations;

- (long long)_backgroundViewConfigurationGrouping;
- (id)_configurationForListAccessoryType:(long long)arg1;
- (id)_customViewForAccessoryConfiguration:(id)arg1;
- (unsigned long long)_maskedCornersForSystemBackgroundView;
- (id)_separatorLayoutGuide;
- (void)_setAccessoryConfigurations:(id)arg1 forAxis:(long long)arg2;
- (void)_setBackgroundViewConfigurationGrouping:(long long)arg1;
- (long long)accessoryTypeForAxis:(long long)arg1;
- (id)accessoryViewForAxis:(long long)arg1;
- (bool)expanded;
- (bool)indentsLeadingAccessories;
- (void)setAccessoryType:(long long)arg1 forAxis:(long long)arg2;
- (void)setAccessoryView:(id)arg1 forAxis:(long long)arg2;
- (void)setExpanded:(bool)arg1;
- (void)setIndentsLeadingAccessories:(bool)arg1;

@end
