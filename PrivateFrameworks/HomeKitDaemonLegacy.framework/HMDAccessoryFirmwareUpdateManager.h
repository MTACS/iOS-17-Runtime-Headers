
@interface HMDAccessoryFirmwareUpdateManager : NSObject <HMFTimerDelegate> {
    NSMutableDictionary * _accessoryRetries;
    NSMutableDictionary * _activeSessions;
    HMDDefaultUARPControllerDelegate * _defaultUARPControllerDelegate;
    NSURL * _documentationPath;
    HMDHomeManager * _homeManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDAccessoryFirmwareUpdateConcurrencyLogEventManager * _logEventManager;
    HMDMatterUARPControllerDelegate * _matterUARPControllerDelegate;
    NSMapTable * _registeredAccessories;
    HMFTimer * _statusTimer;
    <HMDAccessoryFirmwareUpdateManagerWingman> * _wingman;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableDictionary *accessoryRetries;
@property (nonatomic, retain) NSMutableDictionary *activeSessions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) UARPController *defaultUARPController;
@property (nonatomic, readonly) HMDDefaultUARPControllerDelegate *defaultUARPControllerDelegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *documentationPath;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (nonatomic, readonly) HMDAccessoryFirmwareUpdateConcurrencyLogEventManager *logEventManager;
@property (nonatomic, readonly) HMDMatterUARPControllerDelegate *matterUARPControllerDelegate;
@property (nonatomic, retain) NSMapTable *registeredAccessories;
@property (nonatomic, retain) HMFTimer *statusTimer;
@property (readonly) Class superclass;
@property (readonly) bool supportsFirmwareUpdate;
@property (readonly) <HMDAccessoryFirmwareUpdateManagerWingman> *wingman;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UARPAccessoryForHMDAccessory:(id)arg1;
- (id)UARPControllerForAccessory:(id)arg1;
- (void)_handleAccessoryFirmwareVersionUpdateNotification:(id)arg1;
- (void)_handleHomeAccessoryRemovedNotification:(id)arg1;
- (void)_handleMatterSettingsUpdateNotification:(id)arg1;
- (bool)_registerAccessory:(id)arg1 source:(long long)arg2 path:(id)arg3;
- (id)accessoryRetries;
- (id)activeSessions;
- (id)addSessionForUARPAccessory:(id)arg1;
- (id)availableSoftwareAssetForMatterAccessory:(id)arg1 error:(id*)arg2;
- (id)changeAccessory:(id)arg1 source:(long long)arg2 path:(id)arg3 documentationPath:(id)arg4 userInitiatedStaging:(bool)arg5;
- (bool)checkForUpdateForAccessory:(id)arg1;
- (void)dealloc;
- (long long)defaultProductDataUpdateAssetSource;
- (id)defaultUARPController;
- (id)defaultUARPControllerDelegate;
- (long long)defaultUpdateAssetSourceWithAccessory:(id)arg1;
- (id)documentationPath;
- (id)findHMDHAPAccessoryWithUARPAccessory:(id)arg1;
- (void)handleAccessoryFirmwareVersionUpdateNotification:(id)arg1;
- (void)handleHomeAccessoryRemovedNotification:(id)arg1;
- (void)handleMatterSettingsUpdateNotification:(id)arg1;
- (bool)hasReachedMaximumFirmwareUpdateRetriesForAccessory:(id)arg1 assetID:(id)arg2;
- (id)homeManager;
- (id)init;
- (id)initWithHomeManager:(id)arg1;
- (id)initWithHomeManager:(id)arg1 wingman:(id)arg2;
- (bool)isAccessoryRegistered:(id)arg1;
- (bool)isFirmwareUpdateRetryAllowedForAccessory:(id)arg1 forAsset:(id)arg2;
- (id)logEventManager;
- (id)matterUARPController;
- (id)matterUARPControllerDelegate;
- (bool)registerAccessory:(id)arg1;
- (id)registeredAccessories;
- (void)removeSession:(id)arg1;
- (void)rescindStagedAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)resetFirmwareUpdateAccessoryRetryTracking:(id)arg1 forAsset:(id)arg2;
- (id)sessionForAccessory:(id)arg1;
- (id)sessionForUARPAccessory:(id)arg1;
- (void)setAccessoryRetries:(id)arg1;
- (void)setActiveSessions:(id)arg1;
- (void)setRegisteredAccessories:(id)arg1;
- (void)setStatusTimer:(id)arg1;
- (void)startStatusTimer;
- (bool)startUARPPacketCapture:(id)arg1;
- (id)statusTimer;
- (void)stopUARPPacketCapture;
- (bool)supportsFirmwareUpdate;
- (void)timerDidFire:(id)arg1;
- (void)unregisterAccessory:(id)arg1;
- (id)wingman;
- (id)workQueue;

@end
