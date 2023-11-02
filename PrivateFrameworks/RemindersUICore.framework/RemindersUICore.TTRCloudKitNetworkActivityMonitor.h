
@interface RemindersUICore.TTRCloudKitNetworkActivityMonitor : NSObject <REMXPCDaemonControllerCloudKitNetworkActivityDelegate> {
    void delegate;
    void executeToken;
    void queue;
}

- (void).cxx_destruct;
- (void)cloudKitNetworkActivityDidChange:(id)arg1;
- (id)init;

@end
