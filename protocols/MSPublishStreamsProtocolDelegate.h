
@protocol MSPublishStreamsProtocolDelegate <MSStreamsProtocolDelegate>

@required

- (void)publishStreamsProtocol:(MSPublishStreamsProtocol *)arg1 didFinishSendingUploadCompleteError:(NSError *)arg2;
- (void)publishStreamsProtocol:(MSPublishStreamsProtocol *)arg1 didFinishUploadingMetadataResponse:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)publishStreamsProtocol:(MSPublishStreamsProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;

@end
