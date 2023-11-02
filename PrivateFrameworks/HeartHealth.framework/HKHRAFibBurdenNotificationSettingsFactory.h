
@interface HKHRAFibBurdenNotificationSettingsFactory : NSObject {
    HKFeatureStatus * _featureStatus;
}

@property (nonatomic, retain) HKFeatureStatus *featureStatus;

- (void).cxx_destruct;
- (id)_deviceRegionGatedBridgeSettingFooter;
- (id)_deviceRegionGatedWatchSettingFooter;
- (id)_evaluationForIsOnboarded:(bool)arg1;
- (id)_genericBridgeSettingFooter;
- (id)_genericWatchSettingFooter;
- (id)_irnEnabledBridgeSettingFooter;
- (id)_irnEnabledWatchSettingFooter;
- (bool)_isFeatureOnboardedAndAvailableWithIsOnboarded:(bool)arg1 requirementsEvaluation:(id)arg2;
- (bool)_isOnboarded;
- (id)_remoteDisabledBridgeSettingFooter;
- (id)_remoteDisabledWatchSettingFooter;
- (id)_seedExpiryBridgeSettingFooter;
- (id)_seedExpiryWatchSettingFooter;
- (id)_wristDetectDisabledBridgeSettingFooter;
- (id)bridgeSettings;
- (id)featureStatus;
- (id)initWithFeatureStatus:(id)arg1;
- (void)setFeatureStatus:(id)arg1;
- (id)watchSettings;

@end
