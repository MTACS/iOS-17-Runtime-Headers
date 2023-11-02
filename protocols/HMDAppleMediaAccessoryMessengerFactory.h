
@protocol HMDAppleMediaAccessoryMessengerFactory <NSObject>

@required

- (HMDAppleMediaAccessoryMessenger *)createAppleMediaAccessoryMessengerWithIdentifier:(NSUUID *)arg1 messageDispatcher:(HMFMessageDispatcher *)arg2 router:(HMDAppleMediaAccessoryMessageRouter *)arg3 localHandler:(HMDAppleMediaAccessoryLocalMessageHandler *)arg4;

@end
