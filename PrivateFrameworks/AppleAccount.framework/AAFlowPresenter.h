
@interface AAFlowPresenter : NSObject <AAFlowPresenterHostProtocol, AAFlowPresenterProtocol, NSXPCListenerDelegate, SBSRemoteAlertHandleObserver> {
    SBSRemoteAlertHandle * _remoteAlertHandle;
    NSXPCListener * _remoteListener;
    id /* block */  presentationCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ presentationCompletion;
@property (nonatomic, retain) SBSRemoteAlertHandle *remoteAlertHandle;
@property (nonatomic, retain) NSXPCListener *remoteListener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callCompletionBlockWithError:(id)arg1;
- (void)dealloc;
- (void)flowFinishedWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)launchProcessWithUserInfo:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id /* block */)presentationCompletion;
- (id)remoteAlertHandle;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (id)remoteListener;
- (void)setPresentationCompletion:(id /* block */)arg1;
- (void)setRemoteAlertHandle:(id)arg1;
- (void)setRemoteListener:(id)arg1;

@end
