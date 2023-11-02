
@interface HMDNaturalLightingContext : HMFObject <HMFLogging, NSCopying, NSSecureCoding> {
    HMDNaturalLightingCurve * _curve;
    NSTimeZone * _timeZone;
}

@property (readonly, copy) HMDNaturalLightingCurve *curve;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSTimeZone *timeZone;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curve;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurve:(id)arg1 timeZone:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)timeZone;

@end
