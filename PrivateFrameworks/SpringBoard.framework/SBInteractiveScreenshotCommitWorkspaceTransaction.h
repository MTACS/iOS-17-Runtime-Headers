
@interface SBInteractiveScreenshotCommitWorkspaceTransaction : SBMainWorkspaceTransaction <SBTransientOverlayPresentWorkspaceTransactionObserver> {
    NSUUID * _gestureSessionID;
    bool  _hasBeganPresentation;
    bool  _hasFinishedFlashAnimation;
    bool  _hasFinishedPresentation;
    bool  _hasFinishedSettlingAnimation;
    bool  _hasQueuedPresentationTransaction;
    bool  _hasRequestedPlaceholderChromeRemoval;
    bool  _hasWatchdogExpired;
    <SBInteractiveScreenshotCommitWorkspaceTransactionDelegate> * _interactiveScreenshotCommitDelegate;
    SBTransientOverlayViewController * _screenshotMarkupTransientOverlayViewController;
    NSTimer * _watchdogTimeoutTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSUUID *gestureSessionID;
@property (nonatomic) bool hasFinishedFlashAnimation;
@property (nonatomic) bool hasFinishedSettlingAnimation;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBInteractiveScreenshotCommitWorkspaceTransactionDelegate> *interactiveScreenshotCommitDelegate;
@property (nonatomic, retain) SBTransientOverlayViewController *screenshotMarkupTransientOverlayViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_begin;
- (void)_handleWatchdogTimeout;
- (void)_updateState;
- (id)gestureSessionID;
- (bool)hasFinishedFlashAnimation;
- (bool)hasFinishedSettlingAnimation;
- (id)initWithTransitionRequest:(id)arg1 gestureSessionID:(id)arg2;
- (id)interactiveScreenshotCommitDelegate;
- (id)screenshotMarkupTransientOverlayViewController;
- (void)setHasFinishedFlashAnimation:(bool)arg1;
- (void)setHasFinishedSettlingAnimation:(bool)arg1;
- (void)setInteractiveScreenshotCommitDelegate:(id)arg1;
- (void)setScreenshotMarkupTransientOverlayViewController:(id)arg1;
- (void)transientOverlayPresentWorkspaceTransactionDidPerformPresentation:(id)arg1;

@end
