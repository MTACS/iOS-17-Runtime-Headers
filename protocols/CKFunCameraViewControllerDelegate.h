
@protocol CKFunCameraViewControllerDelegate <NSObject>

@required

- (void)didDismissFunCamera:(CKFunCameraViewController *)arg1;
- (void)presentPhotosApp;
- (void)stageAssetArchive:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startCommitPayload:(CKBrowserItemPayload *)arg1 forConversation:(CKConversation *)arg2;
- (void)startDeferredEditingPayload:(CKBrowserItemPayload *)arg1 forConversation:(CKConversation *)arg2;
- (void)willDismissFunCamera:(CKFunCameraViewController *)arg1;

@end
