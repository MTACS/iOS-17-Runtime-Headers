
@protocol ATXActionSearchResultExecutionDelegate <NSObject>

@optional

- (void)actionSearchResultExecution:(ATXActionSearchResultExecution *)arg1 didDismissRemoteAlertWithReason:(long long)arg2 actionCompleted:(bool)arg3 withResult:(long long)arg4 shouldClearAction:(bool)arg5;

@end
