
@protocol HMDIDSActivityMonitorObserverRegistrationManager <NSObject>

@required

- (void)startObservingDevice:(HMDDevice *)arg1 subActivity:(NSString *)arg2;
- (void)stopObservingDevice:(HMDDevice *)arg1 subActivity:(NSString *)arg2;

@end
