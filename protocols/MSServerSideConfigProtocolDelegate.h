
@protocol MSServerSideConfigProtocolDelegate <NSObject>

@required

- (void)serverSideConfigProtocol:(MSServerSideConfigProtocol *)arg1 didFinishWithConfiguration:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)serverSideConfigProtocol:(MSServerSideConfigProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;

@end
