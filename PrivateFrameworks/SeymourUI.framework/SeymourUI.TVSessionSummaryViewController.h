
@interface SeymourUI.TVSessionSummaryViewController : UIViewController {
    void activityRingsBottomPinningConstraint;
    void activityRingsTopConstraint;
    void activityRingsTopPinningConstraint;
    void activityRingsTrailingConstraint;
    void activityRingsView;
    void additionalMetadata;
    void bottomPaddingLayoutGuide;
    void burnBarLeadingConstraint;
    void burnBarTopConstraint;
    void burnBarTrailingConstraint;
    void burnBarView;
    void eventHub;
    void footerView;
    void gridViewBottomConstraint;
    void gridViewTopConstraint;
    void gridViewWidthConstraint;
    void headerView;
    void metricGridView;
    void presenter;
    void queueCompleteView;
    void separatorView;
    void storefrontLocalizer;
    void stringBuilder;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  summary;
    void topPaddingLayoutGuide;
    void upNextSummaryView;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)menuButtonTapped;
- (id)preferredFocusEnvironments;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
