
@interface NIServerConnection : NSObject {
    NSXPCConnection * _connection;
    id  _exportedObject;
    NSObject<OS_os_log> * _log;
    unsigned long long  _options;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _sessionID;
}

@property (retain) id exportedObject;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) NSUUID *sessionID;

+ (bool)_internalBuildShouldDenyConnection;
+ (id)createOneShotConnectionAndResume:(bool)arg1;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditTokenForConnection;
- (void)dealloc;
- (id)exportedObject;
- (id)initWithSessionID:(id)arg1 queue:(id)arg2 exportedObject:(id)arg3 options:(unsigned long long)arg4;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)remoteObjectProxy;
- (void)resume;
- (id)sessionID;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxy;

@end
