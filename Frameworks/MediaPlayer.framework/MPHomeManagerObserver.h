
@interface MPHomeManagerObserver : NSObject <HMHomeDelegate, HMHomeDelegatePrivate, HMHomeManagerDelegatePrivate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    HMHome * _currentHome;
    HMUser * _currentUser;
    <MPHomeManagerObserverDelegate> * _delegate;
    HMHomeManager * _homeManager;
    NSSet * _homeUsers;
    unsigned long long  _homekitInitSignpostId;
    bool  _setupDidComplete;
    bool  _soundCheckCachedValue;
    NSMutableDictionary * _userMonitorMap;
}

@property (nonatomic, readonly) HMAccessory *currentAccessory;
@property (nonatomic, readonly) HMHome *currentHome;
@property (nonatomic, readonly) HMUser *currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPHomeManagerObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCurrentAccessory;
@property (nonatomic, readonly) bool hasCurrentHome;
@property (nonatomic, readonly) bool hasCurrentUser;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPHomeUserMonitor *monitorForCurrentUser;
@property (nonatomic, readonly) bool setupDidComplete;
@property (getter=isSoundCheckEnabled, nonatomic) bool soundCheckEnabled;
@property (readonly) Class superclass;

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)_currentHomeDidChange;
- (void)_currentUserDidChange;
- (void)_soundCheckDidChange;
- (void)_update;
- (void)_updateAsyncOnQueue;
- (void)_updateSoundCheck;
- (id)_userMonitorWithHomeIdentifiers:(id)arg1;
- (void)_usersDidChange;
- (id)currentAccessory;
- (id)currentHome;
- (id)currentUser;
- (id)delegate;
- (bool)hasCurrentAccessory;
- (bool)hasCurrentHome;
- (bool)hasCurrentUser;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (id)homeAccesssoryWithRouteID:(id)arg1;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)arg1;
- (void)homeDidUpdateSoundCheck:(id)arg1;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManagerDidRemoveCurrentAccessory:(id)arg1;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;
- (id)init;
- (bool)isSoundCheckEnabled;
- (id)monitorForCurrentUser;
- (void)setDelegate:(id)arg1;
- (void)setSoundCheckEnabled:(bool)arg1;
- (bool)setupDidComplete;
- (id)userMonitorWithHomeIdentifier:(id)arg1;
- (id)userMonitorWithHomeIdentifiers:(id)arg1;

@end
