
@interface HookLAContext : LAContext <BIOSupport__AutoHook>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)load;
+ (id)targetClasses;

- (bool)hook_canEvaluatePolicy:(long long)arg1 error:(id*)arg2;
- (void)hook_evaluateAccessControl:(struct __SecAccessControl { }*)arg1 operation:(long long)arg2 localizedReason:(id)arg3 reply:(id /* block */)arg4;
- (void)hook_evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(id /* block */)arg3;
- (void)hook_evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(id /* block */)arg3;

@end
