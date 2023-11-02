
@protocol HMSettingsContainer <NSObject>

@required

- (HMSettings *)privateSettings;
- (HMSettings *)settings;
- (bool)settingsInitialized;

@end
