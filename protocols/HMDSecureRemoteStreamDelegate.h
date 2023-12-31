
@protocol HMDSecureRemoteStreamDelegate <HMFMessageTransportDelegate>

@required

- (void)secureRemoteStream:(HMDSecureRemoteStream *)arg1 receivedRequestToSendMessage:(HMFMessage *)arg2;

@optional

- (void)secureRemoteStream:(HMDSecureRemoteStream *)arg1 didCloseWithError:(NSError *)arg2;
- (void)secureRemoteStreamIsIdle:(HMDSecureRemoteStream *)arg1;

@end
