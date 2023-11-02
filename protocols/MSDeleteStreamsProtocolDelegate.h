
@protocol MSDeleteStreamsProtocolDelegate <MSStreamsProtocolDelegate>

@required

- (void)deleteProtocol:(MSDeleteStreamsProtocol *)arg1 didFinishSuccessfulCollections:(NSArray *)arg2 failedCollections:(NSArray *)arg3 error:(NSError *)arg4;
- (void)deleteProtocol:(MSDeleteStreamsProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;

@end
