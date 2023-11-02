
@interface PCStatusConditionsImpl : NSObject <APStatusConditions_XPC>

- (id)_setupXPCConnection;
- (void)cleanupExpiredConditionsInBuffer;
- (void)clearStatusCondition:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isConditionRateLimited:(id)arg1 onOperation:(long long)arg2;
- (void)isStatusConditionRegistered:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)operationWithCondition:(id)arg1 forType:(long long)arg2;
- (void)setStatusCondition:(id)arg1 completionHandler:(id /* block */)arg2;

@end
