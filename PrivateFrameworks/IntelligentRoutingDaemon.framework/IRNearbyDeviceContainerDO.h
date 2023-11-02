
@interface IRNearbyDeviceContainerDO : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _freezeDateNIHomeDevice;
    NSSet * _nearbyDevices;
}

@property (nonatomic, readonly) NSDate *freezeDateNIHomeDevice;
@property (nonatomic, readonly) NSSet *nearbyDevices;

+ (id)miLoNearbyDeviceDOWithFreezeDateNIHomeDevice:(id)arg1 nearbyDevices:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementFreezeDateNIHomeDevice:(id)arg1;
- (id)copyWithReplacementNearbyDevices:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exportAsArray;
- (id)freezeDateNIHomeDevice;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFreezeDateNIHomeDevice:(id)arg1 nearbyDevices:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMiLoNearbyDeviceDO:(id)arg1;
- (id)nearbyDevices;

@end
