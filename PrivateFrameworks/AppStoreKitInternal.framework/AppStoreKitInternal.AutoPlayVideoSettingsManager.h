
@interface AppStoreKitInternal.AutoPlayVideoSettingsManager : NSObject <AMSUIMediaContentDelegate> {
    void autoPlayUserSetting;
    void autoPlayVideoSettingKey;
    void defaultAutoPlayVideoSetting;
    void fullScreenAudioSettingsTimeoutMinutes;
    void lastLowPowerModeValueKey;
    void lastMotionAutoPlayVideoValueKey;
    void lastUserSetAutoPlayVideoValueKey;
    void lowPowerModeSetLastAutoPlayVideoValueKey;
    void motionAutoPlayVideoSetLastAutoPlayVideoValueKey;
    void networkInquiry;
    void networkIsConstrained;
    void networkMayUseCellular;
    void networkObservation;
    void settingsChangeNotificationNeeded;
    void userSetAutoPlayVideoSettingKey;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)isAutoPlayAllowed;
- (bool)isVideoAudioEnabled;
- (void)restoreFullScreenAudioSettings;
- (void)saveFullScreenAudioSettings;
- (void)updateAutoPlayVideoSettings;

@end
