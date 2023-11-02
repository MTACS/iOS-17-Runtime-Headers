
@protocol SBHLibraryViewControllerObserver <NSObject>

@optional

- (void)libraryViewController:(SBHLibraryViewController *)arg1 dataSourceDidChange:(SBHLibraryCategoriesFolderDataSource *)arg2;
- (void)libraryViewController:(SBHLibraryViewController *)arg1 didAcceptDrop:(id <UIDropSession>)arg2;
- (void)libraryViewController:(SBHLibraryViewController *)arg1 didDismissSearchController:(SBHLibrarySearchController *)arg2;
- (void)libraryViewController:(SBHLibraryViewController *)arg1 didPresentSearchController:(SBHLibrarySearchController *)arg2;
- (void)libraryViewController:(SBHLibraryViewController *)arg1 willDismissFolderController:(SBFolderController *)arg2;
- (void)libraryViewController:(SBHLibraryViewController *)arg1 willDismissSearchController:(SBHLibrarySearchController *)arg2;
- (void)libraryViewController:(SBHLibraryViewController *)arg1 willLaunchIcon:(SBIcon *)arg2 fromLocation:(NSString *)arg3;
- (void)libraryViewController:(SBHLibraryViewController *)arg1 willPresentFolderController:(SBFolderController *)arg2;
- (void)libraryViewController:(SBHLibraryViewController *)arg1 willPresentSearchController:(SBHLibrarySearchController *)arg2;
- (void)libraryViewControllerDidDismiss:(SBHLibraryViewController *)arg1;
- (void)libraryViewControllerDidPresent:(SBHLibraryViewController *)arg1;
- (void)libraryViewControllerWillDismiss:(SBHLibraryViewController *)arg1;
- (void)libraryViewControllerWillPresent:(SBHLibraryViewController *)arg1;

@end
