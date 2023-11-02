
@protocol CNEntitlementVerification <NSObject>

@required

- (bool)auditToken:(struct { unsigned int x1[8]; })arg1 hasArrayWithStringValue:(NSString *)arg2 forAnyEntitlement:(NSArray *)arg3 error:(id*)arg4;
- (bool)auditToken:(struct { unsigned int x1[8]; })arg1 hasBooleanEntitlement:(NSString *)arg2 error:(id*)arg3;
- (bool)auditToken:(struct { unsigned int x1[8]; })arg1 isFirstOrSecondPartyWithError:(id*)arg2;
- (bool)currentProcessHasArrayWithStringValue:(NSString *)arg1 forAnyEntitlement:(NSArray *)arg2 error:(id*)arg3;
- (bool)currentProcessHasBooleanEntitlement:(NSString *)arg1 error:(id*)arg2;
- (bool)currentProcessIsFirstOrSecondPartyWithError:(id*)arg1;
- (NSDictionary *)valuesForAuditToken:(struct { unsigned int x1[8]; })arg1 forEntitlements:(NSArray *)arg2 error:(id*)arg3;
- (NSDictionary *)valuesForCurrentProcessForEntitlements:(NSArray *)arg1 error:(id*)arg2;

@end
