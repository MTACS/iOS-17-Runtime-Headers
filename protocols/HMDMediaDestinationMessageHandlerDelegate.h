
@protocol HMDMediaDestinationMessageHandlerDelegate

@required

- (void)mediaDestinationMessageHandler:(HMDMediaDestinationMessageHandler *)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(HMFMessage *)arg2 audioGroupIdentifier:(NSUUID *)arg3;
- (void)mediaDestinationMessageHandler:(HMDMediaDestinationMessageHandler *)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(HMFMessage *)arg2 supportOptions:(unsigned long long)arg3;

@end
