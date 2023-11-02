
@protocol HMDSecureRemoteSessionDelegate <NSObject>

@required

- (void)secureRemoteSession:(id <HMDSecureRemoteSession>)arg1 receivedRequestToSendMessage:(HMFMessage *)arg2;

@optional

- (void)secureRemoteSession:(id <HMDSecureRemoteSession>)arg1 didCloseWithError:(NSError *)arg2;

@end
