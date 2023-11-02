
@protocol SBHIconLibraryTableViewControllerObserver <NSObject>

@required

- (void)libraryTableViewControllerDidAppear:(SBHIconLibraryTableViewController *)arg1;
- (void)libraryTableViewControllerDidLaunchIcon:(SBIcon *)arg1;
- (void)libraryTableViewControllerWillDisappear:(SBHIconLibraryTableViewController *)arg1;

@end
