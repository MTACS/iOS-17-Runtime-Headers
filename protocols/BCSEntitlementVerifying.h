
@protocol BCSEntitlementVerifying <NSObject>

@required

- (bool)auditToken:(struct { unsigned int x1[8]; }*)arg1 hasEntitlement:(NSString *)arg2;

@end
