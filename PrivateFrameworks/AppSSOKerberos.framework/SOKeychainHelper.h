
@interface SOKeychainHelper : NSObject

- (int)addCredentialsToKeychainWithService:(id)arg1 withUsername:(id)arg2 withPassword:(id)arg3 requireUserPresence:(bool)arg4;
- (bool)hasCredentialsInKeychainWithService:(id)arg1;
- (struct __SecIdentity { }*)identityForPersistientRef:(id)arg1;
- (struct __SecIdentity { }*)identityForUUIDString:(id)arg1;
- (int)removeCredentialsFromKeychainWithService:(id)arg1;
- (int)retrieveCredentialsFromKeychainWithContext:(id)arg1 service:(id)arg2 returnedUsername:(id*)arg3 returnedPassword:(id*)arg4;

@end
