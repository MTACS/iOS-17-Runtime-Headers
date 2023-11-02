
@interface BCSEntitlementVerifier : NSObject <BCSEntitlementVerifying>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)auditToken:(struct { unsigned int x1[8]; }*)arg1 hasEntitlement:(id)arg2;

@end
