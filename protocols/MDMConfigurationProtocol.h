
@protocol MDMConfigurationProtocol

@required

+ (unsigned long long)getManagementStateForMAID;
+ (NSString *)getOrgTokenForMAID:(id*)arg1;
+ (NSData *)getWatchPairingTokenForPhoneID:(NSString *)arg1 watchID:(NSString *)arg2 securityToken:(NSString *)arg3 outError:(id*)arg4;

@end
