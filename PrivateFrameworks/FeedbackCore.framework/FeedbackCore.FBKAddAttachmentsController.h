
@interface FeedbackCore.FBKAddAttachmentsController : NSObject <UIDocumentPickerDelegate, UITableViewDropDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_temporaryDirectory;
    void attachmentDelegate;
}

+ (void)handleErrorAttachingWithAttachment:(id)arg1 viewController:(id)arg2 devicesDiagnosticsController:(id)arg3 error:(id)arg4;

- (void).cxx_destruct;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)getFilesFromFileProviderBeforeTheyDisappearWithCoordinator:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)menuForController:(id)arg1;
- (id)sheetForController:(id)arg1 selectedIndexPath:(id)arg2 sender:(id)arg3;
- (bool)tableView:(id)arg1 canHandleDropSession:(id)arg2;
- (id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;

@end
