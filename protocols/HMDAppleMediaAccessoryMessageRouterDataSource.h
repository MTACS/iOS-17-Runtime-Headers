
@protocol HMDAppleMediaAccessoryMessageRouterDataSource <NSObject>

@required

- (HMDDevice *)deviceForAppleMediaAccessoryMessageRouter:(HMDAppleMediaAccessoryMessageRouter *)arg1 message:(HMFMessage *)arg2;
- (bool)isCurrentDevicePrimaryResident;

@end
