
@interface TKLocalSEPKey : TKSEPKey {
    NSXPCConnection * _caller;
    NSString * _callerName;
    id  _sac;
}

@property (nonatomic, readonly) NSXPCConnection *caller;
@property (nonatomic, readonly) NSString *callerName;
@property (nonatomic, retain) id sac;

+ (id)_testing_callerEntitlements;
+ (id)_testing_keybagHandle;
+ (bool)hasSEP;
+ (bool)isDaytona;
+ (bool)isGibraltar;
+ (int)keyClassForProtection:(id)arg1;
+ (int)keybagHandleForceSystemSession:(bool)arg1;
+ (id)protectionForKeyClass:(int)arg1;
+ (void)setContextErrorHandler:(id /* block */)arg1;
+ (void)set_testing_callerEntitlements:(id)arg1;
+ (void)set_testing_keybagHandle:(id)arg1;
+ (void)setupKeybagForTesting:(bool)arg1;

- (void).cxx_destruct;
- (id)_initWithAuthContext:(id)arg1 caller:(id)arg2;
- (id)_initWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl { }*)arg3 options:(id)arg4 authContext:(id)arg5 caller:(id)arg6 forceSystemSession:(bool)arg7 error:(id*)arg8;
- (id)_initWithObjectID:(id)arg1 authContext:(id)arg2 caller:(id)arg3 forceSystemSession:(bool)arg4 error:(id*)arg5;
- (struct __SecAccessControl { }*)accessControl;
- (id)authContextWithError:(id*)arg1;
- (id)caller;
- (bool)callerHasEntitlement:(id)arg1 error:(id*)arg2;
- (id)callerName;
- (id)encodedAccessGroups;
- (bool)error:(id*)arg1 withAKSReturn:(int)arg2 ACMHandle:(id)arg3 AKSOperation:(id)arg4 params:(id)arg5 message:(id)arg6;
- (bool)evaluateRequirementIgnoringAccessGroups:(struct __ACMRequirement { }*)arg1;
- (id)parametersWithACMHandle:(id)arg1;
- (void)processAccessGroupsOfACLDictionary:(id)arg1 intoGroups:(id)arg2 callerGroups:(id)arg3;
- (id)sac;
- (void)setSac:(id)arg1;
- (bool)systemKey;
- (id)valueForEntitlement:(id)arg1;

@end
