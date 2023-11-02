
@interface CNEntitlementVerifier : NSObject <CNEntitlementVerification>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)auditToken:(struct { unsigned int x1[8]; })arg1 hasArrayWithStringValue:(id)arg2 forAnyEntitlement:(id)arg3 error:(id*)arg4;
- (bool)auditToken:(struct { unsigned int x1[8]; })arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3;
- (bool)auditToken:(struct { unsigned int x1[8]; })arg1 isFirstOrSecondPartyWithError:(id*)arg2;
- (bool)currentProcessHasArrayWithStringValue:(id)arg1 forAnyEntitlement:(id)arg2 error:(id*)arg3;
- (bool)currentProcessHasBooleanEntitlement:(id)arg1 error:(id*)arg2;
- (bool)currentProcessIsFirstOrSecondPartyWithError:(id*)arg1;
- (bool)secTask:(struct __SecTask { }*)arg1 hasArrayWithStringValue:(id)arg2 forAnyEntitlement:(id)arg3 error:(id*)arg4;
- (bool)secTask:(struct __SecTask { }*)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3;
- (bool)secTask:(struct __SecTask { }*)arg1 isFirstOrSecondPartyWithError:(id*)arg2;
- (id)secTask:(struct __SecTask { }*)arg1 valuesForEntitlements:(id)arg2 error:(id*)arg3;
- (id)valuesForAuditToken:(struct { unsigned int x1[8]; })arg1 forEntitlements:(id)arg2 error:(id*)arg3;
- (id)valuesForCurrentProcessForEntitlements:(id)arg1 error:(id*)arg2;

@end
