
@interface HMDIDSActivityMonitorHomeManagerDataSource : NSObject <HMDIDSActivityMonitorDataSource, HMFLogging> {
    HMDHomeManager * _homeManager;
    <HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)currentDevice;
- (id)delegate;
- (void)handleDeviceAdded:(id)arg1;
- (void)handleDeviceRemoved:(id)arg1;
- (void)handleRegistrationUpdated:(id)arg1;
- (bool)homeHasCamera:(id)arg1;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1;
- (void)pushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)startObservingDevice:(id)arg1 subActivity:(id)arg2;
- (void)startWithNotificationCenter:(id)arg1;
- (void)stopObservingDevice:(id)arg1 subActivity:(id)arg2;

@end
