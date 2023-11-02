
@interface _ATXAppInstallMonitor : NSObject {
    _ATXAppIconState * _appIconState;
    _ATXAppInfoManager * _appInfoManager;
    NSDictionary * _assetData;
    NSSet * _azulNewAppSet;
    ATXHistogramBundleIdTable * _histogramBundleIdTable;
    NSObject<OS_dispatch_queue> * _installQueue;
    id /* block */  _updateCompletionBlock;
    ATXWebClipDataStore * _webClipDataStore;
}

@property (nonatomic, retain) NSSet *azulNewAppSet;

+ (id)appDirectoryAppCategoryMappings;
+ (id)appInfoDictWithBackDate:(bool)arg1 assetData:(id)arg2 azulNewAppSet:(id)arg3 isFromNotification:(bool)arg4 newApps:(id)arg5;
+ (id)azulNewAppSet;
+ (id)removeIntersectionBetweenSet:(id)arg1 set:(id)arg2;

- (void).cxx_destruct;
- (id)_appInfoDictWithBackDate:(bool)arg1 isFromNotification:(bool)arg2 newApps:(id)arg3;
- (id)_fetchAllApps;
- (id)_fetchAllAppsFromDatastore;
- (id)_fetchAllAppsWithInstallDateFromDatastore;
- (void)_receivedInstallNotificationWithApps:(id)arg1 placeholderInstallNotification:(bool)arg2;
- (void)_receivedUninstallNotificationWithApps:(id)arg1 placeholderUninstallNotification:(bool)arg2;
- (id)azulNewAppSet;
- (void)dealloc;
- (void)handleInstallationOfApps:(id)arg1 isFromNotification:(bool)arg2 andBackdate:(bool)arg3;
- (void)handleUninstallationOfApps:(id)arg1;
- (id)init;
- (id)initWithAppInfoManager:(id)arg1;
- (id)initWithAppInfoManager:(id)arg1 histogramBundleIdTable:(id)arg2 appIconState:(id)arg3 webClipDataStore:(id)arg4 shouldSynchronousUpdate:(bool)arg5;
- (id)initWithAppInfoManager:(id)arg1 shouldSynchronousUpdate:(bool)arg2;
- (void)noSyncUpdateWithWaitTime:(unsigned long long)arg1 andBackdate:(bool)arg2;
- (void)notifyInstallationOfAppsWithInstallDictionary:(id)arg1;
- (void)notifyUninstallationOfAppsWithBundleIdsToRemoveSet:(id)arg1;
- (void)receivedInstallNotification:(id)arg1;
- (void)receivedStateChangeNotification:(id)arg1;
- (void)receivedUninstallNotification:(id)arg1;
- (bool)restoreInProgress;
- (void)setAzulNewAppSet:(id)arg1;
- (void)setUpdateCompletionBlock:(id /* block */)arg1;
- (void)start;
- (void)stop;
- (void)synchronousUpdateAndBackdate:(bool)arg1;
- (void)synchronousUpdateWithUninstallWaitTime:(unsigned long long)arg1 andBackdate:(bool)arg2;
- (void)train;
- (id)webClipsForRemovedApps:(id)arg1;

@end
