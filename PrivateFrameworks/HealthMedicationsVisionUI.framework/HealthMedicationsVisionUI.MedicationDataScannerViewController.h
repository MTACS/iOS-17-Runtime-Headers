
@interface HealthMedicationsVisionUI.MedicationDataScannerViewController : UIViewController <HKOntologyStoreObserver> {
    void $__lazy_storage_$_closeButton;
    void $__lazy_storage_$_dataScannerViewController;
    void $__lazy_storage_$_feedbackGenerator;
    void $__lazy_storage_$_regionOfInterestOverlay;
    void $__lazy_storage_$_tapToRadarButton;
    void accumulatedBarcodes;
    void accumulatedText;
    void allTokens;
    void analyticsContext;
    void analyticsCurrentAlgorithmType;
    void analyticsCurrentStep;
    void assetReady;
    void assetStateCanceller;
    void controlTimer;
    void coordinator;
    void coordinatorCanceller;
    void dataLock;
    void hasShownIntroduction;
    void healthStore;
    void introductionView;
    void loadingView;
    void ontologyStore;
    void resolutionEngine;
    void scannerDelegate;
    void tokenizer;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onClose;
- (void)ontologyStore:(id)arg1 didImportEntry:(id)arg2;
- (void)ontologyStore:(id)arg1 didStageEntry:(id)arg2;
- (void)ontologyStoreDidReconnect:(id)arg1;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tapToRadarButtonTappedWithSender:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
