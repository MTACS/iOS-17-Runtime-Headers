
@protocol DBDashboardStateObserver <NSObject>

@required

- (void)dashboardStateProvider:(DBDashboardStateProvider *)arg1 didChangeActiveBundleIdentifier:(NSString *)arg2;
- (void)dashboardStateProvider:(DBDashboardStateProvider *)arg1 didChangeConnectionReady:(bool)arg2;
- (void)dashboardStateProvider:(DBDashboardStateProvider *)arg1 didChangeHomeScreenPageType:(unsigned long long)arg2;
- (void)dashboardStateProvider:(DBDashboardStateProvider *)arg1 didChangeLockoutState:(unsigned long long)arg2;

@end
