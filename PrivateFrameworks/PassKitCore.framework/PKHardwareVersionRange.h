
@interface PKHardwareVersionRange : NSObject <NSCopying, NSSecureCoding> {
    PKDeviceVersionRange * _appletv;
    PKDeviceVersionRange * _ipad;
    PKDeviceVersionRange * _iphone;
    PKDeviceVersionRange * _ipod;
    PKDeviceVersionRange * _vision;
    PKDeviceVersionRange * _watch;
}

@property (nonatomic, readonly) PKDeviceVersionRange *appletv;
@property (nonatomic, readonly) PKDeviceVersionRange *ipad;
@property (nonatomic, readonly) PKDeviceVersionRange *iphone;
@property (nonatomic, readonly) PKDeviceVersionRange *ipod;
@property (nonatomic, readonly) PKDeviceVersionRange *vision;
@property (nonatomic, readonly) PKDeviceVersionRange *watch;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appletv;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)ipad;
- (id)iphone;
- (id)ipod;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHardwareVersionRange:(id)arg1;
- (bool)matchesDeviceVersion:(id)arg1;
- (id)vision;
- (id)watch;

@end
