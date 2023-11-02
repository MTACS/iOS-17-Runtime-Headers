
@protocol SBHLibrarySearchControllerDelegate <NSObject>

@optional

- (void)didDismissSearchController:(SBHLibrarySearchController *)arg1;
- (void)didPresentSearchController:(SBHLibrarySearchController *)arg1;
- (void)willDismissSearchController:(SBHLibrarySearchController *)arg1;
- (void)willPresentSearchController:(SBHLibrarySearchController *)arg1;

@end
