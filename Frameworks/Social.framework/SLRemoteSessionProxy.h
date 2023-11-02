
@interface SLRemoteSessionProxy : NSObject {
    NSXPCConnection * _connection;
    id /* block */  _connectionResetBlock;
    NSXPCInterface * _exportedInterface;
    NSObject * _exportedObject;
    NSMutableArray * _guaranteedRemoteCalls;
    NSLock * _guaranteedRemoteCallsLock;
    NSXPCInterface * _remoteInterface;
    id  _remoteProxy;
    NSString * _serviceName;
}

@property (copy) id /* block */ connectionResetBlock;
@property (retain) NSXPCInterface *exportedInterface;
@property NSObject *exportedObject;

- (void).cxx_destruct;
- (void)_remoteSessionConnectionWasInterrupted;
- (void)_setupConnection;
- (id /* block */)connectionResetBlock;
- (void)dealloc;
- (void)disconnect;
- (void)dropGuaraneteedRemoteCall:(id)arg1;
- (id)exportedInterface;
- (id)exportedObject;
- (void)forwardInvocation:(id)arg1;
- (id)initForRemoteServiceName:(id)arg1 remoteInterface:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)registerGuaranteedRemoteCall:(id)arg1;
- (void)setConnectionResetBlock:(id /* block */)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;

@end
