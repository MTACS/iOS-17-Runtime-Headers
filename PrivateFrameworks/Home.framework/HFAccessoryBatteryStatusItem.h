
@interface HFAccessoryBatteryStatusItem : HFStatusItem {
    NSMutableDictionary * _batteryLevelItems;
}

@property (nonatomic, retain) NSMutableDictionary *batteryLevelItems;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)batteryLevelItems;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)arg1;
- (void)setBatteryLevelItems:(id)arg1;

@end
