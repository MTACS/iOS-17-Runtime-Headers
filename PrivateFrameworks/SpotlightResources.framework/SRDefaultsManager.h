
@interface SRDefaultsManager : NSObject <DDSAssetCenterDelegate> {
    SRAssetConfiguration * _assetConfig;
    NSMutableDictionary * _assets;
    NSBundle * _customBundle;
    NSObject<OS_dispatch_queue> * _ddsQueue;
    NSObject<OS_dispatch_queue> * _defaultsQueue;
    NSHashTable * _delegates;
    NSObject<OS_dispatch_queue> * _delegatesQueue;
    NSMutableSet * _fetchedLocales;
    bool  _forceLoad;
    NSMutableDictionary * _parameters;
    SRTrialConfiguration * _trialConfig;
}

@property (nonatomic, readonly) NSBundle *customBundle;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ddsQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *defaultsQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegatesQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultProperties;
+ (id)defaultValueWithKey:(id)arg1;
+ (id)identifier;
+ (void)removeDefaults;
+ (void)removeKey:(id)arg1;
+ (void)setDefaultWithKey:(id)arg1 value:(id)arg2;
+ (void)setVersionWithValue:(long long)arg1;
+ (id)sharedDefaultsManager;
+ (id)userDefaults;
+ (long long)version;

- (void).cxx_destruct;
- (void)_loadAssets:(id)arg1 shouldUpdate:(bool)arg2;
- (void)_unloadAssetsForLocale:(id)arg1;
- (void)addFetchForLocale:(id)arg1;
- (id)assetBundleForLocale:(id)arg1 client:(id)arg2;
- (id)currentAssetTypes;
- (id)currentNamespaceDescription;
- (id)currentNamespaces;
- (id)currentNamespacesForClient:(id)arg1;
- (id)customBundle;
- (id)ddsQueue;
- (void)dealloc;
- (id)defaultAssetPathForContentType:(id)arg1 contentName:(id)arg2;
- (id)defaultsQueue;
- (id)delegatesQueue;
- (bool)didFetchForLanguage:(id)arg1;
- (void)didUpdateAssetsWithType:(id)arg1;
- (void)didUpdateTrialNamespace:(id)arg1;
- (id)fetchedLocales;
- (bool)forceLoad;
- (id)init;
- (void)loadDefaultsForLocale:(id)arg1;
- (void)loadDefaultsFromDefaultAssets:(id)arg1;
- (void)loadFactorsAtPath:(id)arg1 namespaceId:(id)arg2;
- (void)notifyObservers;
- (id)parametersOfNamespaceWithName:(id)arg1;
- (id)parametersOfNamespaceWithName:(id)arg1 client:(id)arg2;
- (void)registerDelegate:(id)arg1;
- (void)removeFetchForLanguage:(id)arg1;
- (void)removeFetchForLocale:(id)arg1;
- (void)requestAssetsForLanguages:(id)arg1;
- (void)requestAssetsForLanguages:(id)arg1 resourcePath:(id)arg2;
- (id)resourceBundle;
- (void)setForceLoad:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)unloadDefaultsForLocale:(id)arg1;
- (void)unregisterDelegate:(id)arg1;
- (void)updateFetchedLocales:(id)arg1;
- (void)updateParameter:(id)arg1 inNamespace:(id)arg2 withValue:(id)arg3;

@end
