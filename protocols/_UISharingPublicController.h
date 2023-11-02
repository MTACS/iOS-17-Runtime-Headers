
@protocol _UISharingPublicController <NSObject>

@required

- (void)_cloudSharingControllerDidActivateAddPeopleWithRemoteSourceX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)_cloudSharingControllerDidActivateShowActivityController;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_cloudSharingControllerDidChooseTransport:(NSString *)arg1;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(bool)arg1;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(bool)arg1;
- (void)_cloudSharingControllerDidUpdateRootFolderURL:(NSURL *)arg1;
- (void)_dismissForActivityRepresentation:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_dismissViewControllerWithError:(NSError *)arg1;
- (void)_performAuxiliaryActionWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_performHeaderActionWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_representFullscreenAfterActivityDismissal:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_requestSavedShareWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKShare *, CKContainerID *, void*
- (void)_shareDidChange:(CKShare *)arg1;
- (void)_shareWasMadePrivate;

@end
