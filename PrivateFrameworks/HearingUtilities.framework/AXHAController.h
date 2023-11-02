
@interface AXHAController : NSObject <AXHALiveListenDelegate, HUNearbyHearingAidControllerDelegate> {
    AXAudioHalController * _audioHalController;
    NSDictionary * _availableControllersPayload;
    NSDictionary * _availableDevicesDescription;
    bool  _isListening;
    AXDispatchTimer * _liveListenLevelsTimer;
    HCXPCMessage * _liveListenMessage;
    NSString * _pairedDeviceUUID;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, retain) AXAudioHalController *audioHalController;
@property (nonatomic, retain) NSDictionary *availableControllersPayload;
@property (nonatomic, retain) NSDictionary *availableDevicesDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HCXPCMessage *liveListenMessage;
@property (nonatomic, retain) NSString *pairedDeviceUUID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

+ (id)descriptionForHandoffReason:(long long)arg1;
+ (id)sharedController;

- (void).cxx_destruct;
- (id)_liveListenPayloadWithState:(long long)arg1 audioLevel:(float)arg2;
- (id)_registerForLiveListenUpdates_boolValue:(id)arg1;
- (id)_registerForLiveListenUpdates_enumValue:(id)arg1;
- (id)_toggleLiveListen_boolValue:(id)arg1;
- (id)_toggleLiveListen_enumValue:(id)arg1;
- (id)audioHalController;
- (id)availableControllersPayload;
- (id)availableDevicesDescription;
- (void)availableRemoteControllersDidChange;
- (void)cleanUp;
- (id)connectToControllerWithID:(id)arg1;
- (void)connectToPairedDevice;
- (id)currentDeviceController;
- (void)dealloc;
- (id)disconnectAndForceClient:(id)arg1;
- (bool)hearingAidsIsLEA2:(id)arg1;
- (bool)hearingAidsPaired;
- (id)init;
- (id)liveListenController;
- (void)liveListenControllerStateDidChange;
- (id)liveListenMessage;
- (id)pairedDeviceUUID;
- (id)readAvailableControllers:(id)arg1;
- (id)readAvailableDevices:(id)arg1;
- (id)readDeviceProperty:(id)arg1;
- (void)readLiveListenLevels;
- (id)registerForAvailableDevicesUpdates:(id)arg1;
- (id)registerForControlMessageUpdates:(id)arg1;
- (id)registerForDeviceUpdates:(id)arg1;
- (id)registerForLiveListenUpdates:(id)arg1;
- (void)sendAvailabilityDidChangeNotification;
- (void)sendUpdatesForProperties:(id)arg1 excludingClient:(id)arg2;
- (void)setAudioHalController:(id)arg1;
- (void)setAvailableControllersPayload:(id)arg1;
- (void)setAvailableDevicesDescription:(id)arg1;
- (void)setListenForAvailableDeviceUpdates:(bool)arg1;
- (void)setLiveListenMessage:(id)arg1;
- (void)setPairedDeviceUUID:(id)arg1;
- (void)setPairedHearingAidID:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)toggleLiveListen:(id)arg1;
- (id)transaction;
- (void)transitionToPeer;
- (void)updateNearbyDeviceAvailabilityWithForce:(bool)arg1;
- (void)willSwitchUser;
- (id)writeDeviceProperty:(id)arg1;

@end
