
@interface ANHomeManager : NSObject <ANAnalyticsDailyHomesProvider, DICHomeManagerProviding, HMAccessoryDelegatePrivate, HMHomeDelegate, HMHomeDelegatePrivate, HMHomeManagerDelegate> {
    ANAccessorySettingsCache * _accessorySettingsCache;
    NSMapTable * _delegatesToQueues;
    HMHomeManager * _homeManager;
    bool  _homesLoaded;
    NSMutableArray * _homesLoadedCompletionHandlers;
    NSDate * _loadHomesStart;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) ANAccessorySettingsCache *accessorySettingsCache;
@property (nonatomic, readonly) NSArray *allHomes;
@property (nonatomic, readonly) HMAccessory *currentAccessory;
@property (nonatomic, readonly) HMHome *currentHome;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSMapTable *delegatesToQueues;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHomeManager *homeManager;
@property (nonatomic, readonly) NSArray *homes;
@property (nonatomic) bool homesLoaded;
@property (nonatomic, readonly) NSMutableArray *homesLoadedCompletionHandlers;
@property (nonatomic, readonly) NSArray *homesSupportingAnnounce;
@property (nonatomic, readonly) NSDate *loadHomesStart;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

+ (id)bundleForLocationAuthorization;
+ (unsigned long long)defaultHomeOptions;
+ (id)shared;

- (void).cxx_destruct;
- (id)_currentHomesWeAreIn;
- (void)_executeBlockForDelegates:(id /* block */)arg1;
- (id)_findBestHomeNames;
- (id)_homeNamesForAccessoryForContext:(id)arg1;
- (id)_homesForContext:(id)arg1;
- (void)_notifyManagerLoadedHomes:(id)arg1;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)accessoryDidUpdateSupportsAudioAnalysis:(id)arg1;
- (void)accessoryDidUpdateSupportsDropIn:(id)arg1;
- (id)accessorySettingsCache;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)allHomes;
- (id)currentAccessory;
- (id)currentHome;
- (id)delegatesToQueues;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)arg1;
- (id)homeForID:(id)arg1;
- (id)homeManager;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homeNamesForContext:(id)arg1;
- (id)homeWithName:(id)arg1;
- (id)homes;
- (bool)homesLoaded;
- (id)homesLoadedCompletionHandlers;
- (id)homesSupportingAnnounce;
- (id)homesWithRoomNames:(id)arg1;
- (id)homesWithZoneNames:(id)arg1;
- (id)init;
- (id)initWithCaching:(bool)arg1;
- (id)initWithCaching:(bool)arg1 homeOptions:(unsigned long long)arg2;
- (bool)isEndpointWithUUID:(id)arg1 inRoomWithName:(id)arg2;
- (bool)isLocalDeviceInRoom:(id)arg1;
- (void)loadHomeSynchronous;
- (void)loadHomes:(id /* block */)arg1;
- (id)loadHomesStart;
- (void)registerDelegate:(id)arg1 queue:(id)arg2;
- (id)serialQueue;
- (void)setHomesLoaded:(bool)arg1;

@end
