
@interface ACDTestManager : NSObject

@property (nonatomic, readonly) NSXPCListenerEndpoint *remoteAccountStoreEndpoint;
@property (nonatomic, readonly) NSXPCListenerEndpoint *remoteOAuthSignerEndpoint;

+ (id)testServer;

- (id)remoteAccountStoreEndpoint;
- (id)remoteOAuthSignerEndpoint;
- (void)startTestServer;
- (void)stopTestServer;

@end
