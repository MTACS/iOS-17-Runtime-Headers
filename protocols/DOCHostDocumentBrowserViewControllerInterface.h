
@protocol DOCHostDocumentBrowserViewControllerInterface

@required

- (void)_commitDocumentURLPreview:(DOCItemBookmark *)arg1;
- (void)_didImportDocumentAtURL:(NSURL *)arg1 toDestinationItemBookmark:(DOCItemBookmark *)arg2;
- (void)_didPickItemBookmarks:(NSArray *)arg1;
- (void)_didRequestDocumentCreationWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPSandboxingURLWrapper *, unsigned long long, void*
- (void)_didTriggerBarButtonWithUUID:(NSUUID *)arg1;
- (void)_didTriggerCustomActionWithIdentifier:(NSString *)arg1 onItemBookmarks:(NSArray *)arg2;
- (void)_documentPickerWasCancelled;
- (void)_failedToImportDocumentAtURL:(NSURL *)arg1 error:(NSError *)arg2;
- (void)_presentActivityViewControllerForItemBookmarks:(NSArray *)arg1 withPopoverTracker:(id <DOCServicePopoverTrackerProtocol>)arg2 isContentManaged:(bool)arg3 additionalActivities:(NSArray *)arg4 activityProxy:(id <DOCItemActivityPerformer>)arg5;
- (void)_updateRemoteBarButtonFrames:(NSArray *)arg1 forUUID:(NSArray *)arg2;

@end
