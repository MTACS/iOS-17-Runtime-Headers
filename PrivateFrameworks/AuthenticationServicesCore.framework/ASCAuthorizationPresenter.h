
@interface ASCAuthorizationPresenter : NSObject <ASCAuthorizationPresenterHostProtocol, NSXPCListenerDelegate, SBSRemoteAlertHandleObserver> {
    id /* block */  _credentialResultHandler;
    <ASCAuthorizationPresenterDelegate> * _delegate;
    bool  _hasQueuedCABLEClientWillAuthenticateRequest;
    bool  _hasQueuedCABLEClientWillConnectRequest;
    bool  _hasQueuedPINEntryInterfaceRequest;
    NSObject<OS_dispatch_queue> * _interfaceUpdateQueue;
    NSObject<OS_dispatch_queue> * _invalidationQueue;
    NSArray * _loginChoicesForQueuedUpdate;
    SBSRemoteAlertHandle * _remoteAlertHandle;
    NSXPCListener * _remoteListener;
    NSXPCConnection * _viewServiceConnection;
    <ASCViewServiceProtocol> * _viewServiceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASCAuthorizationPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateWithError:(id)arg1;
- (bool)_isErrorDueToNewAlertHandleRequest:(id)arg1;
- (bool)_isPresentationContextValid:(id)arg1 error:(id*)arg2;
- (void)_performQueuedUpdatesIfNecessary;
- (void)authorizationRequestFinishedWithCredential:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authorizationRequestInitiatedWithLoginChoice:(id)arg1 authenticatedContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cableClientWillAuthenticate;
- (void)cableClientWillConnect;
- (id)delegate;
- (void)dismiss;
- (void)dismissWithError:(id)arg1;
- (id)init;
- (void)initializeClientToViewServiceConnection;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)presentAuthorizationWithContext:(id)arg1 forProcess:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)presentError:(id)arg1 forService:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)presentPINEntryInterface;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startCABLEAuthenticationWithCompletionHandler:(id /* block */)arg1;
- (void)updateInterfaceForUserVisibleError:(id)arg1;
- (void)updateInterfaceWithLoginChoices:(id)arg1;
- (void)validateUserEnteredPIN:(id)arg1 completionHandler:(id /* block */)arg2;

@end
