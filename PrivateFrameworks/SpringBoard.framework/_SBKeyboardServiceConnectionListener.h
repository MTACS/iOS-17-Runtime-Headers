
@interface _SBKeyboardServiceConnectionListener : NSObject <BSServiceConnectionListenerDelegate, SBSKeyboardFocusServiceClientToServerInterface> {
    NSMapTable * _connectionContextToClientMap;
    BSServiceConnectionListener * _connectionListener;
    <_SBKeyboardServiceConnectionListenerDelegate> * _delegate;
    FBServiceClientAuthenticator * _serviceClientAuthenticator;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SBKeyboardServiceConnectionListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientForConnectionContext:(id)arg1;
- (void)_handleDisconnectForServiceConnection:(id)arg1;
- (void)_removeClientForConnectionContext:(id)arg1;
- (void)activate;
- (oneway void)deferAdditionalEnvironments:(id)arg1 whenSceneHasKeyboardFocus:(id)arg2 pid:(id)arg3;
- (id)delegate;
- (id)initWithServiceQueue:(id)arg1;
- (void)invalidate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (oneway void)removeKeyboardFocusFromSceneIdentity:(id)arg1 pid:(id)arg2;
- (oneway void)requestKeyboardFocusForSceneIdentity:(id)arg1 pid:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (oneway void)setExternalSceneIdentities:(id)arg1;
- (oneway void)stopApplyingAdditionalDeferringRulesWhenSceneHasKeyboardFocus:(id)arg1 pid:(id)arg2;

@end
