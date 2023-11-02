
@interface UVBSConnection : NSObject <UVBSClientConnection, UVBSServerConnection> {
    UVObjCSingleFireEvent * _activationEvent;
    int  _clientPid;
    UVObjCSingleFireEvent * _invalidationEvent;
    int  _serverPid;
    BSServiceConnection * _serviceConnection;
}

@property (readonly) int clientPid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) int serverPid;
@property (readonly) Class superclass;

+ (id)_connectionError:(id)arg1;
+ (id)_machLookupError:(id)arg1;
+ (id)createWithEndpoint:(id)arg1 clientContextBuilder:(id /* block */)arg2 error:(id*)arg3;
+ (id)createWithMachName:(id)arg1 service:(id)arg2 instance:(id)arg3 clientContextBuilder:(id /* block */)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (void)_didActivate;
- (void)_didInvalidate;
- (void)activateWithInterface:(id)arg1 serviceQuality:(id)arg2 interfaceTarget:(id)arg3;
- (int)clientPid;
- (void)dealloc;
- (id)initWithServiceConnection:(id)arg1;
- (id)initWithServiceConnection:(id)arg1 context:(id)arg2;
- (void)initializeWithClientContext:(id)arg1;
- (void)invalidate;
- (void)onActivation:(id /* block */)arg1;
- (void)onInvalidation:(id /* block */)arg1;
- (id)remoteTarget;
- (id)remoteTarget:(id*)arg1;
- (int)serverPid;

@end
