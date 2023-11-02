
@protocol WBSExtensionsControllerDelegate

@required

- (void)extensionBaseURIMapChangedForExtensionsController:(WBSExtensionsController *)arg1;
- (void)extensionsController:(WBSExtensionsController *)arg1 closeOpenExtensionTabsInPrivateBrowsingWithBaseURI:(NSURL *)arg2;
- (void)extensionsController:(WBSExtensionsController *)arg1 closeOpenExtensionTabsWithBaseURI:(NSURL *)arg2;

@end
