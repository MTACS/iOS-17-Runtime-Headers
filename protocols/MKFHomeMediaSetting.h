
@protocol MKFHomeMediaSetting <MKFHomeSetting, MKFHomeMediaSettingPublicExtensions>

@required

- (MKFHomeMediaSettingDatabaseID *)databaseID;
- (NSString *)mediaPassword;
- (NSNumber *)mediaPeerToPeerEnabled;
- (NSNumber *)minimumMediaUserPrivilege;
- (void)setMediaPassword:(NSString *)arg1;
- (void)setMediaPeerToPeerEnabled:(NSNumber *)arg1;
- (void)setMinimumMediaUserPrivilege:(NSNumber *)arg1;

@end
