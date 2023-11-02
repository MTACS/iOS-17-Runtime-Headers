
@protocol ICSharedListeningConnectionClientProtocol <NSObject>

@required

- (void)receiveConnectionError:(NSError *)arg1;
- (void)receiveFatalError:(NSError *)arg1;
- (void)receiveMessageData:(NSData *)arg1;
- (void)receiveStartWithSessionIdentifier:(NSString *)arg1 sessionToken:(NSString *)arg2 inviteURLString:(NSString *)arg3;

@end
