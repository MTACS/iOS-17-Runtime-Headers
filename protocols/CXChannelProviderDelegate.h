
@protocol CXChannelProviderDelegate <CXAbstractProviderDelegate>

@optional

- (void)provider:(CXChannelProvider *)arg1 didActivateAudioSession:(AVAudioSession *)arg2;
- (void)provider:(CXChannelProvider *)arg1 didDeactivateAudioSession:(AVAudioSession *)arg2;
- (void)provider:(CXChannelProvider *)arg1 didReceiveChannelPushToken:(NSData *)arg2;
- (void)provider:(CXChannelProvider *)arg1 didReceiveCheckInResult:(long long)arg2 channelUUID:(NSUUID *)arg3;
- (void)provider:(CXChannelProvider *)arg1 didReceivePushPayload:(NSDictionary *)arg2;
- (void)provider:(CXChannelProvider *)arg1 didReceivePushPayload:(NSDictionary *)arg2 channelUUID:(NSUUID *)arg3;
- (void)provider:(void *)arg1 didReceivePushPayload:(void *)arg2 channelUUID:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: CXChannelProvider *, NSDictionary *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, CXParticipant *, void*
- (void)provider:(CXChannelProvider *)arg1 performChannelJoinAction:(CXChannelJoinAction *)arg2;
- (void)provider:(CXChannelProvider *)arg1 performChannelLeaveAction:(CXChannelLeaveAction *)arg2;
- (void)provider:(CXChannelProvider *)arg1 performChannelTransmitStartAction:(CXChannelTransmitStartAction *)arg2;
- (void)provider:(CXChannelProvider *)arg1 performChannelTransmitStopAction:(CXChannelTransmitStopAction *)arg2;

@end
