
@interface SPBeaconAdvertisement : NSObject <NSSecureCoding> {
    NSData * _address;
    NSData * _batteryState;
    NSData * _deviceType;
    SPEstimatedLocation * _location;
    NSData * _publicKey;
    unsigned char  _rawStatus;
    NSUUID * _recordIdentifier;
    long long  _rssi;
    NSDate * _scanDate;
}

@property (nonatomic, copy) NSData *address;
@property (nonatomic, copy) NSData *batteryState;
@property (nonatomic, copy) NSData *deviceType;
@property (nonatomic, copy) SPEstimatedLocation *location;
@property (nonatomic, copy) NSData *publicKey;
@property (nonatomic) unsigned char rawStatus;
@property (nonatomic, copy) NSUUID *recordIdentifier;
@property (nonatomic) long long rssi;
@property (nonatomic, copy) NSDate *scanDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)batteryState;
- (id)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 publicKey:(id)arg2 deviceType:(id)arg3 batteryState:(id)arg4 rawStatus:(unsigned char)arg5 rssi:(long long)arg6 scanDate:(id)arg7 recordIdentifier:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (id)publicKey;
- (unsigned char)rawStatus;
- (id)recordIdentifier;
- (long long)rssi;
- (id)scanDate;
- (void)setAddress:(id)arg1;
- (void)setBatteryState:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setRawStatus:(unsigned char)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setRssi:(long long)arg1;
- (void)setScanDate:(id)arg1;

@end
