
@interface ELSEntitlementUtilities : NSObject

+ (void)assertCurrentProcessHasEntitlement;
+ (bool)auditToken:(struct { unsigned int x1[8]; }*)arg1 hasEntitlement:(id)arg2;
+ (bool)currentProcessHasEntitlement:(id)arg1;
+ (id)entitlementMissingMessage;

@end
