
@interface _UIStatusBarDualIndicatorItem : _UIStatusBarItem {
    double  _additionRemovalDuration;
    double  _additionRemovalScale;
    _UIStatusBarImageView * _iconView;
    _UIStatusBarDisplayableContainerView * _iconsView;
    double  _itemSpacing;
    NSLayoutConstraint * _itemSpacingConstraint;
    _UIStatusBarImageView * _secondaryIconView;
}

@property (nonatomic) double additionRemovalDuration;
@property (nonatomic) double additionRemovalScale;
@property (nonatomic, retain) _UIStatusBarImageView *iconView;
@property (nonatomic, retain) _UIStatusBarDisplayableContainerView *iconsView;
@property (nonatomic) double itemSpacing;
@property (nonatomic, retain) NSLayoutConstraint *itemSpacingConstraint;
@property (nonatomic, retain) _UIStatusBarImageView *secondaryIconView;

- (void).cxx_destruct;
- (void)_create_iconView;
- (void)_create_iconsView;
- (void)_create_secondaryIconView;
- (id)additionRemovalAnimationForSubItem:(id)arg1 image:(id)arg2 update:(id)arg3 displayItem:(id)arg4;
- (double)additionRemovalDuration;
- (double)additionRemovalScale;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)dependentEntryKeys;
- (id)iconView;
- (id)iconsView;
- (id)imageForUpdate:(id)arg1 secondary:(bool)arg2;
- (id)indicatorEntryKey;
- (double)itemSpacing;
- (id)itemSpacingConstraint;
- (id)secondaryIconView;
- (id)secondaryIndicatorEntryKey;
- (id)secondarySystemImageNameForUpdate:(id)arg1;
- (void)setAdditionRemovalDuration:(double)arg1;
- (void)setAdditionRemovalScale:(double)arg1;
- (void)setIconView:(id)arg1;
- (void)setIconsView:(id)arg1;
- (void)setItemSpacing:(double)arg1;
- (void)setItemSpacingConstraint:(id)arg1;
- (void)setSecondaryIconView:(id)arg1;
- (id)systemImageNameForUpdate:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
