
@protocol CKBrowserViewControllerSendDelegate <NSObject>

@required

- (void)commitPayload:(CKBrowserItemPayload *)arg1;
- (void)commitSticker:(IMSticker *)arg1 stickerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)commitSticker:(IMSticker *)arg1 withDragTarget:(CKBrowserDragControllerTarget *)arg2 draggedSticker:(CKBrowserDraggedSticker *)arg3;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(bool)arg1;
- (void)dismissToKeyboard:(bool)arg1;
- (<CKBrowserDragControllerTranscriptDelegate> *)dragControllerTranscriptDelegate;
- (void)openURL:(void *)arg1 applicationIdentifier:(void *)arg2 pluginID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)openURL:(void *)arg1 pluginID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)presentAlertWithTitle:(void *)arg1 message:(void *)arg2 buttonTitle:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)requestPresentationStyleExpanded:(bool)arg1;
- (void)setLocalUserIsTyping:(bool)arg1;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1 dismiss:(bool)arg2;

@optional

- (void)canShowBrowserForPluginIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)commitPayload:(void *)arg1 forPlugin:(void *)arg2 allowAllCommits:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: CKBrowserItemPayload *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)commitSticker:(IMSticker *)arg1 atScreenCoordinate:(struct CGPoint { double x1; double x2; })arg2 scale:(double)arg3 rotation:(double)arg4 stickerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)commitSticker:(IMSticker *)arg1 forPlugin:(NSString *)arg2 stickerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)didBeginDraggingSticker:(IMSticker *)arg1;
- (void)didStageAssetArchive:(CKBrowserItemPayload *)arg1 identifier:(NSString *)arg2;
- (void)dismissAndPresentPhotosApp;
- (void)dismissAndReloadInputViews:(bool)arg1 forPlugin:(NSString *)arg2;
- (void)eagerUploadCancelIdentifier:(NSString *)arg1;
- (void)eagerUploadPayload:(CKBrowserItemPayload *)arg1 identifier:(NSString *)arg2 replace:(bool)arg3;
- (bool)handwritingIsDisplayed;
- (bool)isAppCardUsingSheetPresentation;
- (void)requestPresentationStyleExpanded:(bool)arg1 forPlugin:(NSString *)arg2;
- (void)requestPresentationStyleFullScreenModalForPlugin:(NSString *)arg1 preferredContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setEntryViewHidden:(bool)arg1;
- (void)showBrowserForPluginIdentifier:(void *)arg1 style:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1 dismiss:(bool)arg2 forPlugin:(NSString *)arg3;
- (void)startEditingPayload:(void *)arg1 dismiss:(void *)arg2 forPlugin:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: CKBrowserItemPayload *, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startEditingPayloadBypassingValidation:(void *)arg1 forPlugin:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CKBrowserItemPayload *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stickerDruidDragEndedWithIMSticker:(IMSticker *)arg1;
- (void)stickerDruidDragStarted;

@end
