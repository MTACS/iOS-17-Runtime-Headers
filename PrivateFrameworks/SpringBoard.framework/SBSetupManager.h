
@interface SBSetupManager : NSObject <SBAppInteractionEventSourceObserving, SBFloatingDockControllerObserver> {
    <BSInvalidatable> * _deferOrientationUpdatesAssertion;
    NSMapTable * _floatingDockBehaviorAssertionsByFloatingDockController;
    NSHashTable * _floatingDockControllers;
    bool  _inSetupModeReadyToExit;
    unsigned long long  _setupRequiredReason;
    bool  _setupWantedForDeviceMigration;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeferringDeviceOrientationUpdates, nonatomic) bool deferringDeviceOrientationUpdates;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMapTable *floatingDockBehaviorAssertionsByFloatingDockController;
@property (nonatomic, readonly) NSHashTable *floatingDockControllers;
@property (readonly) unsigned long long hash;
@property (getter=isInSetupMode, nonatomic, readonly) bool inSetupMode;
@property (getter=isInSetupModeForDeviceMigration, nonatomic, readonly) bool inSetupModeForDeviceMigration;
@property (getter=isInSetupModeReadyToExit, nonatomic) bool inSetupModeReadyToExit;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_invalidateFloatingDockBehaviorAssertions;
- (bool)_isInSetupMode;
- (bool)_setSetupRequiredReason:(unsigned long long)arg1;
- (void)_setupProcessChangedNotificationReceived:(id)arg1;
- (void)_takeFloatingDockBehaviorAssertionForFloatingDockController:(id)arg1;
- (void)_takeFloatingDockBehaviorAssertions;
- (void)_toggleSetupForMigrationNeeded:(bool)arg1 forReason:(id)arg2;
- (void)dealloc;
- (void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (id)floatingDockBehaviorAssertionsByFloatingDockController;
- (void)floatingDockControllerDidRegister:(id)arg1;
- (id)floatingDockControllers;
- (id)init;
- (bool)isDeferringDeviceOrientationUpdates;
- (bool)isInSetupMode;
- (bool)isInSetupModeForDeviceMigration;
- (bool)isInSetupModeReadyToExit;
- (void)noteAuthenticationSucceededWithPasscode:(id)arg1;
- (void)postLaunchCompleteNotificationForSetup;
- (void)setDeferringDeviceOrientationUpdates:(bool)arg1;
- (void)setInSetupModeReadyToExit:(bool)arg1;
- (bool)setupHasFinishedRestoringFromBackup;
- (bool)updateInSetupMode;

@end
