
@interface SBSystemAperturePortalSourceInfoRequestServer : NSObject <BSServiceConnectionListenerDelegate, SBSSystemAperturePortalSourceInfoRequestClientToServerInterface> {
    BSServiceConnectionListener * _connectionListener;
    SBSPortalSource * _rootSystemApertureWindowPortalSource;
    FBServiceClientAuthenticator * _serviceClientAuthenticator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPortalSource:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (oneway void)rootWindowPortalSourceWithCompletion:(id /* block */)arg1;
- (void)startListener;

@end
