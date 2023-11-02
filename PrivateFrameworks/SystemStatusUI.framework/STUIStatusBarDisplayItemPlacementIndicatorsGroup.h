
@interface STUIStatusBarDisplayItemPlacementIndicatorsGroup : STUIStatusBarDisplayItemPlacementGroup {
    STUIStatusBarDisplayItemPlacement * _bluetoothInsetPaddingItem;
    NSArray * _stablePlacements;
    NSArray * _unstablePlacements;
}

@property (nonatomic, readonly) STUIStatusBarDisplayItemPlacement *bluetoothInsetPaddingItem;
@property (nonatomic, readonly, copy) NSArray *stablePlacements;
@property (nonatomic, readonly, copy) NSArray *unstablePlacements;

+ (id)activityItemDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 bluetoothPaddingInset:(double)arg3;

- (void).cxx_destruct;
- (id)bluetoothInsetPaddingItem;
- (id)stablePlacements;
- (id)unstablePlacements;

@end
