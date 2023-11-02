
@protocol EDProtectedDataReconciliationHookResponder <NSObject>

@optional

- (void)persistenceDidReconcileProtectedData;
- (void)persistenceWillReplaceDatabaseID:(long long)arg1 with:(long long)arg2 forTable:(NSString *)arg3 column:(NSString *)arg4;

@end
