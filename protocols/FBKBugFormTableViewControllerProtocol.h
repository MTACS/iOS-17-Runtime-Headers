
@protocol FBKBugFormTableViewControllerProtocol

@required

- (void)controller:(FBKBugFormTableViewController *)arg1 didAttachLocalFile:(FBKAttachment *)arg2;
- (void)controller:(FBKBugFormTableViewController *)arg1 didClickSwitchAccountsWithCurrentUser:(FBKUser *)arg2;
- (void)controller:(FBKBugFormTableViewController *)arg1 didFailToLoadDraftWithError:(NSError *)arg2;
- (void)controller:(FBKBugFormTableViewController *)arg1 didFinishLoadingDraft:(FBKFormResponse *)arg2 devicesController:(FBKDeviceDiagnosticsController *)arg3 draftingController:(FBKDraftingController *)arg4;
- (void)controller:(FBKBugFormTableViewController *)arg1 didFinishSubmissionWithError:(NSError *)arg2;
- (void)controller:(FBKBugFormTableViewController *)arg1 didRequestDismissalWithSavedDraft:(bool)arg2;
- (void)controllerWillFinishSubmission:(FBKBugFormTableViewController *)arg1;
- (void)controllerWillResignFirstActive:(FBKBugFormTableViewController *)arg1;

@end
