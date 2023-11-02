
@interface HMDNaturalLightingCurve : HMFObject <HMFLogging, NSCopying, NSSecureCoding> {
    unsigned long long  _colorTemperatureNotifyIntervalThresholdInMilliseconds;
    unsigned long long  _colorTemperatureNotifyValueChangeThreshold;
    unsigned long long  _colorTemperatureUpdateIntervalInMilliseconds;
    long long  _maximumBrightness;
    long long  _maximumColorTemperature;
    long long  _minimumBrightness;
    long long  _minimumColorTemperature;
    NSArray * _transitionPoints;
    unsigned long long  _version;
}

@property (readonly) unsigned long long checksum;
@property unsigned long long colorTemperatureNotifyIntervalThresholdInMilliseconds;
@property unsigned long long colorTemperatureNotifyValueChangeThreshold;
@property unsigned long long colorTemperatureUpdateIntervalInMilliseconds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long maximumBrightness;
@property (readonly) long long maximumColorTemperature;
@property (readonly) long long minimumBrightness;
@property (readonly) long long minimumColorTemperature;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *transitionPoints;
@property (readonly) unsigned long long version;

+ (long long)colorTemperatureMiredsFromKelvins:(long long)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)checksum;
- (id)colorTemperatureForBrightness:(long long)arg1 millisecondsElapsedSinceStartOfDay:(unsigned long long)arg2;
- (unsigned long long)colorTemperatureNotifyIntervalThresholdInMilliseconds;
- (unsigned long long)colorTemperatureNotifyValueChangeThreshold;
- (unsigned long long)colorTemperatureUpdateIntervalInMilliseconds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurve:(id)arg1 minimumColorTemperature:(long long)arg2 maximumColorTemperature:(long long)arg3;
- (id)initWithVersion:(unsigned long long)arg1 transitionPoints:(id)arg2 minimumBrightness:(long long)arg3 maximumBrightness:(long long)arg4 minimumColorTemperature:(long long)arg5 maximumColorTemperature:(long long)arg6;
- (bool)isEqual:(id)arg1;
- (long long)maximumBrightness;
- (long long)maximumColorTemperature;
- (long long)minimumBrightness;
- (long long)minimumColorTemperature;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setColorTemperatureNotifyIntervalThresholdInMilliseconds:(unsigned long long)arg1;
- (void)setColorTemperatureNotifyValueChangeThreshold:(unsigned long long)arg1;
- (void)setColorTemperatureUpdateIntervalInMilliseconds:(unsigned long long)arg1;
- (id)transitionPoints;
- (id)transitionPointsWithmillisecondsElapsedSinceStartOfDay:(unsigned long long)arg1;
- (unsigned long long)version;

@end
