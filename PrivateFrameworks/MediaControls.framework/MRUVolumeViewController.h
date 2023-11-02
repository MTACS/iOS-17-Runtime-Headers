
@interface MRUVolumeViewController : UIViewController <CCUIContentModuleContentViewController, CCUIGroupRendering, MPVolumeDisplaying, MRUAudioModuleControllerObserver> {
    MRUAudioModuleController * _audioModuleController;
    <MRUVolumeViewControllerDelegate> * _delegate;
    bool  _primaryInteractionEnabled;
    bool  _secondaryInteractionEnabled;
}

@property (nonatomic, retain) MRUAudioModuleController *audioModuleController;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUVolumeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isGroupRenderingRequired, nonatomic, readonly) bool groupRenderingRequired;
@property (readonly) unsigned long long hash;
@property (getter=isOnScreen, nonatomic, readonly) bool onScreen;
@property (getter=isOnScreenForVolumeDisplay, nonatomic, readonly) bool onScreenForVolumeDisplay;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) double preferredExpandedContinuousCornerRadius;
@property (nonatomic) bool primaryInteractionEnabled;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (nonatomic, readonly) NSArray *punchOutRenderingViews;
@property (nonatomic, readonly) NSArray *punchOutRootLayers;
@property (nonatomic) bool secondaryInteractionEnabled;
@property (nonatomic, readonly) bool shouldPerformClickInteraction;
@property (nonatomic, readonly) bool shouldPerformHoverInteraction;
@property (nonatomic, readonly) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) MRUVolumeView *view;
@property (nonatomic, retain) MRUVolumeView *viewIfLoaded;
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)audioModuleController;
- (void)audioModuleController:(id)arg1 spatialAudioController:(id)arg2 didChangeAvailableSpatialModes:(id)arg3;
- (void)audioModuleController:(id)arg1 systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg2;
- (void)audioModuleController:(id)arg1 systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg2;
- (void)audioModuleController:(id)arg1 volumeController:(id)arg2 didChangeVolumeControlCapabilities:(unsigned int)arg3 effectiveVolumeValue:(float)arg4 forType:(long long)arg5;
- (void)dealloc;
- (void)decreaseTouchUpInside:(id)arg1;
- (id)delegate;
- (void)didTransitionToExpandedContentMode:(bool)arg1;
- (void)increaseTouchUpInside:(id)arg1;
- (id)initWithAudioModuleController:(id)arg1;
- (bool)isGroupRenderingRequired;
- (bool)isOnScreen;
- (void)loadView;
- (double)preferredExpandedContentHeight;
- (double)preferredExpandedContentWidth;
- (bool)primaryInteractionEnabled;
- (void)primarySliderValueDidChange:(id)arg1;
- (bool)providesOwnPlatter;
- (id)punchOutRenderingViews;
- (bool)secondaryInteractionEnabled;
- (void)secondarySliderValueDidChange:(id)arg1;
- (void)setAudioModuleController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrimaryInteractionEnabled:(bool)arg1;
- (void)setSecondaryInteractionEnabled:(bool)arg1;
- (bool)shouldExpandModuleOnTouch:(id)arg1;
- (id)stylingProvider;
- (void)updatePrimarySliderVolumeValueAfterDelay;
- (void)updatePrimarySliderVolumeValueAnimated:(bool)arg1;
- (void)updateSecondarySliderVolumeValueAnimated:(bool)arg1;
- (void)updateSliderAsset;
- (void)updateSliderInteractionEnabled;
- (void)updateVisibility;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)volumeAudioCategory;
- (id)windowSceneForVolumeDisplay;

@end
