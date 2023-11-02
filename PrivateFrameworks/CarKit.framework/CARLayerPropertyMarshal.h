
@interface CARLayerPropertyMarshal : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)_handleConnectionReset;
- (void)_setupConnection;
- (id)connection;
- (id)init;
- (void)invalidate;
- (void)sendLayerProperties:(id)arg1;
- (void)setConnection:(id)arg1;

@end
