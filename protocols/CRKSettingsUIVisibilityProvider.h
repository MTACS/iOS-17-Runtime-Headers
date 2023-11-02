
@protocol CRKSettingsUIVisibilityProvider <NSObject>

@required

- (NSString *)paneStatus;
- (bool)settingsUIVisible;

@optional

- (void)connectToDaemon;

@end
