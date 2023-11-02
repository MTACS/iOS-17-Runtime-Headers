
@interface HKCDADocumentDetailViewController : UIViewController <HKAdaptiveModalPresented> {
    HKCDADocumentReportViewController * _formattedReportController;
    HKLargePlainTextViewController * _plainTextReportController;
    _HKReportSegmentControl * _reportSegmentControl;
    UIBarButtonItem * _searchButton;
    HKBarButtonItemControl * _searchInSegmentControl;
    UIStackView * _stackView;
}

@property (nonatomic, readonly) HKCDADocumentReportViewController *formattedReportController;
@property (nonatomic, readonly) HKLargePlainTextViewController *plainTextReportController;
@property (nonatomic, readonly) _HKReportSegmentControl *reportSegmentControl;
@property (nonatomic, readonly) UIBarButtonItem *searchButton;
@property (nonatomic, readonly) HKBarButtonItemControl *searchInSegmentControl;
@property (nonatomic, readonly) UIStackView *stackView;

- (void).cxx_destruct;
- (void)_replaceLastArrangedViewWith:(id)arg1;
- (void)changeReportDisplayed:(id)arg1;
- (id)formattedReportController;
- (id)initWithReportData:(id)arg1;
- (id)plainTextReportController;
- (id)reportSegmentControl;
- (id)searchButton;
- (void)searchButtonAction:(id)arg1;
- (id)searchInSegmentControl;
- (id)stackView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
