
@interface SOUtils : NSObject

+ (bool)auditTokenFromData:(id)arg1 auditToken:(struct { unsigned int x1[8]; }*)arg2;
+ (id)bundleIdentifierFromAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (bool)checkEntitlementFromXPC:(id)arg1 entitlement:(id)arg2;
+ (bool)checkSignatureOfFile:(id)arg1 teamIdentifier:(id*)arg2 trusted:(bool*)arg3 signedBySet:(long long*)arg4 certificates:(id*)arg5 error:(id*)arg6;
+ (id)currentProcessContainerPath;
+ (bool)currentProcessIsSandboxed;
+ (id)currentProcessName;
+ (bool)isAppSSOServiceAvailable;
+ (bool)isInternalBuild;
+ (id)mapArray:(id)arg1 usingBlock:(id /* block */)arg2;
+ (int)mmapFile:(id)arg1 mode:(long long)arg2 mmapData:(id*)arg3;
+ (int)pidFromAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)processNameForPID:(int)arg1;
+ (bool)sandboxAllowsXPC:(const char *)arg1;
+ (id)signatureSetToString:(long long)arg1;
+ (id)teamIdentifierFromAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (void)unmapFile:(int)arg1 data:(id)arg2;

@end
