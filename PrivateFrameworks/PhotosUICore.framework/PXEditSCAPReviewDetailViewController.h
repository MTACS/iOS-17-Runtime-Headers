
@interface PXEditSCAPReviewDetailViewController : UIViewController <PXTapToRadarDiagnosticProvider> {
    void closeButton;
    void feedbackButton;
    void sourceImagesStackView;
    void sourceViewButton;
    void ttrQueue;
    void viewModel;
    void viewModelObservation;
}

- (void).cxx_destruct;
- (void)closeButtonTapped;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (void)feedbackButtonTapped;
- (void)handleDismissWithRecognizer:(id)arg1;
- (void)handleFitToggleWithRecognizer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithViewModel:(id)arg1;
- (void)loadView;
- (void)sourceViewButtonTapped;

@end
