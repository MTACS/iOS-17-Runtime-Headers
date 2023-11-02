
@interface _UIStatusBarBackgroundActivityItem : _UIStatusBarIndicatorItem {
    _UIStatusBarPillView * _backgroundView;
    _UIStatusBarActivityIconView * _iconView;
    long long  _previousType;
    _UIStatusBarImageView * _secondaryIconView;
}

@property (nonatomic, retain) _UIStatusBarPillView *backgroundView;
@property (nonatomic, retain) _UIStatusBarActivityIconView *iconView;
@property (nonatomic) long long previousType;
@property (nonatomic, retain) _UIStatusBarImageView *secondaryIconView;

+ (double)_fontSizeAdjustmentForActivityType:(long long)arg1;
+ (bool)_identifierContainsItemImage:(id)arg1;
+ (bool)_identifierContainsSecondaryItemImage:(id)arg1;
+ (double)_verticalOffsetForActivityType:(long long)arg1;
+ (id)backgroundDisplayIdentifier;
+ (id)secondaryIconDisplayIdentifier;

- (void).cxx_destruct;
- (id)_backgroundActivityViewForIdentifier:(id)arg1;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (void)_create_backgroundView;
- (void)_create_iconView;
- (void)_create_secondaryIconView;
- (id)_imageNameForActivityType:(long long)arg1;
- (id)_secondarySystemImageNameForActivityType:(long long)arg1;
- (bool)_shouldPulseForActivityType:(long long)arg1 traitCollection:(id)arg2;
- (bool)_shouldRingForActivityType:(long long)arg1 traitCollection:(id)arg2;
- (id)_systemImageNameForActivityType:(long long)arg1;
- (id)_textLabelForActivityType:(long long)arg1;
- (id)_visualEffectForActivityType:(long long)arg1 traitCollection:(id)arg2;
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
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (long long)previousType;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)secondaryIconView;
- (id)secondaryImageForUpdate:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setPreviousType:(long long)arg1;
- (void)setSecondaryIconView:(id)arg1;
- (id)systemImageNameForUpdate:(id)arg1;
- (void)updatedDisplayItemsWithData:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
