
@interface CKTranscriptPreviewController : CKViewController <CKTranscriptCollectionViewControllerDelegate> {
    CKTranscriptCollectionView * _collectionView;
    CKConversation * _conversation;
    bool  _isInitialLayout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutMargins;
    double  _transcriptWidth;
}

@property (nonatomic, retain) CKTranscriptCollectionView *collectionView;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInitialLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (readonly) Class superclass;
@property (nonatomic) double transcriptWidth;

- (void).cxx_destruct;
- (id)collectionView;
- (id)conversation;
- (id)initWithConversation:(id)arg1 transcriptWidth:(double)arg2 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (bool)isInitialLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)loadView;
- (void)setCollectionView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setIsInitialLayout:(bool)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTranscriptWidth:(double)arg1;
- (id)textInputContextIdentifier;
- (id)traitCollectionForTranscriptCollectionViewController:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 didRequestPresentationStyle:(unsigned long long)arg3 forChatItem:(id)arg4 allowAllStyles:(bool)arg5;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 didRequestReaderViewControllerForChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 selectedItemAtIndexPath:(id)arg3;
- (bool)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 shouldSelectChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 showInlineReplyForItemWithIndexPath:(id)arg3 withReplyTransitionProperties:(id)arg4;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(bool)arg4 error:(id*)arg5;
- (bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitSticker:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(bool)arg4 error:(id*)arg5;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestStartEditingPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 requestDeleteJunkConversation:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 requestRecoverJunkConversation:(id)arg2;
- (bool)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2;
- (bool)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 showMessageSomeoneForItemWithIndexPath:(id)arg2;
- (double)transcriptCollectionViewController:(id)arg1 targetAlphaForChatItem:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 viewedCommSafetyItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 willDeleteChatItems:(id)arg2;
- (id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1;
- (void)transcriptCollectionViewControllerBlockContactButtonTapped:(id)arg1;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(id)arg1;
- (void)transcriptCollectionViewControllerNeedsChatItemLayoutInvalidation:(id)arg1;
- (id)transcriptCollectionViewControllerOuterEffectPresentingView:(id)arg1;
- (void)transcriptCollectionViewControllerPerformBatchUpdateCompleted:(id)arg1;
- (bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;
- (void)transcriptCollectionViewControllerRestingStateDidChange:(id)arg1;
- (bool)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1;
- (bool)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (bool)transcriptCollectionViewControllerShouldShouldScrollToTopForStatusBarTap:(id)arg1;
- (void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1;
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;
- (double)transcriptWidth;
- (void)viewDidLayoutSubviews;

@end
