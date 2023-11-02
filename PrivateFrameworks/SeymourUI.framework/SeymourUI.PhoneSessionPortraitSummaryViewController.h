
@interface SeymourUI.PhoneSessionPortraitSummaryViewController : UIViewController {
    void activityRingsToScrollViewBottomConstraint;
    void activityRingsView;
    void bottomStackView;
    void contentSummaryView;
    void contentSummaryViewTopConstraint;
    void contentView;
    void cooldownButton;
    void doneButton;
    void eventHub;
    void gridView;
    void gridViewHeight;
    void gridViewTopSpacing;
    void gridViewWidth;
    void mediaTagStringBuilder;
    void presenter;
    void scrollView;
    void storefrontLocalizer;
    void stringBuilder;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  summary;
    void ttrButton;
}

- (void).cxx_destruct;
- (void)handleGuidedRunButtonTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
