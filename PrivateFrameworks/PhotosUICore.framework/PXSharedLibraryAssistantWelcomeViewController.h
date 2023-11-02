
@interface PXSharedLibraryAssistantWelcomeViewController : OBWelcomeController <PXAssistantViewController, PXChangeObserver> {
    PXSharedLibraryLegacyDevicesFallbackMonitor * _legacyDevicesFallbackMonitor;
    PXSharedLibraryLegacyDevicesRemoteController * _legacyDevicesRemoteController;
    OBBoldTrayButton * _startButton;
    UITextView * _textView;
    bool  _wantsToStepForward;
    <PXAssistantViewControllerDelegate> * assistantViewControllerDelegate;
}

@property (nonatomic) <PXAssistantViewControllerDelegate> *assistantViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkLegacyDeviceMonitorAndAttemptStepForward;
- (double)_contentViewHeight;
- (void)_forceStepForward;
- (bool)_isLegacyDevicesFallbackMonitorEnabledAndReady;
- (void)_legacyDevicesFallbackMonitorChangedState;
- (void)_legacyDevicesRemoteControllerChangedState;
- (void)_updateTextView;
- (id)assistantViewControllerDelegate;
- (void)cancelButtonTapped:(id)arg1;
- (id)initWithLegacyDevicesFallbackMonitor:(id)arg1 legacyDevicesRemoteController:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setAssistantViewControllerDelegate:(id)arg1;
- (void)startButtonTapped:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
