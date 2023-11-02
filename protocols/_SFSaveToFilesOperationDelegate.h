
@protocol _SFSaveToFilesOperationDelegate <NSObject>

@required

- (void)saveToFilesOperation:(_SFSaveToFilesOperation *)arg1 didFinishWithSuccess:(bool)arg2;
- (void)saveToFilesOperation:(_SFSaveToFilesOperation *)arg1 presentViewController:(UIViewController *)arg2;

@optional

- (_SFActivityItemCustomizationController *)customizationControllerForSaveToFilesOperation:(_SFSaveToFilesOperation *)arg1;
- (bool)saveToFilesOperationShouldDismissViewControllerAfterCompletion:(_SFSaveToFilesOperation *)arg1;
- (bool)saveToFilesOperationSupportsDownloads:(_SFSaveToFilesOperation *)arg1;

@end
