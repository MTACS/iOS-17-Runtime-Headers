
@protocol CXChannelPushClientProtocol

@required

- (void)_didReceivePushPayload:(void *)arg1 channelUUID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, CXParticipant *, void*
- (void)_didReceivePushToken:(NSData *)arg1;

@end
