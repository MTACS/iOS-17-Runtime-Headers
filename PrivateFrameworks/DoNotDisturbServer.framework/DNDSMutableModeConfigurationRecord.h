
@interface DNDSMutableModeConfigurationRecord : DNDSModeConfigurationRecord

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAutomaticallyGenerated:(bool)arg1;
- (void)setCompatibilityVersion:(long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setDimsLockScreen:(unsigned long long)arg1;
- (void)setEphemeralResolvedCompatibilityVersion:(long long)arg1;
- (void)setHasSecureData:(bool)arg1;
- (void)setImpactsAvailability:(unsigned long long)arg1;
- (void)setLastModified:(id)arg1;
- (void)setLastModifiedByDeviceID:(id)arg1;
- (void)setLastModifiedByVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)setMode:(id)arg1;
- (void)setSecureConfiguration:(id)arg1;
- (void)setTriggers:(id)arg1;

@end
