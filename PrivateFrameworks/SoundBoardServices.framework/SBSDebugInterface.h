
@interface SBSDebugInterface : NSObject {
    NSXPCConnection * _sbConnection;
    <SBSDebugInfoImplementer> * _sbProxy;
}

- (void).cxx_destruct;
- (void)clearHomeSWUpdate;
- (void)dealloc;
- (void)disassociateCurrentNetwork;
- (void)disassociateNetworkWithName:(id)arg1;
- (void)getAllDebugInfo:(id /* block */)arg1;
- (void)getFeatureFlags:(id /* block */)arg1;
- (void)getLEDInfo:(id /* block */)arg1;
- (void)getSelectDebugInfo:(id)arg1 reply:(id /* block */)arg2;
- (void)getTuningInfo:(id /* block */)arg1;
- (void)getUserDefaults:(id /* block */)arg1;
- (void)getVolume:(id /* block */)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)injectSWUpdateToHome:(id)arg1;
- (void)playTone:(unsigned int)arg1;
- (void)render:(id)arg1;
- (void)resetAllUserDefaults;
- (void)resetUserDefault:(id)arg1;
- (void)sendButtonCommand:(id)arg1;
- (void)sendLEDCommand:(id)arg1;
- (void)setBootSpinner:(bool)arg1;
- (void)setFeatureFlags:(id)arg1;
- (void)setHomeUpdateState:(long long)arg1;
- (void)setLEDContents:(id)arg1;
- (void)setTuningInfoOnBox:(id)arg1 at:(id)arg2 withValue:(float)arg3;
- (void)setUserDefaults:(id)arg1 withValue:(id)arg2;
- (void)setVolume:(float)arg1;
- (void)setWifiEnabled:(bool)arg1;
- (void)siriSay:(id)arg1;
- (void)stopTone:(unsigned int)arg1;
- (void)suScanForSoftwareUpdate;
- (void)triggerWiFiCoreCapture:(id)arg1;

@end
