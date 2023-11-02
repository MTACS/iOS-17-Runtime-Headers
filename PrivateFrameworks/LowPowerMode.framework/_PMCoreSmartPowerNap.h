
@interface _PMCoreSmartPowerNap : NSObject <_PMCoreSmartPowerNapCallbackProtocol, _PMCoreSmartPowerNapProtocol> {
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _callback_queue;
    NSXPCConnection * _connection;
    bool  _connection_interrupted;
    unsigned char  _current_state;
    NSString * _identifier;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callback_queue;
@property (nonatomic, retain) NSXPCConnection *connection;
@property bool connection_interrupted;
@property (nonatomic) unsigned char current_state;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)callback_queue;
- (id)connection;
- (bool)connection_interrupted;
- (unsigned char)current_state;
- (id)identifier;
- (id)init;
- (void)reRegister;
- (void)registerWithCallback:(id)arg1 callback:(id /* block */)arg2;
- (void)registerWithIdentifier:(id)arg1;
- (void)setCSPNIgnoreRemoteClient:(unsigned int)arg1;
- (void)setCSPNMotionAlarmStartThreshold:(unsigned int)arg1;
- (void)setCSPNMotionAlarmThreshold:(unsigned int)arg1;
- (void)setCSPNQueryDelta:(unsigned int)arg1;
- (void)setCSPNRequeryDelta:(unsigned int)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setCallback_queue:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnection_interrupted:(bool)arg1;
- (void)setCurrent_state:(unsigned char)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setState:(unsigned char)arg1;
- (unsigned char)state;
- (unsigned char)syncState;
- (void)syncStateWithHandler:(id /* block */)arg1;
- (void)unregister;
- (void)unregisterWithIdentifier:(id)arg1;
- (void)updateState:(unsigned char)arg1;

@end
