
@interface SBSwitcherAppSuggestionViewController : UIViewController {
    SBSwitcherAppSuggestionBannerView * _bannerView;
    SBBestAppSuggestion * _bestAppSuggestion;
    <SBSwitcherAppSuggestionViewControllerDelegate> * _delegate;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    NSMutableSet * _pauseSuggestionUpdateReasons;
    bool  _presentingOrDismissingBanner;
    NSObject<OS_dispatch_queue> * _setSuggestionQueue;
    bool  _showSuggestions;
    bool  _suggestionQueueSuspended;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) SBBestAppSuggestion *bestAppSuggestion;
@property (nonatomic) <SBSwitcherAppSuggestionViewControllerDelegate> *delegate;
@property (nonatomic) bool showSuggestions;
@property (getter=_isSuggestionQueueSuspended, setter=_setSuggestionQueueSuspended:, nonatomic) bool suggestionQueueSuspended;

- (void).cxx_destruct;
- (void)_activateBestAppSuggestion;
- (void)_activateCurrentSuggestion;
- (void)_animateOutAndRemoveCurrentBottomBannerWithCompletion:(id /* block */)arg1;
- (unsigned long long)_bannerStyle;
- (void)_evaluateSuggestionQueueSuspension;
- (void)_handleBannerTap:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (bool)_hasSuggestionBannerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_idleOnscreenRectForBottomBanner;
- (void)_insertAndAnimateInBottomBannerForSuggestion:(id)arg1 completion:(id /* block */)arg2;
- (bool)_isSuggestionQueueSuspended;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_offscreenRectForBottomBanner;
- (void)_setBestAppSuggestion:(id)arg1 animationCompletion:(id /* block */)arg2;
- (void)_setSuggestionQueueSuspended:(bool)arg1;
- (void)_updateBottomBannerWithCompletion:(id /* block */)arg1;
- (void)beginPausingSuggestionUpdatesForReason:(id)arg1;
- (id)bestAppSuggestion;
- (void)dealloc;
- (id)delegate;
- (void)endPausingSuggestionUpdatesForReason:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setBestAppSuggestion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowSuggestions:(bool)arg1;
- (bool)showSuggestions;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;

@end
