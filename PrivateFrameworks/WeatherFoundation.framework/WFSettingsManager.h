
@interface WFSettingsManager : NSObject <WFUserInfoManagerDelegate> {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _requestSerialQueue;
    WFRemoteAppSettings * _settings;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _settingsLock;
    bool  _useFallback;
    WFUserInfoManager * _userInfoManager;
}

@property (nonatomic, readonly) NSString *APIVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestSerialQueue;
@property (nonatomic, retain) WFRemoteAppSettings *settings;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } settingsLock;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useFallback;
@property (nonatomic, retain) WFUserInfoManager *userInfoManager;

+ (void)setUserIdentifier:(id)arg1;
+ (id)sharedInstance;
+ (id)userIdentifier;

- (void).cxx_destruct;
- (id)APIVersion;
- (void)addObserver:(id)arg1;
- (bool)clearConfigCacheOnLaunchIfRequested;
- (void)completeOnQueue:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)containerIDForContainerIdentifier:(id)arg1;
- (id)containerIdentifier;
- (unsigned long long)debugEnvironmentFromOverride:(id)arg1;
- (id)debugOverrides;
- (void)fetchAppConfigurationIfExpired;
- (void)fetchAppConfigurationWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)forceFetchAppConfiguration;
- (id)init;
- (void)notifyObserversOfAppConfigRefresh;
- (id)observers;
- (id)permanentURLForRecordID:(id)arg1 containerIdentifier:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)requestSerialQueue;
- (void)setRequestSerialQueue:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettingsLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setUseFallback:(bool)arg1;
- (void)setUserInfoManager:(id)arg1;
- (id)settings;
- (struct os_unfair_lock_s { unsigned int x1; })settingsLock;
- (void)setupRemoteSettings;
- (bool)shouldReroutePermanentURLsForContainerIdentifier:(id)arg1;
- (void)updateAssetURLHostIfNeededWithComponents:(id)arg1 containerIdentifier:(id)arg2;
- (id)urlSafeBase64EncodedStringWithData:(id)arg1 options:(unsigned long long)arg2;
- (bool)useFallback;
- (id)userInfoManager;
- (void)userInfoManager:(id)arg1 didSynchronizeUserIdentifier:(id)arg2;

@end
