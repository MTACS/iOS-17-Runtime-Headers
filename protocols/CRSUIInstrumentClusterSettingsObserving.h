
@protocol CRSUIInstrumentClusterSettingsObserving <NSObject>

@optional

- (void)updateSceneForNewCompassSetting;
- (void)updateSceneForNewETASetting;
- (void)updateSceneForNewItemTypeSetting;
- (void)updateSceneForNewSpeedLimitSetting;

@end
