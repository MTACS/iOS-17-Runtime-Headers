
@interface LNExtensionConnectionHandler : NSObject <_EXMainConnectionHandler> {
    LNAppContext * _appContext;
    NSMutableSet * _clientConnections;
    id  _principalObject;
}

@property (nonatomic, retain) LNAppContext *appContext;
@property (nonatomic, readonly) NSMutableSet *clientConnections;
@property (nonatomic, retain) id principalObject;

- (void).cxx_destruct;
- (id)appContext;
- (id)clientConnections;
- (id)init;
- (id)initWithPrincipalObject:(id)arg1;
- (id)principalObject;
- (void)setAppContext:(id)arg1;
- (void)setPrincipalObject:(id)arg1;
- (bool)shouldAcceptXPCConnection:(id)arg1;

@end
