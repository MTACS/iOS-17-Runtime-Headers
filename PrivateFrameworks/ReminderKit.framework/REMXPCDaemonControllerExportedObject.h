
@interface REMXPCDaemonControllerExportedObject : NSObject <REMXPCClient> {
    <REMXPCDaemonControllerCloudKitNetworkActivityDelegate> * _cloudKitNetworkActivityDelegate;
}

@property (nonatomic) <REMXPCDaemonControllerCloudKitNetworkActivityDelegate> *cloudKitNetworkActivityDelegate;

- (void).cxx_destruct;
- (id)cloudKitNetworkActivityDelegate;
- (void)cloudKitNetworkActivityDidUpdate:(id)arg1;
- (void)setCloudKitNetworkActivityDelegate:(id)arg1;

@end
