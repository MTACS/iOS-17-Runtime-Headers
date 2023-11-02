
@interface DNDMutableModeConfiguration : DNDModeConfiguration

@property (getter=isAutomaticallyGenerated, nonatomic) bool automaticallyGenerated;
@property (nonatomic) long long compatibilityVersion;
@property (nonatomic, copy) DNDConfiguration *configuration;
@property (nonatomic, copy) NSDate *created;
@property (nonatomic) unsigned long long dimsLockScreen;
@property (nonatomic) unsigned long long impactsAvailability;
@property (nonatomic, copy) NSDate *lastModified;
@property (nonatomic, copy) NSString *lastModifiedByDeviceID;
@property (nonatomic) struct { long long x1; long long x2; long long x3; } lastModifiedByVersion;
@property (nonatomic, copy) DNDMode *mode;
@property (nonatomic, copy) NSArray *triggers;

- (void)_configurationWasModified;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAutomaticallyGenerated:(bool)arg1;
- (void)setCompatibilityVersion:(long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setDimsLockScreen:(unsigned long long)arg1;
- (void)setImpactsAvailability:(unsigned long long)arg1;
- (void)setLastModified:(id)arg1;
- (void)setLastModifiedByDeviceID:(id)arg1;
- (void)setLastModifiedByVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)setMode:(id)arg1;
- (void)setTriggers:(id)arg1;

@end
