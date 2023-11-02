
@protocol HMDSiriEndpointProfilesMessengerFactory <NSObject>

@required

- (HMDSiriEndpointProfilesMessenger *)createSiriEndpointProfilesMessengerWithMessageTargetUUID:(NSUUID *)arg1 messageDispatcher:(HMFMessageDispatcher *)arg2 messageRouter:(id <HMDMessageRouter>)arg3 messageHandler:(HMDSiriEndpointProfileMessageHandler *)arg4;

@end
