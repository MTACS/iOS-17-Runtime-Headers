
@interface DNDSMutableGlobalConfiguration : DNDSGlobalConfiguration

@property (getter=isAutomaticallyGenerated, nonatomic) bool automaticallyGenerated;
@property (nonatomic, copy) DNDBypassSettings *bypassSettings;
@property (nonatomic, copy) NSDate *lastModified;
@property (nonatomic) unsigned long long modesCanImpactAvailability;
@property (nonatomic) unsigned long long preventAutoReply;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAutomaticallyGenerated:(bool)arg1;
- (void)setBypassSettings:(id)arg1;
- (void)setLastModified:(id)arg1;
- (void)setModesCanImpactAvailability:(unsigned long long)arg1;
- (void)setPreventAutoReply:(unsigned long long)arg1;

@end
