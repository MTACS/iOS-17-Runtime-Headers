
@interface SeymourUI.PhoneSessionLandscapeSummaryViewController : UIViewController {
    void activityRingsToScrollViewBottomConstraint;
    void activityRingsView;
    void additionalMetadata;
    void backgroundView;
    void burnBarConstraints;
    void burnBarToActivityRingsLeadingConstraint;
    void burnBarToActivityRingsTopConstraint;
    void burnBarToContentSummaryLeadingConstraint;
    void burnBarToGridViewTopConstraint;
    void burnBarToScrollViewBottomConstraint;
    void burnBarView;
    void contentSummaryView;
    void cooldownButton;
    void doneButton;
    void eventHub;
    void gridView;
    void gridViewHeight;
    void gridViewTopSpacing;
    void gridViewWidth;
    void leadingStackView;
    void presenter;
    void queueCompleteView;
    void scrollView;
    void scrollViewSizingView;
    void stateOfMindLoggingButton;
    void storefrontLocalizer;
    void stringBuilder;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  summary;
    void trailingStackView;
    void trailingStackViewTopConstraint;
    void ttrButton;
    void upNextSummaryView;
}

- (void).cxx_destruct;
- (void)handleGuidedRunButtonTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;

@end
