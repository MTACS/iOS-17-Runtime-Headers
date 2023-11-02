
@interface STUIStatusBarBackgroundActivityItem : STUIStatusBarIndicatorItem {
    STUIStatusBarPillView * _backgroundView;
    STUIStatusBarActivityIconView * _iconView;
    NSString * _previousBackgroundActivityIdentifier;
    STUIStatusBarImageView * _secondaryIconView;
}

@property (nonatomic, retain) STUIStatusBarPillView *backgroundView;
@property (nonatomic, retain) STUIStatusBarActivityIconView *iconView;
@property (nonatomic, retain) NSString *previousBackgroundActivityIdentifier;
@property (nonatomic, retain) STUIStatusBarImageView *secondaryIconView;

+ (double)_fontSizeAdjustmentForActivityWithIdentifier:(id)arg1;
+ (bool)_identifierContainsItemImage:(id)arg1;
+ (bool)_identifierContainsSecondaryItemImage:(id)arg1;
+ (double)_verticalOffsetForActivityWithIdentifier:(id)arg1;
+ (id)backgroundDisplayIdentifier;
+ (id)secondaryIconDisplayIdentifier;

- (void).cxx_destruct;
- (id)_backgroundActivityViewForIdentifier:(id)arg1;
- (id)_backgroundColorForActivityWithIdentifier:(id)arg1;
- (void)_create_backgroundView;
- (void)_create_iconView;
- (void)_create_secondaryIconView;
- (id)_imageNameForActivityWithIdentifier:(id)arg1;
- (id)_secondarySystemImageNameForActivityWithIdentifier:(id)arg1;
- (bool)_shouldPulseBackgroundForActivityWithIdentifier:(id)arg1 traitCollection:(id)arg2;
- (bool)_shouldPulseSymbolForActivityWithIdentifier:(id)arg1 traitCollection:(id)arg2;
- (bool)_shouldRingForActivityWithIdentifier:(id)arg1 traitCollection:(id)arg2;
- (id)_systemImageNameForActivityWithIdentifier:(id)arg1;
- (id)_textLabelForActivityWithIdentifier:(id)arg1;
- (id)_visualEffectForActivityWithIdentifier:(id)arg1 traitCollection:(id)arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)backgroundView;
- (bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (bool)crossfadeForUpdate:(id)arg1;
- (id)iconView;
- (id)imageForUpdate:(id)arg1;
- (id)imageNameForUpdate:(id)arg1;
- (id)imageView;
- (id)indicatorEntryKey;
- (id)previousBackgroundActivityIdentifier;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)secondaryIconView;
- (id)secondaryImageForUpdate:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setPreviousBackgroundActivityIdentifier:(id)arg1;
- (void)setSecondaryIconView:(id)arg1;
- (id)systemImageNameForUpdate:(id)arg1;
- (void)updatedDisplayItemsWithData:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
