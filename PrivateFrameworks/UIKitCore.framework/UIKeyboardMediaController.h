
@interface UIKeyboardMediaController : NSObject <UIKeyboardMediaServiceRemoteViewControllerDelegate> {
    <UIKeyboardMediaControllerDelegate> * _delegate;
    _UITextDragCaretView * _dropCaret;
    bool  _hasRequestedRecentlyUsedMediaViewController;
    UIViewController * _recentlyUsedMediaViewController;
    _UIAsyncInvocation * _recentlyUsedMediaViewControllerRequest;
    UIViewController * _remoteCardViewController;
    _UIAsyncInvocation * _remoteCardViewControllerRequest;
    bool  _shouldRetryFetchingRecents;
    UIView * _targetViewAwaitingRecents;
    unsigned long long  _viewServiceTerminationCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKeyboardMediaControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldRetryFetchingRecents;
@property (readonly) Class superclass;

+ (id)sharedKeyboardMediaController;

- (void).cxx_destruct;
- (void)_didInsertMedia;
- (void)_didPresentCard;
- (void)_displayiMessageAppWithID:(id)arg1;
- (void)_embedRecentlyUsedMediaViewInView:(id)arg1 animated:(bool)arg2;
- (void)_instantiateCardFromViewService;
- (void)_instantiateViewServiceRecentlyUsedMediaWithCompletionHandler:(id /* block */)arg1;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_setRecentlyUsedMediaViewControllerHostBundleID;
- (bool)_stickerIsSupportedPayload;
- (void)_tearDownRemoteViews;
- (id)delegate;
- (void)dismissCard;
- (void)dismissCardAnimated;
- (void)dismissCardIfNeeded;
- (void)draggedStickerToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)handleStickerSuggestionWithTISticker:(id)arg1;
- (void)pasteImageAtFileHandle:(id)arg1;
- (void)prefetchRecentsViewControllerWithCompletion:(id /* block */)arg1;
- (void)presentCard;
- (bool)recentsViewWillBeVisible;
- (void)releaseRecentlyUsedMediaViewIfNeeded;
- (bool)remoteHandlesRecentsStickerDonation;
- (void)remoteHandlesRecentsStickerDonationWithCompletionHandler:(id /* block */)arg1;
- (void)requestInsertionPointCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldPrefetchRemoteView;
- (bool)shouldRetryFetchingRecents;
- (void)showRecentlyUsedMediaInView:(id)arg1;
- (void)stageSticker:(id)arg1;
- (void)stageStickerWithFileHandle:(id)arg1 url:(id)arg2 accessibilityLabel:(id)arg3;
- (void)stageStickerWithIdentifier:(id)arg1 representations:(id)arg2 name:(id)arg3 externalURI:(id)arg4 accessibilityLabel:(id)arg5;
- (void)stickerPickerCardDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
