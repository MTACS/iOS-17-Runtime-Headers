
@interface SBDashBoardIdleTimerController : NSObject <CSExternalEventHandling, CSIdleTimerControlling, SBDashBoardIdleTimerProviderDelegate, SBIdleTimerProviding, SBLockScreenIdleTimerControlling> {
    CSCoverSheetViewController * _coverSheetViewController;
    SBDashBoardIdleTimerProvider * _dashBoardIdleTimerProvider;
    <SBIdleTimerCoordinating> * _idleTimerCoordinator;
}

@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBIdleTimerCoordinating> *idleTimerCoordinator;
@property (nonatomic, readonly) long long participantState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addIdleTimerDisabledAssertionReason:(id)arg1;
- (void)conformsToCSEventHandling;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)coverSheetIdentifier;
- (id)dashBoardIdleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 reason:(id)arg3;
- (void)dealloc;
- (bool)handleEvent:(id)arg1;
- (id)idleTimerCoordinator;
- (void)idleTimerDidChange:(id)arg1;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (void)idleTimerWillRefresh:(id)arg1;
- (id)initWithCoverSheetViewController:(id)arg1;
- (long long)participantState;
- (void)removeIdleTimerDisabledAssertionReason:(id)arg1;
- (id)requestIdleTimerBehaviorForReason:(id)arg1;
- (void)resetIdleTimerIfTopMost;
- (void)setIdleTimerCoordinator:(id)arg1;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
