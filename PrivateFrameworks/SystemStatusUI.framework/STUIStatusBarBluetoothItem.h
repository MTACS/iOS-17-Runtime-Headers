
@interface STUIStatusBarBluetoothItem : STUIStatusBarIndicatorItem {
    STUIStatusBarImageView * _batteryImageView;
}

@property (nonatomic, retain) STUIStatusBarImageView *batteryImageView;

+ (bool)alwaysShowRegulatoryBluetoothIndicator;
+ (id)batteryDisplayIdentifier;

- (void).cxx_destruct;
- (id)_batteryFillColorForEntry:(id)arg1 usingTintColor:(id)arg2;
- (void)_create_batteryImageView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)batteryImageView;
- (id)indicatorEntryKey;
- (void)setBatteryImageView:(id)arg1;
- (id)systemImageNameForUpdate:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
