
@interface TUIEmojiSearchInputViewController : UIInputViewController <TUIEmojiSearchResultsCollectionViewControllerDelegate, TUIEmojiSearchSourceDelegate, TUIEmojiSearchTextFieldDelegate, TUIEmojiVariantSelectorViewDelegate, UIPredictiveViewController> {
    TUIEmojiSearchAnalyticsSession * _analyticsSession;
    NSString * _autocorrectedSearchQuery;
    bool  _canAutocorrectWithCurrentInputMode;
    UIViewController<UIPredictiveViewController> * _childPredictionViewController;
    <TUIEmojiSearchInputViewControllerDelegate> * _delegate;
    TUIEmojiSearchSource * _emojiSearchSource;
    TUIEmojiSearchView * _emojiSearchView;
    NSString * _exactSearchQuery;
    <Staging_UIKBFeedbackGenerating> * _feedbackGenerator;
    NSDate * _lastActivationDate;
    NSLayoutConstraint * _leadingConstraint;
    NSArray * _rateLimitedResults;
    NSString * _rateLimitedSearchQuery;
    NSTimer * _resultsUpdateRateLimitTimer;
    TUIEmojiSearchResultsCollectionViewController * _resultsViewController;
    NSLayoutConstraint * _trailingConstraint;
    bool  _usesFloatingStyle;
    UITapGestureRecognizer * _variantSelectorDismissGesture;
    TouchExclusionView * _variantSelectorDismissOverlayView;
    TUIEmojiVariantSelectorView * _variantSelectorView;
    NSTimer * _waitForAutocorrectionDelayTimer;
}

@property (nonatomic, retain) UIViewController<UIPredictiveViewController> *childPredictionViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUIEmojiSearchInputViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedCandidates;
@property (nonatomic, readonly) TUIEmojiSearchView *emojiSearchView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool usesFloatingStyle;

+ (bool)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_didRecognizeVariantDismissGesture:(id)arg1;
- (void)_dismissVariantSelector;
- (void)_displayResults:(id)arg1 forExactQuery:(id)arg2 autocorrectedQuery:(id)arg3;
- (void)_keyboardInputModeDidChange:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_keyboardInsets;
- (void)_selectedEmojiString:(id)arg1 completion:(id /* block */)arg2;
- (void)autocorrectionListDidBecomeAvailable:(id)arg1;
- (id)childPredictionViewController;
- (id)delegate;
- (id)displayedCandidates;
- (void)dragAndDropDidEnd:(id)arg1;
- (void)dragAndDropWillBegin:(id)arg1;
- (void)emojiSearchResultsController:(id)arg1 didRequestVariantSelectorForEmojiToken:(id)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)emojiSearchResultsController:(id)arg1 didSelectEmoji:(id)arg2;
- (void)emojiSearchSource:(id)arg1 didProduceResults:(id)arg2 forExactQuery:(id)arg3 autocorrectedQuery:(id)arg4;
- (void)emojiSearchTextField:(id)arg1 didChangeSearchString:(id)arg2;
- (void)emojiSearchTextFieldDidBecomeActive:(id)arg1;
- (void)emojiSearchTextFieldDidBecomeInactive:(id)arg1;
- (void)emojiSearchTextFieldWillBecomeActive:(id)arg1;
- (void)emojiSearchTextFieldWillBecomeInactive:(id)arg1;
- (void)emojiSearchTextFieldWillClear:(id)arg1;
- (id)emojiSearchView;
- (bool)hidesExpandableButton;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (void)loadView;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (void)setChildPredictionViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUsesFloatingStyle:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)usesFloatingStyle;
- (void)variantSelectorValueChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
