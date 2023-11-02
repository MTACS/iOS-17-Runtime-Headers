
@interface USUsageMonitor : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)checkStatusOfAllBudgetsWithCompletionHandler:(id /* block */)arg1;
- (void)checkStatusOfBudgets:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)checkStatusOfBudgets:(id)arg1 clientIdentifiers:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)checkStatusOfBudgets:(id)arg1 clientIdentifiers:(id)arg2 error:(id*)arg3;
- (void)checkStatusOfBudgets:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)checkStatusOfBudgets:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)init;
- (void)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 clientIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 error:(id*)arg4;
- (void)stopMonitoringAllBudgetsWithCompletionHandler:(id /* block */)arg1;
- (void)stopMonitoringBudgets:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stopMonitoringBudgets:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)xpcConnection;

@end
