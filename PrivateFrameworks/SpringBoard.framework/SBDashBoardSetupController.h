
@interface SBDashBoardSetupController : NSObject <CSExternalBehaviorProviding, CSExternalEventHandling> {
    CSCoverSheetViewController * _coverSheetViewController;
    SBSetupManager * _setupManager;
    SBDashBoardSetupViewController * _setupViewController;
}

@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addOrRemoveSetupViewIfNecessaryAnimated:(bool)arg1;
- (void)_clearSetupViewIfNecessaryAnimated:(bool)arg1;
- (void)_configureForCurrentSetupMode;
- (void)_setupModeChanged:(id)arg1;
- (void)conformsToCSBehaviorProviding;
- (void)conformsToCSEventHandling;
- (void)conformsToCSExternalBehaviorProviding;
- (id)coverSheetIdentifier;
- (void)dealloc;
- (bool)handleEvent:(id)arg1;
- (id)init;
- (id)initWithCoverSheetViewController:(id)arg1 setupManager:(id)arg2;
- (long long)notificationBehavior;
- (long long)participantState;
- (long long)proximityDetectionMode;
- (unsigned long long)restrictedCapabilities;
- (long long)scrollingStrategy;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
