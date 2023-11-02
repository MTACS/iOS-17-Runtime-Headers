
@interface SGSuggestionPresenter : NSObject <SGSuggestionDelegate, UIPopoverPresentationControllerDelegate> {
    UIView<SGBannerProtocol> * _banner;
    SGSuggestionAction * _bannerDismissAction;
    SGSuggestionAction * _bannerPrimaryAction;
    unsigned long long  _currentSuggestionsCount;
    <SGSuggestionPresenterDelegate> * _delegate;
    NSMutableArray * _filteredSuggestions;
    bool  _forceUpdate;
    EKICSPreviewController * _icsPreviewController;
    UIViewController * _presentedViewController;
    SGSuggestionCategoryList * _suggestionCategoryList;
    SGSuggestionStore * _suggestionStore;
    bool  _wantsToShowBanner;
}

@property (nonatomic, readonly) UIView<SGBannerProtocol> *banner;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SGSuggestionPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *suggestions;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsToShowBanner;

+ (id)formatList:(id)arg1;

- (void).cxx_destruct;
- (long long)_bannerAccessoryType;
- (void)_bannerDismiss;
- (void)_bannerPrimaryAction;
- (void)_dismissPresentedViewController:(id)arg1;
- (void)_dismissViewControllerAnimated:(bool)arg1;
- (void)_filterSuggestions;
- (void)_listDidChangeNotification:(id)arg1;
- (void)_presentModalViewController:(id)arg1 fromSourceView:(id)arg2;
- (void)_presentModalViewControllerFromButton:(id)arg1;
- (id)_presentedControllerCancelButtonItem;
- (id)_presentedControllerDoneButtonItem;
- (id)_presentingViewController;
- (void)_removeBanner;
- (void)_restoreSuggestions;
- (id)_sortSuggestionByCategoryUsing:(id)arg1;
- (void)_updateBanner;
- (id)_viewControllerForPresentingFromBanner;
- (void)addSuggestion:(id)arg1;
- (id)banner;
- (void)bannerDismissAction;
- (void)bannerPrimaryAction;
- (void)dealloc;
- (id)delegate;
- (void)dismissAllSuggestions;
- (void)dismissICSPreviewController:(id)arg1;
- (void)dismissViewController:(id)arg1;
- (id)formatMixedCategoriesSubtitle:(id)arg1;
- (id)formatMixedCategoriesTitle:(id)arg1;
- (id)icsPreviewControllerForData:(id)arg1 andEventStore:(id)arg2;
- (id)init;
- (void)presentViewController:(id)arg1;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (void)presentationControllerDidDismiss:(id)arg1;
- (bool)presentationControllerShouldDismiss:(id)arg1;
- (void)reloadSuggestionsFromSearchableItems;
- (void)removeSuggestion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setWantsToShowBanner:(bool)arg1;
- (void)suggestion:(id)arg1 actionFinished:(bool)arg2;
- (void)suggestionBatchDismissal;
- (id)suggestionStore;
- (void)suggestionWasUpdated:(id)arg1;
- (id)suggestions;
- (long long)suggestionsUIContext;
- (id)tableViewController;
- (bool)wantsToShowBanner;

@end
