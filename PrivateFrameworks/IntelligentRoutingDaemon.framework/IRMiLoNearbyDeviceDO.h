
@interface IRMiLoNearbyDeviceDO : NSObject <NSCopying, NSSecureCoding> {
    NSString * _deviceIdentifier;
    bool  _hasBleRssi;
}

@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) bool hasBleRssi;

+ (id)miLoNearbyDeviceDOWithHasBleRssi:(bool)arg1 deviceIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementDeviceIdentifier:(id)arg1;
- (id)copyWithReplacementHasBleRssi:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBleRssi;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHasBleRssi:(bool)arg1 deviceIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMiLoNearbyDeviceDO:(id)arg1;

@end
