
@interface BCBatteryDevice : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _accessoryCategory;
    NSString * _accessoryIdentifier;
    bool  _approximatesPercentCharge;
    bool  _charging;
    bool  _connected;
    bool  _fake;
    NSString * _groupName;
    NSString * _identifier;
    bool  _internal;
    bool  _lowBattery;
    bool  _lowPowerModeActive;
    NSString * _matchIdentifier;
    NSString * _modelNumber;
    NSString * _name;
    unsigned long long  _parts;
    long long  _percentCharge;
    bool  _powerSource;
    long long  _powerSourceState;
    long long  _productIdentifier;
    long long  _transportType;
    long long  _vendor;
    bool  _wirelesslyCharging;
}

@property (nonatomic) unsigned long long accessoryCategory;
@property (nonatomic, copy) NSString *accessoryIdentifier;
@property (nonatomic) bool approximatesPercentCharge;
@property (getter=isCharging, nonatomic) bool charging;
@property (getter=isConnected, nonatomic) bool connected;
@property (getter=isFake, nonatomic) bool fake;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isInternal, nonatomic) bool internal;
@property (getter=isLowBattery, nonatomic) bool lowBattery;
@property (getter=isLowPowerModeActive, nonatomic) bool lowPowerModeActive;
@property (nonatomic, readonly, copy) NSString *matchIdentifier;
@property (nonatomic, copy) NSString *modelNumber;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long parts;
@property (nonatomic) long long percentCharge;
@property (getter=isPowerSource, nonatomic) bool powerSource;
@property (nonatomic) long long powerSourceState;
@property (nonatomic, readonly) long long productIdentifier;
@property (nonatomic) long long transportType;
@property (nonatomic, readonly) long long vendor;
@property (getter=isWirelesslyCharging, nonatomic) bool wirelesslyCharging;

// Image: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter

+ (id)batteryDeviceWithIdentifier:(id)arg1 vendor:(long long)arg2 productIdentifier:(long long)arg3 parts:(unsigned long long)arg4 matchIdentifier:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)accessoryCategory;
- (id)accessoryIdentifier;
- (bool)approximatesPercentCharge;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 vendor:(long long)arg2 productIdentifier:(long long)arg3 parts:(unsigned long long)arg4 matchIdentifier:(id)arg5;
- (bool)isBatterySaverModeActive;
- (bool)isCharging;
- (bool)isConnected;
- (bool)isFake;
- (bool)isInternal;
- (bool)isLowBattery;
- (bool)isLowPowerModeActive;
- (bool)isPowerSource;
- (bool)isWirelesslyCharging;
- (id)matchIdentifier;
- (id)modelNumber;
- (id)name;
- (unsigned long long)parts;
- (long long)percentCharge;
- (long long)powerSourceState;
- (long long)productIdentifier;
- (void)setAccessoryCategory:(unsigned long long)arg1;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setApproximatesPercentCharge:(bool)arg1;
- (void)setCharging:(bool)arg1;
- (void)setConnected:(bool)arg1;
- (void)setFake:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternal:(bool)arg1;
- (void)setLowBattery:(bool)arg1;
- (void)setLowPowerModeActive:(bool)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParts:(unsigned long long)arg1;
- (void)setPercentCharge:(long long)arg1;
- (void)setPowerSource:(bool)arg1;
- (void)setPowerSourceState:(long long)arg1;
- (void)setTransportType:(long long)arg1;
- (void)setWirelesslyCharging:(bool)arg1;
- (id)synthesizedRepresentativeDevice;
- (long long)transportType;
- (long long)vendor;

// Image: /System/Library/PrivateFrameworks/BatteryCenterUI.framework/BatteryCenterUI

+ (id)_internalBatteryDeviceGlyphName;
+ (struct CGSize { double x1; double x2; })batteryWidgetGlyphLargestSize;

- (id)batteryWidgetGlyph;
- (id)batteryWidgetGlyphName:(out bool*)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)localizedBatteryDetailTextForBatteryLevel:(double)arg1;

- (bool)sb_supportsDetailedBatteryMetrics;

@end
