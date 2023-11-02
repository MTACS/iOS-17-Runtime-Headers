
@interface PUEditingExtensionUndoProxyHostSide : NSObject <NSXPCListenerDelegate, PUEditingExtensionUndoButtonHost, PUEditingExtensionUndoTarget> {
    NSXPCConnection * _connection;
    NSXPCListener * _listener;
    <PUEditingExtensionUndoButtonHost> * _target;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) Class superclass;
@property (nonatomic) <PUEditingExtensionUndoButtonHost> *target;

- (void).cxx_destruct;
- (id)connection;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (void)performRedo;
- (void)performUndo;
- (id)remoteObject;
- (void)setConnection:(id)arg1;
- (void)setShowUndoRedo:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)setUndoEnabled:(bool)arg1 redoEnabled:(bool)arg2;
- (id)target;

@end
