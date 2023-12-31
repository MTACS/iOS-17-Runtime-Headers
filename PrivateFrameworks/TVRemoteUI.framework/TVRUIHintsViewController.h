
@interface TVRUIHintsViewController : UIViewController <TPKContentControllerDelegate, TVRUIContentPresenter, TVRUIRemoteViewControllerDelegate> {
    bool  _allowSiriHint;
    bool  _allowTips;
    bool  _allowVolumeHint;
    UIViewPropertyAnimator * _dismissalAnimator;
    TVRUIDeviceHardwareInfo * _hardwareInfo;
    NSString * _lastSeenDeviceName;
    UIViewPropertyAnimator * _presentationAnimator;
    bool  _presentingTip;
    TVRUIHintsGlyphView * _siriGlyphView;
    <TVRUIHintsStyleProvider> * _styleProvider;
    bool  _supportsSiri;
    bool  _supportsVolume;
    TPKContent * _tipContent;
    TPKContentController * _tipContentController;
    TPKContentPopoverViewController * _tipContentViewController;
    TVRUIHintsUserIntentButtonView * _userIntentButtonHint;
    TVRUIHintsVolumeButtonsView * _volumeButtonsHint;
    TVRUIHintsGlyphView * _volumeGlyphView;
}

@property (nonatomic) bool allowSiriHint;
@property (nonatomic) bool allowTips;
@property (nonatomic) bool allowVolumeHint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIViewPropertyAnimator *dismissalAnimator;
@property (nonatomic, retain) TVRUIDeviceHardwareInfo *hardwareInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastSeenDeviceName;
@property (nonatomic, retain) UIViewPropertyAnimator *presentationAnimator;
@property (getter=isPresentingTip, nonatomic) bool presentingTip;
@property (nonatomic, retain) TVRUIHintsGlyphView *siriGlyphView;
@property (nonatomic, retain) <TVRUIHintsStyleProvider> *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsSiri;
@property (nonatomic) bool supportsVolume;
@property (nonatomic, retain) TPKContent *tipContent;
@property (nonatomic, retain) TPKContentController *tipContentController;
@property (nonatomic, retain) TPKContentPopoverViewController *tipContentViewController;
@property (nonatomic, retain) TVRUIHintsUserIntentButtonView *userIntentButtonHint;
@property (nonatomic, retain) TVRUIHintsVolumeButtonsView *volumeButtonsHint;
@property (nonatomic, retain) TVRUIHintsGlyphView *volumeGlyphView;

- (void).cxx_destruct;
- (void)_applyTransformForOrientation:(long long)arg1;
- (bool)_canShowWhileLocked;
- (void)_cleanupHints;
- (void)_dismissHintsWithCompletion:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForUserIntentButtonPresented:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForVolumeButtonsPresented:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_gylphTransformForOrientation:(long long)arg1;
- (void)_largeTextEnabledStatusChanged:(id)arg1;
- (unsigned long long)_permittedArrowDirectionsForDevice:(id)arg1;
- (void)_presentTipContentViewControllerAnimated:(bool)arg1;
- (void)_presentVolumeButtonPressWithPresentation:(unsigned long long)arg1;
- (void)_setupDebugUIIfEnabled;
- (void)_setupTipsControllerIfNeeded;
- (void)_setupUserIntentButtonHintWithPresentation:(unsigned long long)arg1;
- (void)_setupVolumeButtonsHintWithPresentation:(unsigned long long)arg1;
- (bool)_shouldAllowHintsToPresent;
- (void)_siriActivated:(id)arg1;
- (void)_siriDeactivated:(id)arg1;
- (bool)_siriHintEnabled;
- (void)_updateUserIntentButtonHintFrameForPresentation:(unsigned long long)arg1;
- (void)_updateVolumeButtonsHintFrameWithPresentation:(unsigned long long)arg1;
- (void)_volumeDownButtonPressed:(id)arg1;
- (bool)_volumeHintEnabled;
- (void)_volumeUpButtonPressed:(id)arg1;
- (bool)allowSiriHint;
- (bool)allowTips;
- (bool)allowVolumeHint;
- (id)contentController:(id)arg1 content:(id)arg2 iconForCustomizationID:(long long)arg3;
- (void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(bool)arg3;
- (void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(bool)arg3;
- (long long)currentInterfaceOrientation;
- (void)dealloc;
- (void)device:(id)arg1 supportsSiri:(bool)arg2 volume:(bool)arg3;
- (void)devicePickerWillExpand;
- (void)dismissHints;
- (void)dismissPresentedContentAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)dismissalAnimator;
- (id)hardwareInfo;
- (bool)hasPresentedContent;
- (id)init;
- (bool)isPresentingTip;
- (id)lastSeenDeviceName;
- (id)presentationAnimator;
- (void)remoteWillBeDismissed;
- (void)replayHints;
- (void)requestHintsForSiri:(bool)arg1 volume:(bool)arg2;
- (void)setAllowSiriHint:(bool)arg1;
- (void)setAllowTips:(bool)arg1;
- (void)setAllowVolumeHint:(bool)arg1;
- (void)setDismissalAnimator:(id)arg1;
- (void)setHardwareInfo:(id)arg1;
- (void)setLastSeenDeviceName:(id)arg1;
- (void)setPresentationAnimator:(id)arg1;
- (void)setPresentingTip:(bool)arg1;
- (void)setSiriGlyphView:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setSupportsSiri:(bool)arg1;
- (void)setSupportsVolume:(bool)arg1;
- (void)setTipContent:(id)arg1;
- (void)setTipContentController:(id)arg1;
- (void)setTipContentViewController:(id)arg1;
- (void)setUserIntentButtonHint:(id)arg1;
- (void)setVolumeButtonsHint:(id)arg1;
- (void)setVolumeGlyphView:(id)arg1;
- (id)siriGlyphView;
- (id)styleProvider;
- (bool)supportsSiri;
- (bool)supportsVolume;
- (id)tipContent;
- (id)tipContentController;
- (id)tipContentViewController;
- (id)userIntentButtonHint;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)volumeButtonsHint;
- (id)volumeGlyphView;

@end
