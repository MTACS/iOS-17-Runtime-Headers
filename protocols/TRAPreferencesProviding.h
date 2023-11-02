
@protocol TRAPreferencesProviding <NSObject>

@required

- (TRAPreferencesOrientation *)orientationPreferences;
- (TRAPreferencesZOrderLevel *)zOrderLevelPreferences;

@end
