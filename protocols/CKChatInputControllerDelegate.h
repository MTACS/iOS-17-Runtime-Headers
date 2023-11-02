
@protocol CKChatInputControllerDelegate <NSObject>

@required

- (CKSendMenuPresentation *)activeSendMenuPresentationForChatInputController:(CKChatInputController *)arg1;
- (void)appCardDidChangeEntryViewAlignmentHeight:(double)arg1 animated:(bool)arg2;
- (void)appCardDidDismiss;
- (void)appCardViewStateDidChange:(bool)arg1;
- (void)chatInputController:(CKChatInputController *)arg1 didFinishDismissAnimationForSendMenuViewController:(UIViewController *)arg2;
- (void)chatInputController:(CKChatInputController *)arg1 didPresentStickerPickerForChatItem:(CKMessagePartChatItem *)arg2;
- (void)chatInputController:(void *)arg1 presentShelfModal:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: CKChatInputController *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)chatInputController:(void *)arg1 requestPresentSendMenu:(void *)arg2 withPresentationContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: CKChatInputController *, UIViewController *, <CKSceneOverlayPresentationContext> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)chatInputController:(CKChatInputController *)arg1 willBeginFullScreenDismissAnimationForSendMenuViewController:(UIViewController *)arg2;
- (void)chatInputController:(CKChatInputController *)arg1 willPresentStickerPickerForChatItem:(CKMessagePartChatItem *)arg2;
- (bool)chatInputControllerCanSend:(CKChatInputController *)arg1;
- (void)chatInputControllerCancelSelectFunCamera:(CKChatInputController *)arg1;
- (void)chatInputControllerDidDismissCompactBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerDidDismissModalBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerDidPresentModalBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerDidSelectFunCamera:(CKChatInputController *)arg1;
- (void)chatInputControllerDidSelectRequestLocation:(CKChatInputController *)arg1;
- (void)chatInputControllerDidShowHandwriting:(CKChatInputController *)arg1;
- (void)chatInputControllerDidTransitionCollapsed:(CKChatInputController *)arg1;
- (void)chatInputControllerDidTransitionExpanded:(CKChatInputController *)arg1;
- (void)chatInputControllerRequestDismissKeyboardSnapshot:(CKChatInputController *)arg1;
- (void)chatInputControllerRequestInputViewFocusFromFullscreen:(CKChatInputController *)arg1;
- (void)chatInputControllerRequestShowKeyboardSnapshot:(CKChatInputController *)arg1;
- (void)chatInputControllerShouldEndDeferringSystemNavigationPopGestureForPlusButton:(CKChatInputController *)arg1;
- (bool)chatInputControllerShouldShowHandwriting:(CKChatInputController *)arg1;
- (void)chatInputControllerWillDismissCompactBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerWillDismissModalBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerWillHideHandwriting:(CKChatInputController *)arg1;
- (void)chatInputControllerWillPresentModalBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerWillSelectFunCamera:(CKChatInputController *)arg1;
- (void)chatInputControllerWillTransitionCollapsed:(CKChatInputController *)arg1;
- (void)chatInputControllerWillTransitionExpanded:(CKChatInputController *)arg1;
- (void)chatInputDidChangeSize;
- (void)chatInputDidSelectEffectPicker;
- (void)chatInputDidSelectPhotoPicker;
- (void)chatInputDidUpdateInputViewShowingBrowser:(bool)arg1 entryFieldCollapsed:(bool)arg2 animated:(bool)arg3;
- (void)chatInputDidUpdateWithNewInputViewController:(UIInputViewController *)arg1;
- (void)chatInputSentComposition:(CKComposition *)arg1;
- (NSString *)chatInputTranscriptIdentifier;
- (void)chatInputWillChangeHeightForCompactPresentation:(double)arg1;
- (void)chatInputWillUpdateInputViewShowingBrowser;
- (void)dismissKeyboard;
- (<CKBrowserDragControllerTranscriptDelegate> *)dragControllerTranscriptDelegate;
- (void)enforceSendMenuOrderingInWindowSubviews;
- (bool)isKeyboardSnapshotted;
- (bool)isKeyboardVisible;
- (bool)keyboardIsVisibleForChatInputController:(CKChatInputController *)arg1;
- (UIKeyboardLayoutGuide *)keyboardLayoutGuideForAppCardPresentation;
- (unsigned long long)recipientsCount;
- (long long)sceneInterfaceOrientation;
- (void)sendAutomaticallyPlacedSticker:(void *)arg1 forChatItem:(void *)arg2 stickerFrame:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: IMSticker *, CKMessagePartChatItem *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)sendAutomaticallyPlacedSticker:(IMSticker *)arg1 forChatItem:(CKMessagePartChatItem *)arg2 withDragTarget:(CKBrowserDragControllerTarget *)arg3 draggedSticker:(CKBrowserDraggedSticker *)arg4;
- (void)sendCurrentLocation;
- (void)sendSticker:(IMSticker *)arg1 withDragTarget:(CKBrowserDragControllerTarget *)arg2 draggedSticker:(CKBrowserDraggedSticker *)arg3;
- (void)setLocalUserIsComposing:(bool)arg1 withPluginBundleID:(NSString *)arg2 typingIndicatorData:(NSData *)arg3;
- (void)showContactForHandle:(NSString *)arg1;
- (void)stopForcingOrientation;
- (CKConversation *)targetConversationForChatInputController:(CKChatInputController *)arg1;
- (void)updateActiveEntryViewPositioningGuide;
- (void)updateSupportedInterfaceOrientations:(unsigned long long)arg1;
- (UIViewController *)viewControllerForChatInputModalPresentation;
- (UIView *)viewForDragAndChatInputDropTarget;

@optional

- (void)chatInputDidSelectEmojiPicker;

@end
