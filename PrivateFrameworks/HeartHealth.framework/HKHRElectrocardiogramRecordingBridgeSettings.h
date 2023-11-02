
@interface HKHRElectrocardiogramRecordingBridgeSettings : NSObject {
    HKHRElectrocardiogramRecordingFooter * _footer;
    bool  _settingVisible;
    bool  _showOnboarding;
    bool  _userInteractionEnabled;
}

@property (nonatomic, readonly) HKHRElectrocardiogramRecordingFooter *footer;
@property (nonatomic, readonly) bool settingVisible;
@property (nonatomic, readonly) bool showOnboarding;
@property (nonatomic, readonly) bool userInteractionEnabled;

- (void).cxx_destruct;
- (bool)_featureOnboardedWithFeatureStatus:(id)arg1;
- (id)_footerWithFeatureStatus:(id)arg1 isAppInstalled:(bool)arg2;
- (bool)_isSettingsVisibleWithFeatureStatus:(id)arg1;
- (bool)_userInteractionEnabledWithFeatureStatus:(id)arg1;
- (id)footer;
- (id)initWithFeatureStatus:(id)arg1 isAppInstalled:(bool)arg2;
- (bool)settingVisible;
- (bool)showOnboarding;
- (bool)userInteractionEnabled;

@end
