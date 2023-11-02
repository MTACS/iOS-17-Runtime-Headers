
@interface STStatusBarDataBluetoothEntry : STStatusBarDataEntry {
    STStatusBarDataBatteryEntry * _batteryEntry;
    long long  _state;
}

@property (nonatomic, readonly, copy) STStatusBarDataBatteryEntry *batteryEntry;
@property (nonatomic, readonly) long long state;

+ (id)entryWithState:(long long)arg1 batteryEntry:(id)arg2;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (id)batteryEntry;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)state;
- (id)succinctDescriptionBuilder;

@end
