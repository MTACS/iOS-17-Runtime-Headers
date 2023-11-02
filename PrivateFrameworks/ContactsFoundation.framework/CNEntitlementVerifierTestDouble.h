
@interface CNEntitlementVerifierTestDouble : NSObject <CNEntitlementVerification> {
    NSMutableDictionary * _entitlements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyForEntitlement:(id)arg1;
+ (id)keyForEntitlement:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;

- (void).cxx_destruct;
- (bool)auditToken:(struct { unsigned int x1[8]; })arg1 hasArrayWithStringValue:(id)arg2 forAnyEntitlement:(id)arg3 error:(id*)arg4;
- (bool)auditToken:(struct { unsigned int x1[8]; })arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3;
- (bool)auditToken:(struct { unsigned int x1[8]; })arg1 isFirstOrSecondPartyWithError:(id*)arg2;
- (bool)booleanResultForKey:(id)arg1 error:(id*)arg2;
- (bool)currentProcessHasArrayWithStringValue:(id)arg1 forAnyEntitlement:(id)arg2 error:(id*)arg3;
- (bool)currentProcessHasBooleanEntitlement:(id)arg1 error:(id*)arg2;
- (bool)currentProcessIsFirstOrSecondPartyWithError:(id*)arg1;
- (id)init;
- (void)setAuditToken:(struct { unsigned int x1[8]; })arg1 hasError:(id)arg2 forEntitlement:(id)arg3;
- (void)setAuditToken:(struct { unsigned int x1[8]; })arg1 hasValue:(id)arg2 forEntitlement:(id)arg3;
- (void)setAuditToken:(struct { unsigned int x1[8]; })arg1 isFirstOrSecondParty:(bool)arg2;
- (void)setAuditToken:(struct { unsigned int x1[8]; })arg1 isFirstOrSecondPartyError:(id)arg2;
- (void)setCurrentProcessHasError:(id)arg1 forEntitlement:(id)arg2;
- (void)setCurrentProcessHasValue:(id)arg1 forEntitlement:(id)arg2;
- (id)stringArrayResultForKey:(id)arg1 error:(id*)arg2;
- (id)valueForEntitlementForKey:(id)arg1 error:(id*)arg2;
- (id)valuesForAuditToken:(struct { unsigned int x1[8]; })arg1 forEntitlements:(id)arg2 error:(id*)arg3;
- (id)valuesForCurrentProcessForEntitlements:(id)arg1 error:(id*)arg2;

@end
