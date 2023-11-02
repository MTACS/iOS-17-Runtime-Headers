
@interface STUIStatusBarFullBackgroundActivityItem : STUIStatusBarBackgroundActivityItem {
    STUIStatusBarStringView * _detailStringView;
}

@property (nonatomic, retain) STUIStatusBarStringView *detailStringView;

+ (id)detailDisplayIdentifier;

- (void).cxx_destruct;
- (void)_create_backgroundView;
- (void)_create_detailStringView;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)detailStringView;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)setDetailStringView:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
