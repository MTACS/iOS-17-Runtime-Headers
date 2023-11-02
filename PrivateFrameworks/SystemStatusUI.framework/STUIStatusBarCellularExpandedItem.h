
@interface STUIStatusBarCellularExpandedItem : STUIStatusBarCellularItem {
    STUIStatusBarBadgeView * _badgeView;
}

@property (nonatomic, retain) STUIStatusBarBadgeView *badgeView;

+ (id)badgeDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(bool)arg4;

- (void).cxx_destruct;
- (void)_create_badgeView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
