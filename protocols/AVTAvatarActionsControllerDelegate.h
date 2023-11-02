
@protocol AVTAvatarActionsControllerDelegate <NSObject>

@required

- (void)actionsController:(id <AVTAvatarActionsController>)arg1 didAddRecord:(id <AVTAvatarRecord>)arg2;
- (void)actionsController:(id <AVTAvatarActionsController>)arg1 didCancelEditingRecord:(id <AVTAvatarRecord>)arg2;
- (void)actionsController:(void *)arg1 didDeleteRecord:(void *)arg2 withRecordUpdate:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 8: <AVTAvatarActionsController> *, <AVTAvatarRecord> *, AVTAvatarActionsRecordUpdate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)actionsController:(void *)arg1 didDuplicateToRecord:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 7: <AVTAvatarActionsController> *, <AVTAvatarRecord> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)actionsController:(id <AVTAvatarActionsController>)arg1 didEditRecord:(id <AVTAvatarRecord>)arg2;
- (void)actionsController:(id <AVTAvatarActionsController>)arg1 presentAlertController:(UIAlertController *)arg2;
- (void)dismissEditorViewController:(void *)arg1 forActionsController:(void *)arg2 wasCreate:(void *)arg3 didEdit:(void *)arg4 animated:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 10: AVTAvatarEditorViewController *, <AVTAvatarActionsController> *, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentEditorViewController:(AVTAvatarEditorViewController *)arg1 forActionsController:(id <AVTAvatarActionsController>)arg2 isCreate:(bool)arg3;

@optional

- (void)actionsControllerDidFinish:(id <AVTAvatarActionsController>)arg1;
- (void)actionsControllerDidUpdateActions:(id <AVTAvatarActionsController>)arg1;

@end
