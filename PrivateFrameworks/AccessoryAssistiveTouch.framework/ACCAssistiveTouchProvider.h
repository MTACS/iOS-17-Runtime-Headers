
@interface ACCAssistiveTouchProvider : NSObject {
    NSMutableDictionary * _accessories;
    bool  _cachedState;
    <ACCAssistiveTouchProviderProtocol> * _delegate;
    NSString * _providerUID;
    <ACCAssistiveTouchXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
}

@property (nonatomic, retain) NSMutableDictionary *accessories;
@property (nonatomic) bool cachedState;
@property (nonatomic, retain) <ACCAssistiveTouchProviderProtocol> *delegate;
@property (nonatomic, retain) NSString *providerUID;
@property (nonatomic, retain) <ACCAssistiveTouchXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;

- (void).cxx_destruct;
- (id)accessories;
- (void)accessoryAssistiveTouchAttached:(id)arg1;
- (void)accessoryAssistiveTouchDetachAll;
- (void)accessoryAssistiveTouchDetached:(id)arg1;
- (bool)cachedState;
- (bool)calculateDesiredState:(id)arg1;
- (void)connectToServer;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 initialState:(bool)arg2;
- (void)notifyAssistiveTouchEnabledState:(bool)arg1;
- (id)providerUID;
- (id)remoteObject;
- (void)requestState:(id)arg1;
- (id)serverConnection;
- (void)setAccessories:(id)arg1;
- (void)setCachedState:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(id)arg1 flag:(bool)arg2;
- (void)setProviderUID:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;

@end
