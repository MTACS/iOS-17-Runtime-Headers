
@interface ACUISActivityHostViewController : UIViewController <ACUISActivitySceneHosting, ActivityUIServices.ActivityHostViewControllerDelegate, BSInvalidatable> {
    _TtC18ActivityUIServices26ActivityHostViewController * _activityHostViewController;
    ACUISActivitySceneDescriptor * _activitySceneDescriptor;
    <ACUISActivityHostViewControllerDelegate> * _delegate;
    unsigned long long  _visibility;
}

@property (nonatomic, readonly, copy) NSString *activityIdentifier;
@property (nonatomic, readonly) ACUISActivitySceneDescriptor *activitySceneDescriptor;
@property (nonatomic, readonly) NSArray *audioCategoriesDisablingVolumeHUD;
@property (nonatomic, readonly) UIColor *backgroundTintColor;
@property (nonatomic, readonly) <BLSHBacklightSceneHostEnvironment> *backlightHostEnvironment;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACUISActivityHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *hostIgnoredTouchedRects;
@property (nonatomic, readonly) bool idleTimerDisabled;
@property (nonatomic) unsigned long long presentationMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic) unsigned long long visibility;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)arg1;
- (void)activityHostViewControllerAudioCategoriesDisablingVolumeHUDDidChangeWithViewController:(id)arg1;
- (void)activityHostViewControllerBackgroundTintColorDidChangeWithViewController:(id)arg1;
- (void)activityHostViewControllerHostShouldCancelTouchesWithViewController:(id)arg1;
- (void)activityHostViewControllerSignificantUserInteractionBeganWithViewController:(id)arg1;
- (void)activityHostViewControllerSignificantUserInteractionEndedWithViewController:(id)arg1;
- (void)activityHostViewControllerTextColorDidChangeWithViewController:(id)arg1;
- (void)activityHostViewControllerWithViewController:(id)arg1 didSetIdleTimerDisabled:(bool)arg2;
- (void)activityHostViewControllerWithViewController:(id)arg1 requestsLaunchWithAction:(id)arg2;
- (id)activityIdentifier;
- (id)activitySceneDescriptor;
- (id)audioCategoriesDisablingVolumeHUD;
- (id)backgroundTintColor;
- (id)backlightHostEnvironment;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (void)dealloc;
- (id)delegate;
- (void)ensureContent:(double)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)hostIgnoredTouchedRects;
- (bool)idleTimerDisabled;
- (id)initWithActivityHostViewController:(id)arg1;
- (void)invalidate;
- (unsigned long long)presentationMode;
- (void)setDelegate:(id)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setShouldShareTouchesWithHost:(bool)arg1;
- (void)setVisibility:(unsigned long long)arg1;
- (unsigned int)swiftPresentationMode:(unsigned long long)arg1;
- (id)textColor;
- (void)viewDidLoad;
- (unsigned long long)visibility;

@end
