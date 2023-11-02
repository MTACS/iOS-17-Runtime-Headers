
@interface DVTiOSDeviceGlobalStatusIndicator : NSObject <DVTDeviceGlobalStatusIndicator, SBSStatusBarStyleOverridesCoordinatorDelegate> {
    DVTDeviceGlobalStatusIndicatorConfiguration * _configuration;
    SBSStatusBarStyleOverridesCoordinator * _coordinator;
    SBSStatusBarStyleOverridesAssertion * _statusBarAssertion;
    NSObject<OS_os_log> * _statusIndicatorLog;
    id /* block */  _stoppedByUserBlock;
    struct __CFUserNotification { } * _userNotificationStopCondition;
}

@property (nonatomic, retain) DVTDeviceGlobalStatusIndicatorConfiguration *configuration;
@property (nonatomic, retain) SBSStatusBarStyleOverridesCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBSStatusBarStyleOverridesAssertion *statusBarAssertion;
@property (nonatomic, copy) id /* block */ stoppedByUserBlock;
@property (readonly) Class superclass;
@property (nonatomic) struct __CFUserNotification { }*userNotificationStopCondition;

- (void).cxx_destruct;
- (bool)_showStopConditionAlert;
- (void)acquireStatusBarWithCompletionHandler:(id /* block */)arg1;
- (void)activateWithCompletionBlock:(id /* block */)arg1;
- (void)clearStatusBar;
- (id)configuration;
- (id)coordinator;
- (void)deactivate;
- (id)initWithConfiguration:(id)arg1 stoppedByUserBlock:(id /* block */)arg2;
- (void)setConfiguration:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setStatusBarAssertion:(id)arg1;
- (void)setStoppedByUserBlock:(id /* block */)arg1;
- (void)setUserNotificationStopCondition:(struct __CFUserNotification { }*)arg1;
- (id)statusBarAssertion;
- (void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2;
- (bool)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (id /* block */)stoppedByUserBlock;
- (struct __CFUserNotification { }*)userNotificationStopCondition;

@end
