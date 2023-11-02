
@interface PUEditingExtensionUndoProxyExtensionSide : NSObject <PUEditingExtensionUndoButtonHost> {
    NSXPCConnection * _connection;
    <PUEditingExtensionUndoTarget> * _target;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <PUEditingExtensionUndoTarget> *target;

- (void).cxx_destruct;
- (id)connection;
- (id)initWithEndpoint:(id)arg1;
- (void)performRedo;
- (void)performUndo;
- (id)remoteObject;
- (void)setShowUndoRedo:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)setUndoEnabled:(bool)arg1 redoEnabled:(bool)arg2;
- (id)target;

@end
