
@interface _ATXRecentInstallCache : NSObject {
    _ATXInternalInstallNotification * _installNotificationMonitor;
    NSMutableDictionary * _recentInstallations;
    double  _ttl;
    _ATXInternalUninstallNotification * _uninstallNotificationMonitor;
}

- (void).cxx_destruct;
- (id)_allRecentlyInstalledApplicationsAfterExpirationDate:(id)arg1;
- (id)_getRecentInstallationsMap;
- (void)_notifiedOfInstalls:(id)arg1;
- (void)_notifiedOfUninstalls:(id)arg1;
- (id)allRecentlyInstalledApplications;
- (id)init;
- (id)initTrackingAppsMoreRecentThan:(double)arg1;
- (id)initTrackingAppsMoreRecentThan:(double)arg1 installMonitor:(id)arg2 uninstallMonitor:(id)arg3;
- (void)reset;

@end
