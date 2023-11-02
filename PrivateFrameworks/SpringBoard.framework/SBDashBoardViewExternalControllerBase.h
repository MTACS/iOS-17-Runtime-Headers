
@interface SBDashBoardViewExternalControllerBase : CSCoverSheetViewControllerBase <CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSExternalEventHandling, CSExternalPresentationProviding> {
    bool  _externalToDashBoard;
}

@property (nonatomic, readonly, copy) NSString *appearanceIdentifier;
@property (nonatomic, readonly, copy) NSSet *components;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExternalToDashBoard, nonatomic, readonly) bool externalToDashBoard;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) <UICoordinateSpace> *presentationCoordinateSpace;
@property (nonatomic, readonly, copy) NSArray *presentationRegions;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (readonly) Class superclass;

- (id)_presenter;
- (void)_registerAsExternalProviderIfNeeded;
- (void)_unregisterAsExternalProvider;
- (void)conformsToCSExternalBehaviorProviding;
- (bool)isExternalToDashBoard;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
