
@interface ICAppRegistry : NSObject {
    NSDictionary * _actions;
    NSDictionary * _appsDictionary;
    ICApp * _currentApp;
    bool  _isFilled;
    NSMutableDictionary * _observersByIdentifier;
    NSLock * _observersLock;
    NSLock * _registryLock;
    int  _urlTypesToken;
}

@property (nonatomic, retain) NSDictionary *actions;
@property (nonatomic, readonly) NSArray *allActions;
@property (nonatomic, readonly) NSArray *apps;
@property (nonatomic, retain) NSDictionary *appsDictionary;
@property (nonatomic, readonly) ICApp *currentApp;
@property (nonatomic, readonly) bool isFilled;
@property (nonatomic, retain) NSMutableDictionary *observersByIdentifier;
@property (nonatomic, retain) NSLock *observersLock;
@property (nonatomic, retain) NSLock *registryLock;
@property (nonatomic) int urlTypesToken;

+ (id)bundleIdentifierForLegacyAppIdentifier:(id)arg1;
+ (id)legacyAppIdentifierForBundleIdentifier:(id)arg1;
+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)_appsWithIdentifiers:(id)arg1;
- (id)actions;
- (id)actionsWithIdentifiers:(id)arg1;
- (void)addInstallStatusObserver:(id)arg1 forAppIdentifiers:(id)arg2;
- (id)allActions;
- (id)appWithBundleIdentifier:(id)arg1;
- (id)appWithIdentifier:(id)arg1;
- (id)appWithURLScheme:(id)arg1;
- (id)apps;
- (id)appsDictionary;
- (id)appsWithIdentifiers:(id)arg1;
- (id)bundledURL;
- (id)cacheDirectoryURL;
- (id)cacheURL;
- (id)currentApp;
- (id)currentVersion;
- (void)dealloc;
- (void)deleteCache;
- (id)description;
- (void)fetchRemoteConfiguration:(id /* block */)arg1;
- (void)fillRegistry;
- (id)init;
- (bool)isFilled;
- (id)observersByIdentifier;
- (id)observersLock;
- (void)refreshInstalledApps;
- (id)registryLock;
- (void)removeInstallStatusObserver:(id)arg1 forAppIdentifiers:(id)arg2;
- (void)setActions:(id)arg1;
- (void)setAppsDictionary:(id)arg1;
- (void)setObserversByIdentifier:(id)arg1;
- (void)setObserversLock:(id)arg1;
- (void)setRegistryLock:(id)arg1;
- (void)setUrlTypesToken:(int)arg1;
- (void)updateRegistry;
- (int)urlTypesToken;

@end
