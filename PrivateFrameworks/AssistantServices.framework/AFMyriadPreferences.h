
@interface AFMyriadPreferences : NSObject {
    AFInstanceContext * _instanceContext;
    AFPreferences * _pref;
}

- (void).cxx_destruct;
- (bool)BLEActivityEnabled;
- (int)constantGoodnessScore;
- (bool)coordinationEnabled;
- (bool)coordinationEnabledForAccessoryLogging;
- (float)deviceAdjust;
- (unsigned char)deviceClass;
- (double)deviceDelay;
- (unsigned char)deviceGroup;
- (double)deviceSlowDown;
- (double)deviceTrumpDelay;
- (void)enableCoordination:(bool)arg1;
- (bool)ignoreAdjustedBoost;
- (bool)ignorePlatformBias;
- (id)initWithDeviceInstanceContext:(id)arg1 preferences:(id)arg2;
- (double)maxNoOperationDelay;
- (bool)myriadServerHasProvisioned;
- (void)setConstantGoodnessScore:(int)arg1;
- (void)setDeviceAdjust:(float)arg1;
- (void)setDeviceClass:(unsigned char)arg1;
- (void)setDeviceDelay:(double)arg1;
- (void)setDeviceGroup:(unsigned char)arg1 completion:(id /* block */)arg2;
- (void)setDeviceSlowDown:(double)arg1;
- (void)setDeviceTrumpDelay:(double)arg1;
- (void)setIgnoreAdjustedBoost:(bool)arg1;
- (void)setIgnorePlatformBias:(bool)arg1;
- (void)setMaxNoOperationDelay:(double)arg1;
- (void)setTestDeviceDelay:(double)arg1;
- (void)setVoiceTriggerEndtimeDelayThreshold:(double)arg1;
- (double)testDeviceDelay;
- (double)voiceTriggerEndtimeDelayThreshold;

@end
