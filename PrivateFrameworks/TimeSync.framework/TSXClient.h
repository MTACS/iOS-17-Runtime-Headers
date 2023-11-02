
@interface TSXClient : NSObject {
    bool  _invalidated;
    NSXPCConnection * _serverConnection;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)clientProtocol;
+ (id)serverProtocol;
+ (id)serviceName;

- (void).cxx_destruct;
- (void)dealloc;
- (id)exportedObject;
- (id)init;
- (void)interruptedConnection;
- (void)invalidatedConnection;
- (id)serverConnection;

@end
