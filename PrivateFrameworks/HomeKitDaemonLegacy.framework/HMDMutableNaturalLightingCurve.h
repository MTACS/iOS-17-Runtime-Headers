
@interface HMDMutableNaturalLightingCurve : HMDNaturalLightingCurve

@property unsigned long long colorTemperatureNotifyIntervalThresholdInMilliseconds;
@property unsigned long long colorTemperatureNotifyValueChangeThreshold;
@property unsigned long long colorTemperatureUpdateIntervalInMilliseconds;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
