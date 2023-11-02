
@interface SBSUIInCallWindowScene : UIWindowScene {
    SBUISystemApertureElementSource * _associatedSource;
    bool  _callConnected;
    bool  _deviceAttachedToWindowedAccessory;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _expanseHUDDodgingInsets;
    bool  _hasRequestedDestructionForInvalidState;
    bool  _idleTimerDisabled;
    NSSet * _preferredBackgroundActivitiesToSuppress;
    unsigned long long  _preferredHardwareButtonEventTypes;
    bool  _prefersBannersHiddenFromClonedDisplay;
    bool  _prefersHiddenWhenDismissed;
    long long  _presentationMode;
    NSUUID * _requestedPresentationConfigurationIdentifier;
    bool  _shouldBecomeVisibleWhenWakingDisplay;
    bool  _shouldNeverBeShownWhenLaunchingFaceTime;
    bool  _supportsDeviceLockEvents;
    long long  _validationState;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _windowedAccessoryCutoutFrameInScreen;
}

@property (nonatomic, readonly) UIViewController<SBUISystemApertureElement> *associatedSystemApertureElement;
@property (getter=isBeingShownAboveCoverSheet, nonatomic, readonly) bool beingShownAboveCoverSheet;
@property (getter=isCallConnected, nonatomic) bool callConnected;
@property (getter=isDeviceAttachedToWindowedAccessory, nonatomic, readonly) bool deviceAttachedToWindowedAccessory;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } expanseHUDDodgingInsets;
@property (getter=isIdleTimerDisabled, nonatomic) bool idleTimerDisabled;
@property (nonatomic, copy) NSSet *preferredBackgroundActivitiesToSuppress;
@property (nonatomic) unsigned long long preferredHardwareButtonEventTypes;
@property (nonatomic) unsigned long long preferredStatusBarStyleOverridesToSuppress;
@property (nonatomic) bool prefersBannersHiddenFromClonedDisplay;
@property (nonatomic) bool prefersHiddenWhenDismissed;
@property (nonatomic, readonly) long long presentationMode;
@property (nonatomic, readonly) NSUUID *requestedPresentationConfigurationIdentifier;
@property (getter=isScreenSharingPresentation, nonatomic, readonly) bool screenSharingPresentation;
@property (nonatomic) bool shouldBecomeVisibleWhenWakingDisplay;
@property (nonatomic) bool shouldNeverBeShownWhenLaunchingFaceTime;
@property (nonatomic) bool supportsDeviceLockEvents;
@property (nonatomic, readonly) bool systemControlsShouldPresentAsEmbedded;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } windowedAccessoryCutoutFrameInScreen;

- (void).cxx_destruct;
- (void)_associateWithSourceIfNeeded:(id)arg1;
- (void)_handleDeviceLockAction:(id)arg1;
- (void)_handleFrameChanged;
- (void)_handleHardwareButtonEventSceneActions:(id)arg1;
- (void)_handleSourceDidConnect:(id)arg1;
- (void)_invalidate;
- (void)_setAttachedToWindowedAccessory:(bool)arg1 windowedAccessoryCutoutFrameInScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_startObservingSystemApertureSourceConnectNotifications;
- (void)_updatePresentationMode:(long long)arg1 analyticsSource:(id)arg2;
- (void)_updateValidationStateIfNeededForPresentationMode:(long long)arg1;
- (id)associatedSystemApertureElement;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })expanseHUDDodgingInsets;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
- (bool)isBeingShownAboveCoverSheet;
- (bool)isCallConnected;
- (bool)isDeviceAttachedToWindowedAccessory;
- (bool)isIdleTimerDisabled;
- (bool)isScreenSharingPresentation;
- (id)preferredBackgroundActivitiesToSuppress;
- (unsigned long long)preferredHardwareButtonEventTypes;
- (unsigned long long)preferredStatusBarStyleOverridesToSuppress;
- (bool)prefersBannersHiddenFromClonedDisplay;
- (bool)prefersHiddenWhenDismissed;
- (long long)presentationMode;
- (void)requestTransitionToPresentationMode:(long long)arg1;
- (void)requestTransitionToPresentationMode:(long long)arg1 isUserInitiated:(bool)arg2;
- (void)requestTransitionToPresentationMode:(long long)arg1 isUserInitiated:(bool)arg2 analyticsSource:(id)arg3;
- (id)requestedPresentationConfigurationIdentifier;
- (void)setCallConnected:(bool)arg1;
- (void)setExpanseHUDDodgingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIdleTimerDisabled:(bool)arg1;
- (void)setPreferredBackgroundActivitiesToSuppress:(id)arg1;
- (void)setPreferredHardwareButtonEventTypes:(unsigned long long)arg1;
- (void)setPreferredStatusBarStyleOverridesToSuppress:(unsigned long long)arg1;
- (void)setPrefersBannersHiddenFromClonedDisplay:(bool)arg1;
- (void)setPrefersHiddenWhenDismissed:(bool)arg1;
- (void)setShouldBecomeVisibleWhenWakingDisplay:(bool)arg1;
- (void)setShouldNeverBeShownWhenLaunchingFaceTime:(bool)arg1;
- (void)setSupportsDeviceLockEvents:(bool)arg1;
- (bool)shouldBecomeVisibleWhenWakingDisplay;
- (bool)shouldNeverBeShownWhenLaunchingFaceTime;
- (bool)supportsDeviceLockEvents;
- (id)systemApertureElementViewControllerProvider;
- (bool)systemControlsShouldPresentAsEmbedded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })windowedAccessoryCutoutFrameInScreen;

@end
