
@interface PXGraphDiagnosticsService : PXDiagnosticsService

+ (id)viewControllerForDetailsOfAsset:(id)arg1;

- (bool)canProvideConsoleDescription;
- (bool)canProvideContextualViewController;
- (bool)canProvideSettingsViewController;
- (id)contextualViewController;
- (id)saliencyStringForAsset:(id)arg1;
- (id)settingsViewController;
- (id)title;

@end
