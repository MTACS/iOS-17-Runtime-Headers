
@interface SeymourUI.TabletSessionSummaryViewController : UIViewController <UIScrollViewDelegate> {
    void activityRingsBottomPinningConstraint;
    void activityRingsView;
    void additionalMetadata;
    void backgroundView;
    void burnBarBottomPinningConstraint;
    void burnBarConstraints;
    void burnBarToActivityRingsLeadingConstraint;
    void burnBarToActivityRingsTopConstraint;
    void burnBarToContentSummaryLeadingConstraint;
    void burnBarToGridViewTopConstraint;
    void burnBarView;
    void buttonStackView;
    void contentSummaryTrailingAnchor;
    void contentSummaryView;
    void cooldownButton;
    void doneButton;
    void eventHub;
    void gridView;
    void gridViewHeight;
    void gridViewTopSpacing;
    void gridViewWidth;
    void presenter;
    void queueCompleteView;
    void scrollView;
    void shareBarButtonItem;
    void stateOfMindLoggingButton;
    void storefrontLocalizer;
    void stringBuilder;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  summary;
    void ttrBarButtonItem;
    void upNextSummaryView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)shareButtonTapped;
- (void)traitCollectionDidChange:(id)arg1;
- (void)ttrButtonTapped;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
