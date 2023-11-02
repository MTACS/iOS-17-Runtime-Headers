
@protocol PXSharedLibraryParticipantTableViewControllerDelegate <NSObject>

@required

- (void)dismissPresentedViewControllerAnimated:(bool)arg1 forSharedLibraryParticipantTableViewController:(PXSharedLibraryParticipantTableViewController *)arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(bool)arg2 forSharedLibraryParticipantTableViewController:(PXSharedLibraryParticipantTableViewController *)arg3;
- (void)sharedLibraryParticipantTableViewControllerDidChangeHeight:(PXSharedLibraryParticipantTableViewController *)arg1;

@end
