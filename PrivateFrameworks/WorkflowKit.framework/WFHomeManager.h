
@interface WFHomeManager : NSObject <HMHomeManagerDelegate, WFApplicationStateObserver> {
    NSHashTable * _eventObservers;
    bool  _hasLoadedHomes;
    HMHomeManager * _homeManager;
    NSArray * _homes;
    NSObject<OS_dispatch_group> * _loadHomesGroup;
    bool  _loading;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSHashTable *eventObservers;
@property (nonatomic, readonly) bool hasLoadedHomes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHomeManager *homeManager;
@property (nonatomic, readonly) NSArray *homes;
@property (nonatomic, readonly) NSArray *homesToWhichWeCanAddHomeAutomations;
@property (nonatomic, readonly) NSArray *homesToWhichWeHaveAdminAccess;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *loadHomesGroup;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) Class superclass;

+ (id)cachedHomeSceneNames;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_setHomes:(id)arg1;
- (void)addEventObserver:(id)arg1;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)cacheHomeSceneNames;
- (void)dealloc;
- (void)ensureHomesAreLoadedWithCompletionHandler:(id /* block */)arg1;
- (id)eventObservers;
- (bool)hasLoadedHomes;
- (id)homeManager;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homeNamed:(id)arg1;
- (id)homeWithIdentifier:(id)arg1;
- (id)homes;
- (id)homesToWhichWeCanAddHomeAutomations;
- (id)homesToWhichWeHaveAdminAccess;
- (id)init;
- (bool)isLoading;
- (id)loadHomesGroup;
- (id)primaryHome;
- (void)reloadData;
- (void)removeEventObserver:(id)arg1;
- (id)sceneNamed:(id)arg1 inHome:(id)arg2;
- (id)serviceWithIdentifier:(id)arg1 inHome:(id)arg2;
- (void)setHomeManager:(id)arg1;
- (void)setLoadHomesGroup:(id)arg1;
- (void)setLoading:(bool)arg1;
- (unsigned long long)status;

@end
