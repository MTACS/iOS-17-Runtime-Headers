
@interface _UIStatusBarBatteryItem : _UIStatusBarItem {
    _UIStatusBarBatteryView * _batteryView;
    _UIStatusBarImageView * _chargingView;
    bool  _highlighted;
    _UIStatusBarStringView * _percentView;
    _UIStatusBarStaticBatteryView * _staticBatteryView;
    bool  _usesCondensedPercentageDisplay;
}

@property (nonatomic, retain) _UIStatusBarBatteryView *batteryView;
@property (nonatomic, retain) _UIStatusBarImageView *chargingView;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) _UIStatusBarStringView *percentView;
@property (nonatomic, retain) _UIStatusBarStaticBatteryView *staticBatteryView;
@property (nonatomic) bool usesCondensedPercentageDisplay;

+ (id)chargingDisplayIdentifier;
+ (id)iconDisplayIdentifier;
+ (id)percentDisplayIdentifier;
+ (id)staticIconDisplayIdentifier;

- (void).cxx_destruct;
- (void)_create_batteryView;
- (void)_create_chargingView;
- (void)_create_percentView;
- (void)_create_staticBatteryView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)batteryView;
- (id)chargingView;
- (id)dependentEntryKeys;
- (bool)highlighted;
- (id)percentView;
- (void)setBatteryView:(id)arg1;
- (void)setChargingView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPercentView:(id)arg1;
- (void)setStaticBatteryView:(id)arg1;
- (void)setUsesCondensedPercentageDisplay:(bool)arg1;
- (id)staticBatteryView;
- (bool)usesCondensedPercentageDisplay;
- (id)viewForIdentifier:(id)arg1;

@end
