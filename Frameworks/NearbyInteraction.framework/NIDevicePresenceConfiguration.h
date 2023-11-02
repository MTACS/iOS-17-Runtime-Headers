
@interface NIDevicePresenceConfiguration : NIConfiguration {
    unsigned long long  _allowedDevices;
    NIRegionPredicate * _innerBoundary;
    NSArray * _monitoredRegions;
    unsigned long long  _monitoringOption;
    NIRegionPredicate * _outerBoundary;
    NIDiscoveryToken * _token;
}

@property unsigned long long allowedDevices;
@property (readonly) NIRegionPredicate *innerBoundary;
@property (readonly) NSArray *monitoredRegions;
@property unsigned long long monitoringOption;
@property (readonly) NIRegionPredicate *outerBoundary;
@property (readonly) NIDiscoveryToken *token;

+ (const char *)_NIDevicePresenceMonitoringOptionToString:(unsigned long long)arg1;
+ (float)_radiusFromDevicePresencePreset:(long long)arg1;
+ (bool)_validateRegionIsPreset:(id)arg1;
+ (bool)_validateRegionPredicates:(id)arg1 outer:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)allowedDevices;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDiscoveryToken:(id)arg1 regions:(id)arg2 preferredUpdateRate:(long long)arg3 error:(id*)arg4;
- (id)initWithInnerBoundary:(id)arg1 outerBoundary:(id)arg2 error:(id*)arg3;
- (id)initWithInnerBoundary:(id)arg1 outerBoundary:(id)arg2 monitoringOption:(unsigned long long)arg3 allowedDevices:(unsigned long long)arg4 error:(id*)arg5;
- (id)innerBoundary;
- (bool)isEqual:(id)arg1;
- (id)monitoredRegions;
- (unsigned long long)monitoringOption;
- (id)outerBoundary;
- (void)setAllowedDevices:(unsigned long long)arg1;
- (void)setMonitoringOption:(unsigned long long)arg1;
- (id)token;

@end
