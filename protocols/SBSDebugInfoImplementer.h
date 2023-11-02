
@protocol SBSDebugInfoImplementer <NSObject>

@required

- (void)clearHomeSWUpdate;
- (void)disassociateCurrentNetwork;
- (void)disassociateNetworkWithName:(NSString *)arg1;
- (void)getAllDebugInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getFeatureFlags:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getLEDInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getSelectDebugInfo:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getTuningInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getUserDefaults:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getVolume:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (void)injectSWUpdateToHome:(NSDictionary *)arg1;
- (void)playTone:(unsigned int)arg1;
- (void)render:(NSDictionary *)arg1;
- (void)resetAllUserDefaults;
- (void)resetUserDefault:(NSString *)arg1;
- (void)sendButtonCommand:(NSData *)arg1;
- (void)sendLEDCommand:(NSString *)arg1;
- (void)setBootSpinner:(bool)arg1;
- (void)setFeatureFlags:(NSArray *)arg1;
- (void)setHomeUpdateState:(long long)arg1;
- (void)setLEDContents:(NSArray *)arg1;
- (void)setTuningInfoOnBox:(NSString *)arg1 at:(NSString *)arg2 withValue:(float)arg3;
- (void)setUserDefaults:(NSString *)arg1 withValue:(NSString *)arg2;
- (void)setVolume:(float)arg1;
- (void)setWifiEnabled:(bool)arg1;
- (void)siriSay:(NSString *)arg1;
- (void)stopTone:(unsigned int)arg1;
- (void)suScanForSoftwareUpdate;
- (void)triggerWiFiCoreCapture:(NSString *)arg1;

@end
