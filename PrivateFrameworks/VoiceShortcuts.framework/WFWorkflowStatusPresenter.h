
@interface WFWorkflowStatusPresenter : NSObject <NSXPCListenerDelegate, WFDialogAlertPresenter> {
    NSXPCConnection * _activeConnection;
    <WFDialogAlertPresenterDelegate> * _delegate;
    bool  _launching;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    <WFWorkflowStatusPresenterDelegate> * _statusPresenterDelegate;
}

@property (nonatomic, retain) NSXPCConnection *activeConnection;
@property (nonatomic, readonly) bool alertIsActive;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDialogAlertPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLaunching, nonatomic) bool launching;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) <WFWorkflowStatusPresenterDelegate> *statusPresenterDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateAlertInMainSceneOfApplicationWithBundleIdentifier:(id)arg1;
- (id)activeConnection;
- (bool)alertIsActive;
- (bool)alertIsLaunching;
- (void)deactivateAlert;
- (id)delegate;
- (id)init;
- (bool)isLaunching;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)queue;
- (void)setActiveConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLaunching:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setStatusPresenterDelegate:(id)arg1;
- (id)statusPresenterDelegate;

@end
