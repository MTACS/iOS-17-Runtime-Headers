
@interface WFSpringBoardRemoteAlertPresenter : NSObject <NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, WFDialogAlertPresenter> {
    NSXPCConnection * _activeConnection;
    SBSRemoteAlertHandle * _activeHandle;
    NSObject<OS_dispatch_source> * _deactivateTimer;
    <WFDialogAlertPresenterDelegate> * _delegate;
    NSXPCListener * _listener;
}

@property (nonatomic, retain) NSXPCConnection *activeConnection;
@property (nonatomic, retain) SBSRemoteAlertHandle *activeHandle;
@property (nonatomic, readonly) bool alertIsActive;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *deactivateTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDialogAlertPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateAlertInMainSceneOfApplicationWithBundleIdentifier:(id)arg1;
- (void)activateAlertWithPresentationTarget:(id)arg1;
- (id)activeConnection;
- (id)activeHandle;
- (bool)alertIsActive;
- (void)deactivateAlert;
- (id)deactivateTimer;
- (id)delegate;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setActiveConnection:(id)arg1;
- (void)setActiveHandle:(id)arg1;
- (void)setDeactivateTimer:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
