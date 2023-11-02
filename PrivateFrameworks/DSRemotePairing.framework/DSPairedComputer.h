
@interface DSPairedComputer : NSObject {
    NSDate * _datePaired;
    NSString * _deviceName;
    NSString * _lockdownFrameworkIdentifier;
    NSString * _lockdownFrameworkKey;
    NSString * _marketingName;
    NSString * _remotePairingFrameworkIdentifier;
    NSString * _serialNumber;
}

@property (nonatomic, copy) NSDate *datePaired;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSString *lockdownFrameworkIdentifier;
@property (nonatomic, copy) NSString *lockdownFrameworkKey;
@property (nonatomic, copy) NSString *marketingName;
@property (nonatomic, copy) NSString *remotePairingFrameworkIdentifier;
@property (nonatomic, copy) NSString *serialNumber;

- (void).cxx_destruct;
- (id)datePaired;
- (id)deviceName;
- (unsigned long long)hash;
- (id)initWithDeviceName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lockdownFrameworkIdentifier;
- (id)lockdownFrameworkKey;
- (id)marketingName;
- (id)remotePairingFrameworkIdentifier;
- (id)serialNumber;
- (void)setDatePaired:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setLockdownFrameworkIdentifier:(id)arg1;
- (void)setLockdownFrameworkKey:(id)arg1;
- (void)setMarketingName:(id)arg1;
- (void)setRemotePairingFrameworkIdentifier:(id)arg1;
- (void)setSerialNumber:(id)arg1;

@end
