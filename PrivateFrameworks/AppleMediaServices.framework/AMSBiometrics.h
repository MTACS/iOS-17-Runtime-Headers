
@interface AMSBiometrics : NSObject

+ (id)ACLVersionForAccessControl:(struct __SecAccessControl { }*)arg1;
+ (id)ACLVersionForAccount:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)ACLVersionForConstraints:(id)arg1;
+ (bool)_deleteKeysWithOptions:(id)arg1 error:(id*)arg2;
+ (bool)_shouldAddBiometricHeader;
+ (id)_stateHeaderValueForAccount:(id)arg1;
+ (bool)deleteAllKeysWithError:(id*)arg1;
+ (bool)deleteKeysWithError:(id*)arg1;
+ (long long)deviceState;
+ (id)disableForAccount:(id)arg1;
+ (id)handleResponse:(id)arg1 session:(id)arg2 taskInfo:(id)arg3;
+ (id)headersWithAccount:(id)arg1 options:(id)arg2 signatureResult:(id)arg3;
+ (id)identityMap;
+ (bool)isActionSupported:(long long)arg1 withAccessControl:(struct __SecAccessControl { }*)arg2;
+ (bool)isActionSupported:(long long)arg1 withConstraints:(id)arg2;
+ (bool)isActionSupportedForType:(long long)arg1 account:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (bool)isAvailableForAccount:(id)arg1;
+ (bool)isIdentityMapValid;
+ (id)minimumACLVersionForAction:(long long)arg1;
+ (bool)proxyDeleteAllKeysWithError:(id*)arg1;
+ (id)resumptionHeadersFromRequest:(id)arg1;
+ (void)saveIdentityMap;
+ (void)setDeviceState:(long long)arg1;
+ (id)setState:(long long)arg1 forAccount:(id)arg2;
+ (id)signAndReturnChallenge:(id)arg1 withAccount:(id)arg2 clientInfo:(id)arg3 options:(id)arg4;
+ (id)signChallenge:(id)arg1 withAccount:(id)arg2 clientInfo:(id)arg3 options:(id)arg4;
+ (long long)stateForAccount:(id)arg1;
+ (long long)type;

@end
