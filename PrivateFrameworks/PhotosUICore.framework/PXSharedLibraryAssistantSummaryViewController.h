
@interface PXSharedLibraryAssistantSummaryViewController : OBWelcomeController <PXAssistantViewController, PXChangeObserver> {
    PXLibraryFilterState * _libraryFilterState;
    OBBoldTrayButton * _previewButton;
    NSProgress * _previewProgress;
    NSLayoutConstraint * _progressHeightConstraint;
    UILabel * _progressLabel;
    PXRoundProgressView * _progressView;
    OBTrayButton * _skipPreviewButton;
    PXSharedLibraryStatusProvider * _statusProvider;
    PXSharedLibraryAssistantViewModel * _viewModel;
    <PXAssistantViewControllerDelegate> * assistantViewControllerDelegate;
}

@property (nonatomic) <PXAssistantViewControllerDelegate> *assistantViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, retain) NSProgress *previewProgress;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXSharedLibraryAssistantViewModel *viewModel;

- (void).cxx_destruct;
- (void)_createPreviewAndCompleteAssistant;
- (id)_presentationEnvironment;
- (void)_previewInvitationAndCompleteAssistant;
- (void)_setIsProcessing:(bool)arg1;
- (id)assistantViewControllerDelegate;
- (void)cancelShareIfInProgress;
- (void)createPreviewAndCompleteAssistant;
- (id)initWithViewModel:(id)arg1 sharedLibraryStatusProvider:(id)arg2 libraryFilterState:(id)arg3;
- (id)libraryFilterState;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepareUIForProcessing:(bool)arg1;
- (id)previewProgress;
- (void)primaryButtonTapped:(id)arg1;
- (void)secondaryButtonTapped:(id)arg1;
- (void)setAssistantViewControllerDelegate:(id)arg1;
- (void)setPreviewProgress:(id)arg1;
- (void)skipAndContinue;
- (id)statusProvider;
- (void)updateProgress;
- (void)viewDidLoad;
- (id)viewModel;

@end
