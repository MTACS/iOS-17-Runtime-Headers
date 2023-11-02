
@interface CSCoreSpeechServicesAccessoryInfo : NSObject <NSCopying, NSSecureCoding> {
    bool  _supportsAlwaysOnAccelerometer;
    bool  _supportsJustSiri;
}

@property (nonatomic) bool supportsAlwaysOnAccelerometer;
@property (nonatomic) bool supportsJustSiri;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setSupportsAlwaysOnAccelerometer:(bool)arg1;
- (void)setSupportsJustSiri:(bool)arg1;
- (bool)supportsAlwaysOnAccelerometer;
- (bool)supportsJustSiri;

@end
