
@interface ASCScreenshotDisplayConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _deviceCornerRadiusFactor;
}

@property (nonatomic, readonly) NSString *cornerCurve;
@property (nonatomic, readonly, copy) NSNumber *deviceCornerRadiusFactor;
@property (nonatomic, readonly) unsigned long long maskedCorners;

+ (id)defaultConfiguration;
+ (double)defaultCornerRadius;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cornerCurve;
- (double)cornerRadiusForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)description;
- (id)deviceCornerRadiusFactor;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceCornerRadiusFactor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maskedCorners;

@end
