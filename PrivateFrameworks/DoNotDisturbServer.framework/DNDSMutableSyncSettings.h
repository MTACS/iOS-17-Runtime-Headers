
@interface DNDSMutableSyncSettings : DNDSSyncSettings

@property (getter=isCloudSyncEnabled, nonatomic) bool cloudSyncEnabled;
@property (getter=isPairSyncEnabled, nonatomic) bool pairSyncEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCloudSyncEnabled:(bool)arg1;
- (void)setPairSyncEnabled:(bool)arg1;

@end
