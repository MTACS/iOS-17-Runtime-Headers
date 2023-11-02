
@protocol SBHWidgetStackViewControllerDataSource <NSObject>

@required

- (NSString *)widgetStackViewController:(SBHWidgetStackViewController *)arg1 containerApplicationNameForDataSource:(id <SBLeafIconDataSource>)arg2;
- (NSString *)widgetStackViewController:(SBHWidgetStackViewController *)arg1 containerBundleIdentifierForDataSource:(id <SBLeafIconDataSource>)arg2;
- (bool)widgetStackViewController:(SBHWidgetStackViewController *)arg1 isDataSourceBlockedForScreenTimeExpiration:(id <SBLeafIconDataSource>)arg2;
- (UIViewController *)widgetStackViewController:(SBHWidgetStackViewController *)arg1 viewControllerForDataSource:(id <SBLeafIconDataSource>)arg2;

@end
