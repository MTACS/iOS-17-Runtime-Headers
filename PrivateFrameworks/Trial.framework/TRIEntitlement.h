
@interface TRIEntitlement : NSObject

+ (bool)_isValidFormatForTeamId:(id)arg1;
+ (id)_teamIdFromSecTaskWithAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)applicationBundleIdentifierFromSelf;
+ (id)applicationBundleIdentifierWithAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)codeSignIdentifierWithAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)entitlementKeyForApplicationBundleIdentifier;
+ (bool)isEntitledToApplicationGroup:(id)arg1 withAuditToken:(struct { unsigned int x1[8]; })arg2;
+ (id)objectForCurrentProcessEntitlement:(id)arg1;
+ (id)objectForEntitlement:(id)arg1 withAuditToken:(struct { unsigned int x1[8]; })arg2;
+ (id)stringForCurrentProcessEntitlement:(id)arg1;
+ (id)stringForEntitlement:(id)arg1 fromSecTask:(struct __SecTask { }*)arg2;
+ (id)stringForEntitlement:(id)arg1 withAuditToken:(struct { unsigned int x1[8]; })arg2;
+ (id)teamIdWithAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)valueForEntitlement:(id)arg1 fromSecTask:(struct __SecTask { }*)arg2 ofType:(unsigned long long*)arg3;

@end
