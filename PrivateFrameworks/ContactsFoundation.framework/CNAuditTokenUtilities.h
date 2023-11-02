
@interface CNAuditTokenUtilities : NSObject

+ (id)_bundleIdentifierFromEntitlementForAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)_bundleIdentifierFromInfoPlistForAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)bundleIdentifierForAuditToken:(id)arg1;
+ (id)os_log;
+ (int)processIdentifierForAuditToken:(id)arg1;
+ (id)processNameForAuditToken:(id)arg1;

@end
