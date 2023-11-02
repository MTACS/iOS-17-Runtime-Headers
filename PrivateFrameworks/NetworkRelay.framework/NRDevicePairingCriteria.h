
@interface NRDevicePairingCriteria : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _deviceType;
    unsigned char  _pairingTransport;
    NSNumber * _rssi;
}

@property (nonatomic) unsigned long long deviceType;
@property (nonatomic) unsigned char pairingTransport;
@property (nonatomic, retain) NSNumber *rssi;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned char)pairingTransport;
- (id)rssi;
- (void)setDeviceType:(unsigned long long)arg1;
- (void)setPairingTransport:(unsigned char)arg1;
- (void)setRssi:(id)arg1;

@end
