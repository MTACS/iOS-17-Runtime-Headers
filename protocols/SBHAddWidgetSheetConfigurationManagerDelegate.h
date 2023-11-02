
@protocol SBHAddWidgetSheetConfigurationManagerDelegate <NSObject>

@required

- (NSString *)addWidgetSheetConfigurationManager:(SBHAddWidgetSheetConfigurationManager *)arg1 vendorNameForAppWithBundleIdentifier:(NSString *)arg2;
- (UIViewController<SBHMainAddSheetViewControlling> *)addWidgetSheetViewControllerForAddWidgetSheetConfigurationManager:(SBHAddWidgetSheetConfigurationManager *)arg1;

@optional

- (SBHomeScreenDefaults *)homeScreenDefaultsForAddWidgetSheetConfigurationManager:(SBHAddWidgetSheetConfigurationManager *)arg1;
- (unsigned long long)iconGridSizeClassMaskForWidgetFamilyMask:(unsigned long long)arg1;
- (SBRootFolder *)rootFolderForAddWidgetSheetConfigurationManager:(SBHAddWidgetSheetConfigurationManager *)arg1;

@end
