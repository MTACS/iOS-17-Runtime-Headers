
@protocol LibraryViewControllerDelegate <NSObject>

@optional

- (void)libraryViewController:(LibraryViewController *)arg1 didSelectItem:(LibraryItemController *)arg2;
- (bool)libraryViewController:(LibraryViewController *)arg1 shouldPersistSelectionForItem:(LibraryItemController *)arg2;
- (void)libraryViewControllerDidClearSelection:(LibraryViewController *)arg1;

@end
