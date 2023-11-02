
@protocol TRASettingsProviding <NSObject>

@required

- (TRASettings *)currentSettings;
- (TRASettings *)previousSettings;

@end
