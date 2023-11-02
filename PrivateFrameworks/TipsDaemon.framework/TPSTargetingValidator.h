
@interface TPSTargetingValidator : NSObject

+ (void)_validateCondition:(id)arg1 joinType:(long long)arg2 context:(id)arg3 cache:(id)arg4 completionQueue:(id)arg5 completionHandler:(id /* block */)arg6;
+ (void)validateConditions:(id)arg1 joinType:(long long)arg2 context:(id)arg3 cache:(id)arg4 completionQueue:(id)arg5 completionHandler:(id /* block */)arg6;
+ (bool)validateConditions:(id)arg1 joinType:(long long)arg2 context:(id)arg3 cache:(id)arg4 completionQueue:(id)arg5 error:(id*)arg6;

@end
