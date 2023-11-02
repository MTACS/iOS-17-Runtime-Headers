
@interface NFAccessoryHardwareManager : NSObject <NSXPCConnectionDelegate> {
    NSXPCConnection * _connection;
    unsigned int  _hwSupport;
    unsigned long long  _refCount;
    NSMutableSet * _sessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedHardwareManager;

- (void).cxx_destruct;
- (void)_cleanupSessions;
- (void)_connectIfNeeded;
- (id)clearMultiTagState;
- (bool)connect;
- (void)dealloc;
- (void)didInterruptXPCConnection:(id)arg1;
- (void)didInvalidateXPCConnection:(id)arg1;
- (void)disconnect;
- (id)enableLPCD:(bool)arg1;
- (id)enableMultiTag:(bool)arg1;
- (id)getDieId:(id*)arg1;
- (unsigned int)getHwSupport:(bool)arg1 error:(id*)arg2;
- (id)getInfo;
- (id)getLastDetectedTags:(id*)arg1;
- (id)getMultiTagState:(id*)arg1;
- (id)getPowerCounters:(id*)arg1;
- (id)getRfSettings:(id*)arg1;
- (id)init;
- (id)pushSignedRF:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)sessionDidEnd:(id)arg1;
- (bool)shutdownAndLeaveHWEnabled:(bool)arg1;
- (id)startReaderSession:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)triggerDelayedWake:(unsigned char)arg1;
- (id)updateHWSupport:(bool)arg1;

@end
