
@interface INIntentSummaryCache : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSMutableDictionary * _allBundlesCache;
    NSObject<OS_dispatch_queue> * _resourceAccessQueue;
    int  _systemLanguageChangeNotificationToken;
}

@property (nonatomic, readonly) NSMutableDictionary *allBundlesCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resourceAccessQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int systemLanguageChangeNotificationToken;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)allBundlesCache;
- (void)applicationsDidInstall:(id)arg1;
- (id)bundleCacheForBundleId:(id)arg1;
- (id)cachedSummaryForIntent:(id)arg1 languageCode:(id)arg2 creatingIfNeeded:(bool)arg3;
- (void)dealloc;
- (bool)getSubtitle:(id*)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (bool)getTitle:(id*)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (id)init;
- (void)invalidateCache;
- (void)invalidateCacheForBundleId:(id)arg1;
- (id)resourceAccessQueue;
- (void)setBundleCache:(id)arg1 forBundleId:(id)arg2;
- (void)setSubtitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (void)setTitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (void)startAutomaticInvalidation;
- (void)startObservingApplicationWorkspaceChanges;
- (void)startObservingSystemLanguageChanges;
- (void)stopAutomaticInvalidation;
- (void)stopObservingApplicationWorkspaceChanges;
- (void)stopObservingSystemLanguageChanges;
- (int)systemLanguageChangeNotificationToken;

@end
