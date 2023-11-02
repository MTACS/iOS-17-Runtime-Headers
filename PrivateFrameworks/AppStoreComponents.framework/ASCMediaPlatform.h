
@interface ASCMediaPlatform : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _deviceCornerRadiusFactor;
}

@property (nonatomic, readonly, copy) NSNumber *deviceCornerRadiusFactor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceCornerRadiusFactor;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceCornerRadiusFactor:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
