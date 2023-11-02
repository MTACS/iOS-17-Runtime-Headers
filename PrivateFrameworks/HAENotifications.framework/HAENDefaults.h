
@interface HAENDefaults : NSObject {
    bool  _EUVolumeLimitFlag;
    bool  _SKVolumeLimitFlag;
    NSMutableDictionary * _domainSettings;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUserDefaults * _userDefaults;
}

+ (bool)HAENSupportedForCurrentDeviceClass;
+ (bool)isCurrentProcessMediaserverd;
+ (bool)isRunningCITests;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_generateAccessoryKeyWithManufacture:(id)arg1 andSerialNumber:(id)arg2;
- (void)_registerNotification:(id)arg1;
- (bool)_shouldRepromptSinceDate:(id)arg1;
- (void)_updateSetting:(id)arg1 value:(id)arg2 notify:(bool)arg3;
- (void)forceReadDefaults;
- (long long)getAudioAccessoryConnectionInfo;
- (long long)getAudioAccessoryConnectionInfoWithKey:(id)arg1;
- (double)getLiveMonitorTimeWindowInSeconds;
- (double)getLiveMonitoringThreshold;
- (int)getReduceLoudSoundThreshold;
- (id)init;
- (bool)isConnectedUnknownWiredDeviceHeadphone;
- (bool)isCurrentAudioAccessoryHeadphone;
- (bool)isCurrentAudioAccessoryHeadphoneWithKey:(id)arg1;
- (bool)isEUVolumeLimitOn;
- (bool)isHAENFeatureEnabled;
- (bool)isHAENFeatureMandatory;
- (bool)isHAENFeatureOptedIn;
- (bool)isHAEOtherDevicesEnabled;
- (bool)isHKWriteEnabled;
- (bool)isReduceLoudSoundEnabled;
- (bool)isSKVolumeLimitOn;
- (void)removeAllAdapters;
- (void)setAudioAccessoryIsConnectedToHeadphones:(long long)arg1 withKey:(id)arg2 name:(id)arg3;
- (void)setAudioAccessoryIsConnectedToHeadphones:(long long)arg1 withName:(id)arg2;
- (void)setUserVolumeWithValue:(float)arg1 mininum:(float)arg2;
- (bool)softwareVersionEnabled;
- (void)updateAudioAccessoryIsConnectedToHeadphones:(long long)arg1;
- (void)updateAudioAccessoryIsConnectedToHeadphones:(long long)arg1 WithKey:(id)arg2;
- (void)updateRLSSettings;
- (void)updateUserVolumeForVolumeLimit;
- (double)volumeReductionDelta;
- (void)wiredDeviceStatusDidChange;

@end
