
@interface WLKAppLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSArray * _allAppBundleIdentifiers;
    bool  _appLibraryNeedsRefresh;
    NSDictionary * _appProxies;
    int  _didChangeNotificationToken;
    long long  _ignoreAppLibraryChangesCount;
    NSArray * _installedAppBundleIdentifiers;
    NSArray * _nonConformingAppBundleIdentifiers;
    NSObject<OS_dispatch_queue> * _refreshQueue;
    NSArray * _subscribedAppBundleIdentifiers;
    NSArray * _testAppBundleIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultAppLibrary;

- (void).cxx_destruct;
- (id)_bundleIdentifiersfromProxies:(id)arg1;
- (void)_handleInvalidationWithReason:(id)arg1;
- (id)_nonConformingAppBundleIdentifiers;
- (id)_nonConformingAppProxies;
- (id)_refreshAppLibrary;
- (id)_subscriptionInfosForProxies:(id)arg1;
- (void)_subscriptionsDidChangeNotification:(id)arg1;
- (id)allAppBundleIdentifiers;
- (id)allAppProxies;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)beginIgnoringAppLibraryChanges;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)endIgnoringAppLibraryChanges;
- (id)init;
- (id)installedAppBundleIdentifiers;
- (id)installedAppProxies;
- (bool)isTVAppInstalled;
- (id)localizedNameForBundle:(id)arg1;
- (id)refresh;
- (id)subscribedAppBundleIdentifiers;
- (id)subscribedAppProxies;
- (id)subscriptionInfoForBundle:(id)arg1;
- (id)testAppBundleIdentifiers;
- (id)testAppProxies;

@end
