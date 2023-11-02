
@interface FPAppRegistry : NSObject {
    NSMutableDictionary * _appMetadataByBundleID;
    NSMutableDictionary * _appMetadataByDisplayName;
    <FPAppRegistryDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSObject<OS_dispatch_queue> * _syncQueue;
    int  _updateAppsNotification;
}

@property (nonatomic) <FPAppRegistryDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *listOfMonitoredApps;

+ (id)daemonConnectionOverride;
+ (bool)keepInSync;
+ (void)setDaemonConnectionOverride:(id)arg1;
+ (void)setSharedRegistry:(id)arg1;
+ (id)sharedRegistry;

- (void).cxx_destruct;
- (void)_addApps:(id)arg1;
- (id)_bundleIDForHomonymOfApp:(id)arg1;
- (bool)_isAppLibrary:(id)arg1 appMetadata:(id*)arg2 userVisible:(bool*)arg3;
- (int)_registerForNotification:(id)arg1 handler:(id /* block */)arg2;
- (void)_removeAppsWithBundleIDs:(id)arg1;
- (void)_setApps:(id)arg1;
- (void)addApps:(id)arg1;
- (id)appForBundleID:(id)arg1;
- (id)appForDisplayName:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isAppLibrary:(id)arg1;
- (id)listOfMonitoredApps;
- (id)promoteItemToAppLibraryIfNeeded:(id)arg1;
- (void)removeAppsWithBundleIDs:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateAppList;

@end
