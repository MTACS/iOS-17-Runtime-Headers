
@interface STUIStatusBarPillBackgroundActivityItem : STUIStatusBarBackgroundActivityItem {
    STUIStatusBarPillView * _combinedView;
    STUIStatusBarDisplayableContainerView * _iconsView;
    struct CGSize { 
        double width; 
        double height; 
    }  _pillSize;
}

@property (nonatomic, retain) STUIStatusBarPillView *combinedView;
@property (nonatomic, retain) STUIStatusBarDisplayableContainerView *iconsView;
@property (nonatomic) struct CGSize { double x1; double x2; } pillSize;

+ (bool)_identifierContainsItemImage:(id)arg1;
+ (bool)_identifierContainsSecondaryItemImage:(id)arg1;
+ (id)pillCombinedDisplayIdentifier;
+ (bool)shouldKeepIconVisibleForActivityWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_backgroundActivityViewForIdentifier:(id)arg1;
- (void)_create_combinedView;
- (void)_create_iconsView;
- (bool)_shouldBounceWhenTransitioningActivityWithIdentifier:(id)arg1 toActivityWithIdentifier:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)combinedView;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)iconsView;
- (struct CGSize { double x1; double x2; })pillSize;
- (void)setCombinedView:(id)arg1;
- (void)setIconsView:(id)arg1;
- (void)setPillSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldUpdateIndicatorForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
