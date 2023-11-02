
@interface NIHomeDeviceConfiguration : NIConfiguration {
    unsigned long long  _allowedDevices;
    bool  _anchor;
    long long  _antennaDiversityOverride;
    long long  _minimumPreferredUpdatedRate;
    NSArray * _monitoredRegions;
    NSString * _regionDescription;
    NSData * _sessionKey;
}

@property unsigned long long allowedDevices;
@property (getter=isAnchor) bool anchor;
@property long long antennaDiversityOverride;
@property long long minimumPreferredUpdatedRate;
@property (copy) NSArray *monitoredRegions;
@property (copy) NSData *sessionKey;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateRegionDescription;
- (unsigned long long)allowedDevices;
- (long long)antennaDiversityOverride;
- (bool)canUpdateToConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAllowedDevices:(unsigned long long)arg1 sessionKey:(id)arg2 asAnchor:(bool)arg3 regions:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegions:(id)arg1;
- (bool)isAnchor;
- (bool)isEqual:(id)arg1;
- (long long)minimumPreferredUpdatedRate;
- (id)monitoredRegions;
- (id)sessionKey;
- (void)setAllowedDevices:(unsigned long long)arg1;
- (void)setAnchor:(bool)arg1;
- (void)setAntennaDiversityOverride:(long long)arg1;
- (void)setMinimumPreferredUpdatedRate:(long long)arg1;
- (void)setMonitoredRegions:(id)arg1;
- (void)setSessionKey:(id)arg1;

@end
