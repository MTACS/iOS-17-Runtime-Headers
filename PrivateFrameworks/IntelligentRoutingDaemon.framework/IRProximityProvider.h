
@interface IRProximityProvider : NSObject <IRProximityBridgeDelegateProtocol> {
    NSMutableSet * _cachedNearbyDevices;
    NSDate * _freezeDateNIHomeDevice;
    bool  _isUwbFenceSessionStarted;
    NSHashTable * _observers;
    NSMutableDictionary * _proximityBridges;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _retryCountPerProximityType;
    IRCMPDRFenceBridge * _uwbFenceBridge;
}

@property (nonatomic, retain) NSMutableSet *cachedNearbyDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *freezeDateNIHomeDevice;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isUwbFenceSessionStarted;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSMutableDictionary *proximityBridges;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *retryCountPerProximityType;
@property (readonly) Class superclass;
@property (nonatomic, retain) IRCMPDRFenceBridge *uwbFenceBridge;

+ (bool)didContainer:(id)arg1 changeWithUpdatetContainer:(id)arg2 andRangeThreshold:(double)arg3;
+ (bool)isBLEProximityType:(id)arg1;
+ (bool)isUWBProximityType:(id)arg1;

- (void).cxx_destruct;
- (void)_filterDevicesWithNearbyDevice:(id)arg1;
- (void)_incrementRetryCount:(id)arg1;
- (void)_inspectNearbyDevicesAndSetPedestrianFenceSessionState:(id)arg1;
- (void)_invalidateAndNullifyAllBridges;
- (void)_invalidateBridge:(id)arg1;
- (bool)_isPdedestrianFenceAvailable;
- (void)_removeAllDevicesForProximityType:(id)arg1;
- (void)_removeAllUwbDevicesAndClearFence;
- (void)_resetRetryCount:(id)arg1;
- (void)_setupAndRunAllBridges;
- (void)_setupAndRunBridge:(id)arg1;
- (void)_setupNIDevicePresenceBridgeIfNeeded;
- (void)_setupNIHomeDeviceObserverBridgeIfNeeded;
- (void)_setupProxControlSessionIfNeeded;
- (void)_updateObservers:(id)arg1 withDevices:(id)arg2 andProvider:(id)arg3;
- (void)addObserver:(id)arg1;
- (id)cachedNearbyDevices;
- (void)didBridgeFail:(id)arg1;
- (void)didBridgeRunSuccesfully:(id)arg1;
- (void)didBridgeSuspendEndedWithName:(id)arg1;
- (void)didBridgeSuspendStartedWithName:(id)arg1;
- (void)didInvalidateAllDevices:(id)arg1;
- (void)didRemoveDevice:(id)arg1 withName:(id)arg2;
- (void)didUpdateNearbyDevice:(id)arg1 withName:(id)arg2;
- (id)freezeDateNIHomeDevice;
- (id)init;
- (bool)isUwbFenceSessionStarted;
- (id)observers;
- (id)proximityBridges;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (id)retryCountPerProximityType;
- (void)setCachedNearbyDevices:(id)arg1;
- (void)setFreezeDateNIHomeDevice:(id)arg1;
- (void)setIsUwbFenceSessionStarted:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setProximityBridges:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRetryCountPerProximityType:(id)arg1;
- (void)setUwbFenceBridge:(id)arg1;
- (id)uwbFenceBridge;

@end
