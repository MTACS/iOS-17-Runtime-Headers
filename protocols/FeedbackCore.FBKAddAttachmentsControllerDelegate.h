
@protocol FeedbackCore.FBKAddAttachmentsControllerDelegate

@required

- (void)attachmentsAlert:(void *)arg1 needsDeviceDiagnosticsController:(void *)arg2; // needs 2 arg types, found 7: _TtC12FeedbackCore27FBKAddAttachmentsController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBKDeviceDiagnosticsController *, void*
- (bool)isReadyForDropSessionFromController:(_TtC12FeedbackCore27FBKAddAttachmentsController *)arg1 tableView:(UITableView *)arg2 dropSessionDidUpdate:(id <UIDropSession>)arg3 withDestinationIndexPath:(NSIndexPath *)arg4;

@optional

- (void)attachmentsAlertDidSelectOption:(_TtC12FeedbackCore27FBKAddAttachmentsController *)arg1;

@end
