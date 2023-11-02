
@protocol SBSImplementerInternal <NSObject>

@required

- (void)clearHomeSWUpdateInternal;
- (void)disassociateCurrentNetworkInternal;
- (void)disassociateNetworkWithNameInternal:(NSString *)arg1;
- (void)getAllDebugInfoInternal:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getAllSyncedAlarmsAndTimersInternal:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getFeatureFlagsInternal:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getInstalledProfilesInternal:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getLEDInfoInternal:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getPowerEstimateForIntervalInternal:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, float, void*
- (void)getSelectDebugInfoInternal:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getTuningInfoInternal:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getUserDefaultsInternal:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getVolumeInternal:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (void)handoffCancelInternalWithHandoffType:(unsigned long long)arg1;
- (void)handoffCompleteInternalWithHandoffType:(unsigned long long)arg1;
- (void)handoffStartInternalWithHandoffType:(unsigned long long)arg1;
- (void)handoffStartWithArtworkColorsInternal:(NSData *)arg1 handoffType:(unsigned long long)arg2;
- (void)handoffUpdateIntensityInternal:(float)arg1 handoffType:(unsigned long long)arg2;
- (void)identifyWithOptionsInternal:(NSDictionary *)arg1;
- (void)injectSWUpdateToHomeInternal:(NSDictionary *)arg1;
- (void)installProfileDataInternal:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)intercomWithOptionsInternal:(NSDictionary *)arg1;
- (void)isDeviceStereoFollowerInternal:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)isMediaAlarmInternal:(NSString *)arg1;
- (void)obliterateInternal:(NSDictionary *)arg1;
- (void)playToneInternal:(unsigned int)arg1;
- (void)rebootInternal:(NSDictionary *)arg1;
- (void)removeProfileByIdentifierInternal:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)renderInternal:(NSDictionary *)arg1;
- (void)requestDeferredRebootInternal;
- (void)resetAllUserDefaultsInternal;
- (void)resetUserDefaultInternal:(NSString *)arg1;
- (void)sendButtonCommandInternal:(NSData *)arg1;
- (void)sendLEDCommandInternal:(NSString *)arg1;
- (void)setBootSpinnerInternal:(bool)arg1;
- (void)setDeviceAsStereoLeaderInternal:(bool)arg1 withOptions:(NSDictionary *)arg2;
- (void)setFeatureFlagsInternal:(NSArray *)arg1;
- (void)setHomeUpdateStateInternal:(long long)arg1;
- (void)setLEDContentsInternal:(NSArray *)arg1;
- (void)setTuningInfoOnBoxInternal:(NSString *)arg1 at:(NSString *)arg2 withValue:(float)arg3;
- (void)setUserDefaultsInternal:(NSString *)arg1 withValue:(NSString *)arg2;
- (void)setVolumeInternal:(float)arg1;
- (void)setWifiEnabledInternal:(bool)arg1;
- (void)siriSayInternal:(NSString *)arg1;
- (void)stopToneInternal:(unsigned int)arg1;
- (void)suScanForSoftwareUpdateInternal;
- (void)sysdiagnoseHasStartedInternal:(bool)arg1;
- (void)triggerWiFiCoreCaptureInternal:(NSString *)arg1;

@end
