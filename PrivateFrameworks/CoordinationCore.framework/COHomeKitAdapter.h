
@interface COHomeKitAdapter : NSObject <HMHomeDelegatePrivate, HMHomeManagerDelegate, _COHomeKitAudioDestinationControllerListenerDelegate> {
    NSDictionary * _audioDestinationControllerListeners;
    NSCondition * _condition;
    HMMediaSystem * _currentMediaSystem;
    HMHomeManager * _homekit;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    MGDaemon * _mediaGroupsDaemon;
    NSMutableArray * _mediaSystemUpdateHandlers;
    bool  _ready;
}

@property (nonatomic, copy) NSDictionary *audioDestinationControllerListeners;
@property (nonatomic, readonly) NSCondition *condition;
@property (nonatomic, retain) HMMediaSystem *currentMediaSystem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHomeManager *homekit;
@property (nonatomic, readonly) MGDaemon *mediaGroupsDaemon;
@property (nonatomic, readonly) NSMutableArray *mediaSystemUpdateHandlers;
@property (readonly) Class superclass;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addAudioDestinationControllerListenerForAccessory:(id)arg1 home:(id)arg2;
- (void)_postUsersChangedNotificationForHome:(id)arg1;
- (void)_removeAudioDestinationControllerListenerForAccessory:(id)arg1 home:(id)arg2;
- (void)_withLock:(id /* block */)arg1;
- (id)accessoriesForSiriContextTargetReference:(id)arg1;
- (id)accessoriesInMediaSystem:(id)arg1 inHome:(id)arg2;
- (id)accessoriesInRoom:(id)arg1 inHome:(id)arg2;
- (id)accessoriesInZone:(id)arg1 inHome:(id)arg2;
- (id)accessoryWithUniqueIdentifier:(id)arg1;
- (id)addAlarm:(id)arg1 toAccessory:(id)arg2 inHome:(id)arg3;
- (id)alarmsCollectionForAccessory:(id)arg1 inHome:(id)arg2 isMediaSystem:(bool*)arg3;
- (id)alarmsForAccessory:(id)arg1 inHome:(id)arg2;
- (id)allAccessoriesForSiriContextTargetReference:(id)arg1;
- (void)audioDestinationControllerDidUpdateForAccessory:(id)arg1 inHome:(id)arg2;
- (id)audioDestinationControllerListeners;
- (id)condition;
- (id)currentAccessory;
- (id)currentMediaSystem;
- (bool)hasOptedToHH2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddMediaSystem:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (id)homeForAccessory:(id)arg1;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didUpdateAuthorizationStatus:(unsigned long long)arg2;
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homekit;
- (id)identifiersForAccessoriesAssociatedWithAccessory:(id)arg1 inHome:(id)arg2;
- (id)init;
- (id)initWithHomeManager:(id)arg1;
- (id)initWithHomeManager:(id)arg1 MediaGroupsDaemon:(id)arg2;
- (bool)isAlarmsCollectionSetting:(id)arg1 forAccessory:(id)arg2 inHome:(id)arg3;
- (bool)isReady;
- (id)mediaGroupsDaemon;
- (id)mediaSystemForAccessory:(id)arg1 inHome:(id)arg2;
- (id)mediaSystemUpdateHandlers;
- (void)prewarm;
- (id)registerMediaSystemUpdateHandler:(id /* block */)arg1;
- (id)removeAlarm:(id)arg1 fromAccessory:(id)arg2 inHome:(id)arg3;
- (id)roomForAccessory:(id)arg1 inHome:(id)arg2;
- (void)setAudioDestinationControllerListeners:(id)arg1;
- (void)setCurrentMediaSystem:(id)arg1;
- (id)settingsForKeyPath:(id)arg1 fromSettings:(id)arg2;
- (id)settingsForKeyPath:(id)arg1 onAccessory:(id)arg2;
- (id)settingsForKeyPath:(id)arg1 onMediaObject:(id)arg2;
- (void)unregisterMediaSystemUpdateHandler:(id)arg1;
- (id)updateAlarm:(id)arg1 onAccessory:(id)arg2 inHome:(id)arg3;
- (id)zoneForAccessory:(id)arg1 inHome:(id)arg2;

@end
