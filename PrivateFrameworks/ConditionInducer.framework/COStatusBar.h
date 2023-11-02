
@interface COStatusBar : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate> {
    NSString * _conditionClass;
    SBSStatusBarStyleOverridesCoordinator * _coordinator;
    bool  _didRequestTeardownOnce;
    NSString * _profileDescription;
    SBSStatusBarStyleOverridesAssertion * _statusBarAssertion;
    id /* block */  _terminationBeganCallback;
    id /* block */  _terminationNotifyCallback;
    struct __CFUserNotification { } * _userNotificationStopCondition;
}

@property (nonatomic, retain) NSString *conditionClass;
@property (nonatomic, retain) SBSStatusBarStyleOverridesCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didRequestTeardownOnce;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *profileDescription;
@property (nonatomic, retain) SBSStatusBarStyleOverridesAssertion *statusBarAssertion;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ terminationBeganCallback;
@property (nonatomic, copy) id /* block */ terminationNotifyCallback;
@property (nonatomic) struct __CFUserNotification { }*userNotificationStopCondition;

- (void).cxx_destruct;
- (void)acquireStatusBarWithCompletionHandler:(id /* block */)arg1;
- (void)clearStatusBar;
- (id)conditionClass;
- (id)coordinator;
- (void)dealloc;
- (bool)didRequestTeardownOnce;
- (id)doTeardownOnStop;
- (id)getDeviceType;
- (id)initWithConditionClass:(id)arg1 profile:(id)arg2 teardownBeganCb:(id /* block */)arg3 teardownCompleteCb:(id /* block */)arg4;
- (id)profileDescription;
- (void)setConditionClass:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setDidRequestTeardownOnce:(bool)arg1;
- (void)setProfileDescription:(id)arg1;
- (void)setStatusBarAssertion:(id)arg1;
- (void)setTerminationBeganCallback:(id /* block */)arg1;
- (void)setTerminationNotifyCallback:(id /* block */)arg1;
- (void)setUserNotificationStopCondition:(struct __CFUserNotification { }*)arg1;
- (void)showConditionIsTearingDownAlert;
- (bool)showStopConditionAlert;
- (id)statusBarAssertion;
- (void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2;
- (bool)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (id /* block */)terminationBeganCallback;
- (id /* block */)terminationNotifyCallback;
- (struct __CFUserNotification { }*)userNotificationStopCondition;

@end
