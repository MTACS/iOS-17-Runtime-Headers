
@interface HMDMTSDeviceSetupServer : HMFObject <HMFLogging, MTSXPCDeviceSetupClientProxyDelegate> {
    HMDAccessorySetupManager * _accessorySetupManager;
}

@property (readonly) HMDAccessorySetupManager *accessorySetupManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessorySetupManager;
- (void)clientProxy:(id)arg1 performDeviceSetupUsingRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithAccessorySetupManager:(id)arg1;

@end
