
@protocol SBTraitsSceneSettingsUpdater <NSObject>

@required

- (bool)needsActuationForUpdateReasons:(long long)arg1;
- (void)updateOrientationSceneSettingsForParticipant:(UIMutableApplicationSceneSettings *)arg1;

@end
