
@interface AWDLServiceDiscoveryManager : NSObject <AWDLServiceDiscoveryManagerXPCDelegate> {
    NSMutableArray * _activeTrafficRegistrations;
    bool  _attemptedReconnect;
    NSLock * _lock;
    int  _notifyToken;
    long long  _suspendCount;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_destroyConnection;
- (void)_removeFirstTrafficRegistrationMatching:(id)arg1;
- (bool)_requiresConnection;
- (void)_retryConnection;
- (bool)_usingAWDLDiscoveryManagerProxy:(id /* block */)arg1 onSuccess:(id /* block */)arg2 error:(id*)arg3;
- (bool)clearTrafficRegistration:(id)arg1 error:(id*)arg2;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)init;
- (void)invalidatedActiveTrafficRegistration:(id)arg1;
- (bool)queryAirPlayConnectivityWithConfiguration:(id)arg1 error:(id*)arg2;
- (bool)resumeAWDLWithError:(id*)arg1;
- (bool)setTrafficRegistration:(id)arg1 error:(id*)arg2;
- (bool)suspendAWDLWithError:(id*)arg1;

@end
