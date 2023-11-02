
@interface SearchUICardViewController : UIViewController <CRKCardViewControlling, CRKFeedbackDelegate, SearchUIBackgroundColorProtocol, SearchUICollectionViewRestorationProtocol, SearchUISizingDelegate> {
    bool  _hasFocusableElements;
    double  _initialPreviewPlatterHeight;
    unsigned long long  _level;
    NSTimer * _loadingScreenTimer;
    SearchUILoadingView * _loadingView;
    SearchUICardCollectionViewController * _tableViewController;
}

@property (nonatomic, retain) <CRCard> *card;
@property (nonatomic, retain) SFCard *card;
@property (nonatomic, retain) <CRKCardSectionViewSourcing> *cardSectionViewSource;
@property (nonatomic) <CRKCardViewControllerDelegate> *cardViewControllerDelegate;
@property (nonatomic) <SearchUICommandDelegate> *commandDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) SUICKPFeedbackAdapter *defaultFeedbackAdapter;
@property (nonatomic) <SearchUICardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dragInteractionEnabled;
@property (nonatomic) <SFFeedbackListener> *feedbackListener;
@property (nonatomic) bool hasFocusableElements;
@property (readonly) unsigned long long hash;
@property (getter=isInPreviewPlatter, nonatomic) bool inPreviewPlatter;
@property (nonatomic) double initialPreviewPlatterHeight;
@property (nonatomic) unsigned long long level;
@property (nonatomic, retain) NSTimer *loadingScreenTimer;
@property (nonatomic, retain) SearchUILoadingView *loadingView;
@property (nonatomic) bool rowSelectionAppearanceEnabled;
@property (nonatomic) bool scrollEnabled;
@property (nonatomic) bool shouldUseInsetRoundedSections;
@property (readonly) Class superclass;
@property (nonatomic, retain) SearchUICardCollectionViewController *tableViewController;
@property (nonatomic) UITextField *textField;
@property (nonatomic) bool threeDTouchEnabled;
@property (nonatomic, readonly) bool topRowWillFillBackgroundWithContent;
@property (nonatomic, retain) SearchUIBackgroundView *view;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

+ (void)_loadAndEnrichCardSectionsFromCard:(id)arg1 withCompletionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)card;
- (void)cardViewDidAppear;
- (id)commandDelegate;
- (double)contentHeightForWidth:(double)arg1;
- (void)contentSizeDidChange:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2;
- (id)delegate;
- (void)displayLoadingViewAfterDelay:(double)arg1;
- (bool)dragInteractionEnabled;
- (id)feedbackListener;
- (bool)hasCustomViewControllersForCardSections;
- (bool)hasFocusableElements;
- (id)init;
- (id)initWithCard:(id)arg1 feedbackListener:(id)arg2;
- (id)initWithCard:(id)arg1 style:(unsigned long long)arg2 feedbackListener:(id)arg3;
- (double)initialPreviewPlatterHeight;
- (bool)isInPreviewPlatter;
- (unsigned long long)level;
- (id)loadingScreenTimer;
- (id)loadingView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)prepareLoadingView;
- (id)restorationContext;
- (bool)rowSelectionAppearanceEnabled;
- (void)scrollAndSelectLastSelectedIndexPath;
- (bool)scrollEnabled;
- (id)searchUIBackgroundColor;
- (void)setCard:(id)arg1;
- (void)setCommandDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragInteractionEnabled:(bool)arg1;
- (void)setFeedbackListener:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHasFocusableElements:(bool)arg1;
- (void)setInPreviewPlatter:(bool)arg1;
- (void)setInitialPreviewPlatterHeight:(double)arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)setLoadingScreenTimer:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setRestorationContext:(id)arg1;
- (void)setRowSelectionAppearanceEnabled:(bool)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (void)setTableViewController:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (bool)shouldUseInsetRoundedSections;
- (id)tableViewController;
- (id)testingTableViewController;
- (id)textField;
- (bool)threeDTouchEnabled;
- (bool)topRowWillFillBackgroundWithContent;
- (void)updateTimerAndCardSections:(id)arg1;
- (void)updateWithCardSections:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport

- (void)cardSectionView:(id)arg1 willProcessEngagementFeedback:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id)arg1;
- (id)cardSectionViewSource;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (id)cardViewControllerDelegate;
- (void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (id)defaultFeedbackAdapter;
- (void)presentViewController:(id)arg1;
- (void)presentViewControllerForCard:(id)arg1 animate:(bool)arg2;
- (void)setCardSectionViewSource:(id)arg1;
- (void)setCardViewControllerDelegate:(id)arg1;
- (void)setDefaultFeedbackAdapter:(id)arg1;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)userDidReportFeedback:(id)arg1 fromCardSection:(id)arg2;
- (void)willDismissViewController:(id)arg1;

@end
