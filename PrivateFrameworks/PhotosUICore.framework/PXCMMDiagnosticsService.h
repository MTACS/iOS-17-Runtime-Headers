
@interface PXCMMDiagnosticsService : PXDiagnosticsService

- (bool)canProvideConsoleDescription;
- (bool)canProvideContextualViewController;
- (bool)canProvideSettingsViewController;
- (id)contextualViewController;
- (id)settingsViewController;
- (id)title;

@end
