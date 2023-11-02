
@interface TSXAnonymousClient : NSObject {
    bool  _invalidated;
    NSXPCConnection * _serverConnection;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)clientProtocol;
+ (id)serverProtocol;

- (void).cxx_destruct;
- (void)dealloc;
- (id)exportedObject;
- (id)initWithEndpoint:(id)arg1;
- (void)interruptedConnection;
- (void)invalidatedConnection;
- (id)serverConnection;

@end
