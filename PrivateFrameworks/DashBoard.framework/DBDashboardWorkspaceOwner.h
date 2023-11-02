
@interface DBDashboardWorkspaceOwner : NSObject <BSInvalidatable, DBAppAlertPresenting, DBEventHandling, DBWorkspaceOwner> {
    <DBWorkspaceStateChangeSession> * _currentSession;
    NSMutableDictionary * _entityIdentifierToViewControllerMap;
    <DBEnvironment> * _environment;
    bool  _invalidated;
    <DBNotificationSuspending> * _notificationSuspender;
    DBDashboardRootViewController * _rootViewController;
    DBSiriViewController * _siriViewController;
    DBDashboardWorkspaceStateResolver * _stateResolver;
    DBUserAlertServer * _userAlertServer;
    DBWorkspace * _workspace;
}

@property (nonatomic, readonly) NSString *activeBaseApplicationBundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <DBEnvironment> *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic) <DBNotificationSuspending> *notificationSuspender;
@property (readonly) Class superclass;
@property (nonatomic) DBUserAlertServer *userAlertServer;
@property (nonatomic) DBWorkspace *workspace;

- (void).cxx_destruct;
- (id)_existingViewControllerForEntity:(id)arg1;
- (void)_handleSuspendedActivationForEntity:(id)arg1 changeItem:(id)arg2 completion:(id /* block */)arg3;
- (void)_newViewControllerForEntity:(id)arg1 changeItem:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateViewControllerForEntity:(id)arg1 changeItem:(id)arg2 oldEntity:(id)arg3 completion:(id /* block */)arg4;
- (id)activeBaseApplicationBundleID;
- (void)alertServer:(id)arg1 wantsAppDismissalForAlert:(id)arg2 bundleID:(id)arg3;
- (void)alertServer:(id)arg1 wantsAppPresentationForAlert:(id)arg2 bundleID:(id)arg3;
- (id)environment;
- (void)handleEvent:(id)arg1;
- (id)initWithStateResolver:(id)arg1 environment:(id)arg2 rootViewController:(id)arg3 siriViewController:(id)arg4;
- (void)invalidate;
- (id)notificationSuspender;
- (void)session:(id)arg1 handleStateChangeRequest:(id)arg2;
- (unsigned long long)session:(id)arg1 policyForRequest:(id)arg2;
- (void)setEnvironment:(id)arg1;
- (void)setNotificationSuspender:(id)arg1;
- (void)setUserAlertServer:(id)arg1;
- (void)setWorkspace:(id)arg1;
- (id)userAlertServer;
- (id)workspace;
- (void)workspace:(id)arg1 didBeginStateChangeSession:(id)arg2;
- (void)workspace:(id)arg1 didEndStateChangeSession:(id)arg2;

@end
