
@protocol MSReauthorizationProtocolDelegate <MSStreamsProtocolDelegate>

@required

- (void)reauthorizationProtocol:(MSReauthorizationProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;
- (void)reauthorizationProtocol:(MSReauthorizationProtocol *)arg1 reauthorizedAssets:(NSArray *)arg2 rejectedAssets:(NSArray *)arg3 error:(NSError *)arg4;

@end
