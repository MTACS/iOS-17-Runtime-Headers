
@interface HealthExperienceUI.SummarySharingOnboardingContactPickerViewController : UIViewController <CNAutocompleteResultsTableViewControllerDelegate, CNAutocompleteSearchConsumer, HKSummarySharingEntryStoreDelegate, UISearchBarDelegate, UISearchControllerDelegate> {
    void $__lazy_storage_$_searchController;
    void $__lazy_storage_$_splashContainerView;
    void $__lazy_storage_$_splashView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _reachabilityQueryState;
    void autocompleteResults;
    void cancellables;
    void currentSearchTaskID;
    void foundSearchResults;
    void healthExperienceStore;
    void healthStore;
    void isInitialReachabilityQuery;
    void meContactIdentifier;
    void reachabilityQueryStateCancellable;
    void reachableContactIdentifiers;
    void resultsTableView;
    void resultsTableViewController;
    void searchManager;
    void selectionFlowContext;
    void sharingEntryStore;
}

- (void).cxx_destruct;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(long long)arg3;
- (id)autocompleteResultsController:(id)arg1 preferredRecipientForRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelButtonTapped:(id)arg1;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)summarySharingEntryStore:(id)arg1 didUpdateReachabilityStatus:(id)arg2 error:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
