
@interface PXSharedLibraryReplyAssistantViewController : OBWelcomeController <PXAssistantViewController, PXChangeObserver> {
    PXSharedLibraryLegacyDevicesFallbackMonitor * _legacyDevicesFallbackMonitor;
    OBBoldTrayButton * _setupButton;
    UITextView * _textView;
    PXSharedLibraryAssistantViewModel * _viewModel;
    bool  _wantsToStepForward;
    <PXAssistantViewControllerDelegate> * assistantViewControllerDelegate;
}

@property (nonatomic) <PXAssistantViewControllerDelegate> *assistantViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor;
@property (nonatomic, retain) OBBoldTrayButton *setupButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXSharedLibraryAssistantViewModel *viewModel;
@property (nonatomic) bool wantsToStepForward;

- (void).cxx_destruct;
- (bool)_canStepForward;
- (void)_setIsWaitingToStepForward:(bool)arg1;
- (void)_stepForward;
- (void)_updateImage;
- (void)_updateTextView;
- (void)acceptAndContinue;
- (id)assistantViewControllerDelegate;
- (void)declineButtonTapped:(id)arg1;
- (void)declineInvitation;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithViewModel:(id)arg1 legacyDevicesFallbackMonitor:(id)arg2;
- (id)legacyDevicesFallbackMonitor;
- (void)legacyDevicesFallbackMonitorChangedState;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setAssistantViewControllerDelegate:(id)arg1;
- (void)setSetupButton:(id)arg1;
- (void)setWantsToStepForward:(bool)arg1;
- (id)setupButton;
- (void)setupButtonTapped:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)viewModel;
- (bool)wantsToStepForward;

@end
