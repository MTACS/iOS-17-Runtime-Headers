
@interface NTKGreenfieldCompanionContentViewController : BPSWelcomeOptinViewController <ASCLockupViewDelegate> {
    NSString * _addFaceDescription;
    ASCLockupView * _appStoreView;
    bool  _canAddFaceDirectly;
    NSNumber * _complicationItemId;
    NTKGreenfieldDecodedRecipe * _decodedRecipe;
    NSError * _error;
    NTKGreenfieldHighlightableFaceContainerView * _faceView;
    <NTKGreenfieldCompanionContentViewControllerDelegate> * _greenfieldDelegate;
    long long  _installMode;
    bool  _lockupViewDidUpdateStateForInstallingOrOpenable;
    bool  _lockupViewStateDidChange;
    NSArray * _skippedComplicationSlots;
    unsigned long long  _state;
    NSString * _unavailableDescription;
    NSSet * _unavailableSlots;
    NSString * _unavailableTitle;
    UIView<BPSWatchViewProtocol> * _watchView;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKGreenfieldCompanionContentViewControllerDelegate> *greenfieldDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_deviceSizeForCLKDeviceSizeClass:(unsigned long long)arg1;
- (void)_didTapAddToMyFacesButton;
- (void)_didTapShowInternalErrorButton;
- (id)_errorSubtitleForError:(id)arg1;
- (id)_errorTitleForError:(id)arg1;
- (void)_installLocallyAvailableApp;
- (void)_overrideLockup:(id)arg1 withButtonTitle:(id)arg2 buttonAction:(id /* block */)arg3;
- (void)_presentErrorUIAlert;
- (void)_reinstallAppWithAdamId:(id)arg1;
- (void)_reinstallSystemAppWithBundleId:(id)arg1;
- (void)_setupContentView;
- (void)_setupContentViewForWatchFaceNotAvailableError;
- (void)_setupWatchFaceViewContainerWithView:(id)arg1 deviceSize:(unsigned long long)arg2 deviceMaterial:(unsigned long long)arg3;
- (void)_updateComplicationDisplayStates;
- (struct CGPoint { double x1; double x2; })_watchScreenInsetForDeviceSize:(unsigned long long)arg1 screenScale:(double)arg2;
- (struct CGSize { double x1; double x2; })_watchScreenSizeForDeviceSize:(unsigned long long)arg1 screenScale:(double)arg2;
- (void)alternateButtonPressed:(id)arg1;
- (id)alternateButtonTitle;
- (id)detailString;
- (id)greenfieldDelegate;
- (id)initAddComplicationStateWithDecodedRecipe:(id)arg1 complicationItemId:(id)arg2 installMode:(long long)arg3 skippedComplicationSlots:(id)arg4;
- (id)initCompletedStateWithDecodedRecipe:(id)arg1 skippedComplicationSlots:(id)arg2 canRevisit:(bool)arg3;
- (id)initComplicationNotAvailableStateWithDecodedRecipe:(id)arg1 unavailableSlots:(id)arg2 unavailableTitle:(id)arg3 unavailableDescription:(id)arg4;
- (id)initStartStateWithDecodedRecipe:(id)arg1 canAddFaceDirectly:(bool)arg2 addFaceDescription:(id)arg3;
- (id)initWithError:(id)arg1 decodedRecipe:(id)arg2;
- (void)lockupView:(id)arg1 appStateDidChange:(id)arg2;
- (void)lockupViewDidFinishRequest:(id)arg1;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)refreshViews;
- (void)setGreenfieldDelegate:(id)arg1;
- (void)suggestedButtonPressed:(id)arg1;
- (id)suggestedButtonTitle;
- (id)titleString;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
