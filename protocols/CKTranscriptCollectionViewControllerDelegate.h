
@protocol CKTranscriptCollectionViewControllerDelegate <NSObject>

@required

- (UITraitCollection *)traitCollectionForTranscriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 didRequestPresentationStyle:(unsigned long long)arg3 forChatItem:(CKChatItem *)arg4 allowAllStyles:(bool)arg5;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 didRequestReaderViewControllerForChatItem:(CKChatItem *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 doubleTappedItemAtIndexPath:(NSIndexPath *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 longPressedForItemWithIndexPath:(NSIndexPath *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 selectedItemAtIndexPath:(NSIndexPath *)arg3;
- (bool)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 shouldSelectChatItem:(CKChatItem *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 showInlineReplyForItemWithIndexPath:(NSIndexPath *)arg3 withReplyTransitionProperties:(CKInlineReplyTransitionProperties *)arg4;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 tappedForChatItem:(CKChatItem *)arg3;
- (bool)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonViewDidRequestCommitPayload:(CKBrowserItemPayload *)arg2 forPlugin:(NSString *)arg3 allowAllCommits:(bool)arg4 error:(id*)arg5;
- (bool)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonViewDidRequestCommitSticker:(IMSticker *)arg2 forPlugin:(NSString *)arg3 allowAllCommits:(bool)arg4 error:(id*)arg5;
- (void)transcriptCollectionViewController:(void *)arg1 balloonViewDidRequestStartEditingPayload:(void *)arg2 forPlugin:(void *)arg3 allowAllCommits:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: CKViewController<CKCoreTranscriptControllerProtocol> *, CKBrowserItemPayload *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonViewTitleTappedForItemWithIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 collectionViewContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id <CKSendAnimationContext>)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapAttributionButtonForChatItem:(CKMessageStatusChatItem *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapPluginStatusButtonForChatItem:(CKMessageStatusChatItem *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 requestDeleteJunkConversation:(CKConversation *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 requestRecoverJunkConversation:(CKConversation *)arg2;
- (bool)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 shouldCleanupFullscreenEffectUI:(CKFullScreenEffect *)arg2;
- (bool)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 shouldSetupFullscreenEffectUI:(CKFullScreenEffect *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 showMessageSomeoneForItemWithIndexPath:(NSIndexPath *)arg2;
- (double)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 targetAlphaForChatItem:(CKChatItem *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 viewedCommSafetyItemWithIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id <CKSendAnimationContext>)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willDeleteChatItems:(NSArray *)arg2;
- (NSArray *)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerBlockContactButtonTapped:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerDidInset:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerNeedsChatItemLayoutInvalidation:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (UIView *)transcriptCollectionViewControllerOuterEffectPresentingView:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerPerformBatchUpdateCompleted:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerRestingStateDidChange:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (bool)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (bool)transcriptCollectionViewControllerShouldPlayAudio:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (bool)transcriptCollectionViewControllerShouldShouldScrollToTopForStatusBarTap:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerWillDisplayLastBalloon:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerWillInset:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 targetContentInset:(inout struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;

@optional

- (CKChatItem *)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 chatItemForContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UIContextMenuConfiguration *)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 contextMenuConfigurationForItemAtIndexPath:(NSIndexPath *)arg2 point:(struct CGPoint { double x1; double x2; })arg3 interaction:(UIContextMenuInteraction *)arg4;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didInsertChatItems:(NSIndexSet *)arg2 associatedChatItems:(NSIndexSet *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didPinchPhotoStackForChatItem:(CKAggregateAttachmentMessagePartChatItem *)arg2 assetReference:(PXAssetReference *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didScroll:(struct CGPoint { double x1; double x2; })arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapPendingMomentShareForChatItem:(CKAttachmentMessagePartChatItem *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapPhotoStackAdditionalItemsForChatItem:(CKAggregateAttachmentMessagePartChatItem *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapPhotoStackButtonForChatItem:(CKAggregateAttachmentMessagePartChatItem *)arg2 assetReference:(PXAssetReference *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapPhotoStackButtonForPendingMomentShareChatItem:(CKAttachmentMessagePartChatItem *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapPhotoStackForChatItem:(CKAggregateAttachmentMessagePartChatItem *)arg2 assetReference:(PXAssetReference *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapReplyCountStatusButtonForChatItem:(CKMessageStatusChatItem *)arg2;
- (UITargetedPreview *)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 previewForDismissingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 previewForHighlightingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 sendQuickReplyComposition:(CKComposition *)arg2 withSourceView:(UIView *)arg3;
- (_UIContextMenuStyle *)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 styleForContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willBeginDragging:(struct CGPoint { double x1; double x2; })arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willDisplayBalloonForGUID:(NSString *)arg2 withIndexPath:(NSIndexPath *)arg3 withOriginY:(double)arg4;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willDisplayContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willDisplayStatusCell:(CKTranscriptStatusCell *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willEndContextMenuInteractionWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willEndDragging:(struct CGPoint { double x1; double x2; })arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg4;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willPerformPreviewActionForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (void)transcriptCollectionViewControllerAudioControllerDidStop:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (bool)transcriptCollectionViewControllerIsPresentedInModalInlineReply:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (bool)transcriptCollectionViewControllerShouldForceOpaqueMask:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (UIViewController *)viewControllerForAlertPresentationFromTranscriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;

@end
