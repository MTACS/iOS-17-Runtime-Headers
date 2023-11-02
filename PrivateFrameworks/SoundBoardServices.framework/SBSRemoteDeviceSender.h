
@interface SBSRemoteDeviceSender : NSObject <SBSImplementer> {
    RPCompanionLinkClient * _client;
    NSString * _destinationID;
    NSObject<OS_dispatch_queue> * _rapportQueue;
}

@property (retain) RPCompanionLinkClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *destinationID;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_queue> *rapportQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearHomeSWUpdate;
- (id)client;
- (id)destinationID;
- (void)disassociateCurrentNetwork;
- (void)disassociateNetworkWithName:(id)arg1;
- (void)fetchLatestSignposts:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)getAllDebugInfo:(id /* block */)arg1;
- (void)getAllSyncedAlarmsAndTimers:(id /* block */)arg1;
- (void)getFeatureFlags:(id /* block */)arg1;
- (void)getInstalledProfiles:(id /* block */)arg1;
- (void)getLEDInfo:(id /* block */)arg1;
- (void)getPowerEstimateForInterval:(float)arg1 reply:(id /* block */)arg2;
- (void)getSelectDebugInfo:(id)arg1 reply:(id /* block */)arg2;
- (void)getTuningInfo:(id /* block */)arg1;
- (void)getUserDefaults:(id /* block */)arg1;
- (void)getVolume:(id /* block */)arg1;
- (void)handoffCancelWithHandoffType:(unsigned long long)arg1;
- (void)handoffCompleteWithHandoffType:(unsigned long long)arg1;
- (void)handoffSetDeviceAsStereoLeader:(bool)arg1 withOptions:(id)arg2;
- (void)handoffStartWithArtworkColors:(id)arg1 handoffType:(unsigned long long)arg2;
- (void)handoffStartWithHandoffType:(unsigned long long)arg1;
- (void)handoffUpdateIntensity:(float)arg1 handoffType:(unsigned long long)arg2;
- (void)identifyWithOptions:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)injectSWUpdateToHome:(id)arg1;
- (void)installProfileData:(id)arg1 completion:(id /* block */)arg2;
- (void)intercomWithOptions:(id)arg1;
- (void)isDeviceStereoFollower:(id /* block */)arg1;
- (bool)isMediaAlarm:(id)arg1;
- (void)obliterate:(id)arg1;
- (void)playTone:(unsigned int)arg1;
- (id)rapportQueue;
- (void)reboot:(id)arg1;
- (void)removeProfileByIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)render:(id)arg1;
- (void)requestDeferredReboot;
- (void)resetAllUserDefaults;
- (void)resetUserDefault:(id)arg1;
- (void)sendButtonCommand:(id)arg1;
- (void)sendLEDCommand:(id)arg1;
- (void)setBootSpinner:(bool)arg1;
- (void)setClient:(id)arg1;
- (void)setDestinationID:(id)arg1;
- (void)setDeviceAsStereoLeader:(bool)arg1 withOptions:(id)arg2;
- (void)setFeatureFlags:(id)arg1;
- (void)setHomeUpdateState:(long long)arg1;
- (void)setLEDContents:(id)arg1;
- (void)setRapportQueue:(id)arg1;
- (void)setTuningInfoOnBox:(id)arg1 at:(id)arg2 withValue:(float)arg3;
- (void)setTurnOffBrightnessFactor:(bool)arg1;
- (void)setUserDefaults:(id)arg1 withValue:(id)arg2;
- (void)setVolume:(float)arg1;
- (void)setWifiEnabled:(bool)arg1;
- (void)siriSay:(id)arg1;
- (void)stopTone:(unsigned int)arg1;
- (void)suScanForSoftwareUpdate;
- (void)sysdiagnoseHasStarted:(bool)arg1;
- (void)triggerWiFiCoreCapture:(id)arg1;

@end
