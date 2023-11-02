
@interface CSBatteryChargingInfo : NSObject {
    bool  _chargingWithInternalWirelessAccessory;
    BCBatteryDevice * _externalBatteryDevice;
    BCBatteryDevice * _internalBatteryDevice;
}

@property (getter=isChargingWithInternalWirelessAccessory, nonatomic) bool chargingWithInternalWirelessAccessory;
@property (nonatomic, retain) BCBatteryDevice *externalBatteryDevice;
@property (nonatomic, retain) BCBatteryDevice *internalBatteryDevice;

- (void).cxx_destruct;
- (id)externalBatteryDevice;
- (id)internalBatteryDevice;
- (bool)isChargingWithInternalWirelessAccessory;
- (void)setChargingWithInternalWirelessAccessory:(bool)arg1;
- (void)setExternalBatteryDevice:(id)arg1;
- (void)setInternalBatteryDevice:(id)arg1;

@end
