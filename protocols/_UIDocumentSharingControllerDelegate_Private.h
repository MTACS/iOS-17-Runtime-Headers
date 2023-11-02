
@protocol _UIDocumentSharingControllerDelegate_Private <NSObject>

@optional

- (void)_cloudSharingControllerDidChooseTransport:(UIDocumentSharingController *)arg1 transport:(NSString *)arg2;
- (void)_documentSharingControllerDidDismiss:(UIDocumentSharingController *)arg1;
- (void)_documentSharingControllerDidModifyShare:(UIDocumentSharingController *)arg1;
- (void)_documentSharingControllerDidStopSharing:(UIDocumentSharingController *)arg1;
- (void)_documentSharingControllerPerformAuxiliaryAction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: UIDocumentSharingController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
