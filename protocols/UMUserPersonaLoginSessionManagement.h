
@protocol UMUserPersonaLoginSessionManagement

@required

- (bool)personaLoginWithUserODuuid:(NSString *)arg1 withUid:(unsigned int)arg2 WithError:(id*)arg3;
- (bool)personaLogoutWithUserODuuid:(NSString *)arg1 withUid:(unsigned int)arg2 WithError:(id*)arg3;

@end
