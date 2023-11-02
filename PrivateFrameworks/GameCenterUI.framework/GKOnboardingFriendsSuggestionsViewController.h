
@interface GKOnboardingFriendsSuggestionsViewController : UIViewController {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_metricsContext;
    void dataUpdateDelegate;
    void friendRecommendations;
    void hostingController;
    void invitedContacts;
}

- (void).cxx_destruct;
- (id)contentScrollViewForEdge:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
