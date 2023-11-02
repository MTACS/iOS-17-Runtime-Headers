
@protocol HMDSoftwareUpdateDataSource <NSObject>

@required

- (NSNotificationCenter *)notificationCenterForSoftwareUpdate:(HMDSoftwareUpdate *)arg1;
- (void)notifyClientsOfConfigurationChangeWithReason:(NSString *)arg1 source:(NSString *)arg2 shouldFetch:(bool)arg3;

@end
