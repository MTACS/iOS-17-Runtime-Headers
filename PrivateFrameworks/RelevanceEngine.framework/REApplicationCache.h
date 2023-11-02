
@interface REApplicationCache : NSObject <CSLPRFAppDataProviderDelegate, LSApplicationWorkspaceObserverProtocol> {
    CSLPRFDefaultAppDataProvider * _appProvider;
    NSMutableDictionary * _applicationTypes;
    NSObject<OS_dispatch_queue> * _queue;
    REKeyValueMap * _remoteApplicationsMap;
    NSMutableDictionary * _removedApps;
    NSMutableDictionary * _restrictedApps;
    NSMutableDictionary * _watchKitExtensions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_accessRemoteApplicationsMapWithCompletion:(id /* block */)arg1;
- (void)_clearApplicationTypesMap;
- (id)_init;
- (void)_init_loadApplicationTypesMapFromWorkspace:(id)arg1;
- (bool)_queue_applicationIsRemoved:(id)arg1;
- (bool)_queue_applicationIsRestricted:(id)arg1;
- (void)_queue_applicationsDidChange:(id)arg1;
- (void)_queue_loadRemoteAppsCompletion:(id /* block */)arg1;
- (void)_queue_loadStateForBundleID:(id)arg1;
- (unsigned long long)_trackedApplicationCount;
- (unsigned long long)_typeForRecord:(id)arg1;
- (bool)applicationIsRemote:(id)arg1;
- (bool)applicationIsRemoved:(id)arg1;
- (bool)applicationIsRestricted:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)clearNanoRegistryApplications;
- (void)dataProviderDidChange:(id)arg1;
- (void)dealloc;
- (id)localApplicationForRemoteApplication:(id)arg1;
- (id)remoteApplicationForLocalApplication:(id)arg1;
- (unsigned long long)typeForApplication:(id)arg1;
- (id)watchKitExtensionForApplication:(id)arg1;

@end
