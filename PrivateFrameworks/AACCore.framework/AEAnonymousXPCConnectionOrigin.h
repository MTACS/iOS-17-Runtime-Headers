
@interface AEAnonymousXPCConnectionOrigin : NSObject <AEXPCConnectionOrigin> {
    NSXPCListenerEndpoint * _endpoint;
}

- (void).cxx_destruct;
- (id)makeConnection;

@end
