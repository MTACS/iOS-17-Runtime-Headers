
@interface HealthRecordsUI.RecordCategoryViewController : UIViewController <UISearchControllerDelegate, UISearchResultsUpdating> {
    void $__lazy_storage_$_alphabeticalViewController;
    void $__lazy_storage_$_changeProvider;
    void $__lazy_storage_$_labsOnboardingTileDisplayEvaluator;
    void $__lazy_storage_$_lastUpdatedViewController;
    void $__lazy_storage_$_latestViewContoller;
    void $__lazy_storage_$_listManager;
    void $__lazy_storage_$_modePicker;
    void $__lazy_storage_$_resultViewController;
    void $__lazy_storage_$_scrollView;
    void $__lazy_storage_$_searchController;
    void $__lazy_storage_$_udcListViewController;
    void $__lazy_storage_$_viewDataPublisher;
    void aToZCanceller;
    void accountStateProvider;
    void cancellable;
    void category;
    void countProvider;
    void currentPalette;
    void currentViewController;
    void displayMode;
    void factory;
    void gradientColorProvider;
    void gradientSubscriber;
    void gradientView;
    void isSearching;
    void labsCanceller;
    void labsOnboardingViewController;
    void labsTipTimer;
    void modePickerState;
    void preferredSegment;
    void profile;
    void recordCanceller;
    void recordCount;
    void requiresOnboarding;
    void shouldShowPinnedLabsTip;
}

- (void).cxx_destruct;
- (void)didDismissSearchController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)modePickerDidChange:(id)arg1;
- (void)presentPDFViewController;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)showPinnedLabsPopoverIfNeeded;
- (void)tapToRadar:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
