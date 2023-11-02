
@interface HDAudioAnalyticsSettingsPreferences : NSObject

- (bool)_hasPairedWatchWithNoiseApp;
- (id)headphonePreferences;
- (id)headphonePreferencesForActivePairedWatch;
- (id)headphonePreferencesForLocalDevice;
- (id)noisePreferences;

@end
