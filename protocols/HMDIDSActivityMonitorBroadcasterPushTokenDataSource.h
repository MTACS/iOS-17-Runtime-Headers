
@protocol HMDIDSActivityMonitorBroadcasterPushTokenDataSource <NSObject>

@required

- (<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> *)delegate;
- (void)pushTokensForDevicesObservingSubjectDevice:(void *)arg1 subActivity:(void *)arg2 queue:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: HMDDevice *, NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setDelegate:(id <HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate>)arg1;

@end
