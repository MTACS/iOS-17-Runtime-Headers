
@protocol MSResetServerProtocolDelegate <MSStreamsProtocolDelegate>

@required

- (void)resetServerProtocol:(MSResetServerProtocol *)arg1 didFinishWithError:(NSError *)arg2;
- (void)resetServerProtocol:(MSResetServerProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;

@end
