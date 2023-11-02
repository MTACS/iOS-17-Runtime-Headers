
@interface PRRemoteDevice : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSData * _btAdvAddress;
    long long  _deviceType;
    NSData * _roseMACAddress;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, copy) NSData *btAdvAddress;
@property (nonatomic) long long deviceType;
@property (nonatomic, copy) NSData *roseMACAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)btAdvAddress;
- (bool)compareField:(id)arg1 to:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBTAdvAddress:(id)arg1;
- (id)initWithBeaconUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompanionUUID:(id)arg1;
- (id)initWithRoseMACAddress:(id)arg1;
- (id)initWithTestCompanionBtAdvAddress:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)roseMACAddress;
- (void)setBtAdvAddress:(id)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setRoseMACAddress:(id)arg1;
- (void)setUUID:(id)arg1;

@end
