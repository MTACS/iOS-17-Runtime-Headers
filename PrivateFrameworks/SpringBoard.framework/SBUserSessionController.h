
@interface SBUserSessionController : NSObject <SBLogoutProgressDataSource, SBLogoutProgressDelegate, UMCriticalUserSwitchStakeholder> {
    NSDictionary * _debugBlockingTasks;
    NSMutableArray * _displayApplications;
    SBMainDisplayPolicyAggregator * _lazy_policyAggregator;
    UMUser * _lazy_user;
    bool  _loggingOut;
    bool  _loginSession;
    LKLogoutSupport * _logoutSupport;
    SBLogoutProgressTransientOverlayViewController * _progressTransientOverlayViewController;
    NSDate * _terminateApplicationsStartDate;
    UMUserSwitchBlockingTask * _terminateApplicationsTask;
    NSMutableSet * _terminatingApplications;
    UMUserManager * _userManager;
}

@property (nonatomic, readonly) bool canLogout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMultiUserSupported;
@property (getter=isLoggingOut, nonatomic) bool loggingOut;
@property (getter=isLoginSession, nonatomic, readonly) bool loginSession;
@property (getter=_policyAggregator, setter=_setPolicyAggregator:, nonatomic, retain) SBMainDisplayPolicyAggregator *policyAggregator;
@property (nonatomic, readonly) long long sessionType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) UMUser *user;

- (void).cxx_destruct;
- (void)_displayProgressTransientOverlayIfNeeded;
- (void)_evaluateRunningApplications;
- (id)_initWithUserManager:(id)arg1;
- (id)_massageApplicationListForDisplay:(id)arg1;
- (void)_noteApplicationDidExit:(id)arg1;
- (void)_noteApplicationDidExitFromNotification:(id)arg1;
- (id)_policyAggregator;
- (struct CGPoint { double x1; double x2; })_portraitOrientedProgressLocationForOrientation:(long long)arg1;
- (void)_readyToSwitchToUser:(id)arg1;
- (void)_setPolicyAggregator:(id)arg1;
- (bool)canLogout;
- (void)dealloc;
- (id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)disableCurrentUser;
- (id)init;
- (bool)isLoggingOut;
- (bool)isLoginSession;
- (bool)isMultiUserSupported;
- (void)logout;
- (void)logoutProgressTransientOverlayViewControllerDidDisappear:(id)arg1;
- (void)logoutWithLogoutSupport:(id)arg1 completion:(id /* block */)arg2;
- (id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)arg1;
- (id)policyAggregator;
- (void)readyToSwitchToLoginSession:(id)arg1;
- (void)readyToSwitchToUser:(id)arg1;
- (long long)sessionType;
- (void)setLoggingOut:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)user;
- (void)userSwitchBlockingTasksDidUpdate:(id)arg1;
- (void)willSwitchToUser:(id)arg1;

@end
