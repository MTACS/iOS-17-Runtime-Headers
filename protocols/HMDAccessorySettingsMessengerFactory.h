
@protocol HMDAccessorySettingsMessengerFactory <NSObject>

@required

- (HMDAccessorySettingsMessenger *)createAccessorySettingsMessengerWithMessageTargetUUID:(NSUUID *)arg1 messageDispatcher:(HMFMessageDispatcher *)arg2 messageRouter:(id <HMDMessageRouter>)arg3 messageHandler:(HMDAccessorySettingsLocalMessageHandler *)arg4 logEventSubmitter:(id <HMMLogEventSubmitting>)arg5 legacyMessageReceiver:(HMDAccessorySettingsLegacyMessageReceiver *)arg6;

@end
