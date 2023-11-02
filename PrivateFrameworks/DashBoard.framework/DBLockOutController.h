
@interface DBLockOutController : NSObject <DBBuddyMonitorObserver, DBDisclosureMonitorObserver, DBEnvironmentConfigurationObserving, DBKeybagMonitorObserver, DBLockOutViewControllerDelegate, DBSiriMonitorObserver, DBThermalMonitorObserver> {
    DBBuddyMonitor * _buddyMonitor;
    DBDashboardStateProvider * _dashboardStateProvider;
    <DBLockoutControllerDelegate> * _delegate;
    DBDisclosureMonitor * _disclosureMonitor;
    DBEnvironmentConfiguration * _environmentConfiguration;
    DBKeybagMonitor * _keybagMonitor;
    <BSInvalidatable> * _lockOutLayoutElementAssertion;
    long long  _lockOutMode;
    DBLockOutViewController * _lockOutViewController;
    DBLockOutWindow * _lockOutWindow;
    DBSiriMonitor * _siriMonitor;
    DBThermalMonitor * _thermalMonitor;
}

@property (nonatomic, retain) DBBuddyMonitor *buddyMonitor;
@property (nonatomic, retain) DBDashboardStateProvider *dashboardStateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <DBLockoutControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DBDisclosureMonitor *disclosureMonitor;
@property (nonatomic, retain) DBEnvironmentConfiguration *environmentConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DBKeybagMonitor *keybagMonitor;
@property (nonatomic, retain) <BSInvalidatable> *lockOutLayoutElementAssertion;
@property (nonatomic) long long lockOutMode;
@property (nonatomic, retain) DBLockOutViewController *lockOutViewController;
@property (nonatomic, retain) DBLockOutWindow *lockOutWindow;
@property (getter=isLockedOut, nonatomic, readonly) bool lockedOut;
@property (nonatomic, retain) DBSiriMonitor *siriMonitor;
@property (readonly) Class superclass;
@property (nonatomic, retain) DBThermalMonitor *thermalMonitor;

- (void).cxx_destruct;
- (id)buddyMonitor;
- (void)buddyMonitorDidChangeFinished:(id)arg1;
- (id)dashboardStateProvider;
- (id)delegate;
- (id)disclosureMonitor;
- (void)disclosureMonitorDidChangeActive:(id)arg1;
- (id)environmentConfiguration;
- (void)environmentConfigurationPairedVehiclesDidChange:(id)arg1;
- (id)initWithWindowScene:(id)arg1 environmentConfiguration:(id)arg2 dashboardStateProvider:(id)arg3 delegate:(id)arg4;
- (void)invalidate;
- (bool)isLockedOut;
- (id)keybagMonitor;
- (void)keybagMonitorLockStateDidChange:(id)arg1;
- (id)lockOutLayoutElementAssertion;
- (long long)lockOutMode;
- (id)lockOutViewController;
- (void)lockOutViewController:(id)arg1 didTapButtonOfType:(unsigned long long)arg2;
- (id)lockOutWindow;
- (void)setBuddyMonitor:(id)arg1;
- (void)setDashboardStateProvider:(id)arg1;
- (void)setDisclosureMonitor:(id)arg1;
- (void)setEnvironmentConfiguration:(id)arg1;
- (void)setKeybagMonitor:(id)arg1;
- (void)setLockOutLayoutElementAssertion:(id)arg1;
- (void)setLockOutMode:(long long)arg1;
- (void)setLockOutViewController:(id)arg1;
- (void)setLockOutWindow:(id)arg1;
- (void)setSiriMonitor:(id)arg1;
- (void)setThermalMonitor:(id)arg1;
- (id)siriMonitor;
- (void)siriMonitorDidChangeEnabled:(id)arg1;
- (id)thermalMonitor;
- (void)thermalMonitorLevelDidChange:(id)arg1;
- (void)updateLockOutModeAnimated:(bool)arg1;
- (void)updateLockOutModeAnimated:(bool)arg1 takeScreen:(bool)arg2;

@end
