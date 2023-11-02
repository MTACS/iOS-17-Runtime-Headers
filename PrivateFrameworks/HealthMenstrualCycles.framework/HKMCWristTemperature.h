
@interface HKMCWristTemperature : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding> {
    HKQuantity * _quantity;
    NSString * _watchBundleIdentifier;
}

@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly) HKQuantity *quantity;
@property (nonatomic, readonly) NSString *watchBundleIdentifier;

+ (bool)supportsSecureCoding;
+ (id)wristTemperatureFromWristTemperatureSample:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hk_redactedDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuantity:(id)arg1 watchBundleIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)quantity;
- (id)watchBundleIdentifier;

@end
