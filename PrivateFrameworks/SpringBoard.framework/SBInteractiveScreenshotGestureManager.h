
@interface SBInteractiveScreenshotGestureManager : NSObject <BSTransactionObserver, SBAppInteractionEventSourceObserving, SBInteractiveScreenshotCommitWorkspaceTransactionDelegate, SBInteractiveScreenshotGestureRootViewControllerDelegate, SBSystemGestureRecognizerDelegate> {
    NSUUID * _activeGestureSessionID;
    SBDisplayAppInteractionEventSource * _appInteractionEventSource;
    SBAsynchronousRenderingAssertion * _asynchronousRenderingAssertion;
    SBCornerFingerPanGestureRecognizer * _bottomLeftFingerGestureRecognizer;
    SBCornerPencilPanGestureRecognizer * _bottomLeftPencilGestureRecognizer;
    SBCornerFingerPanGestureRecognizer * _bottomRightFingerGestureRecognizer;
    SBCornerPencilPanGestureRecognizer * _bottomRightPencilGestureRecognizer;
    SBInteractiveScreenshotCommitWorkspaceTransaction * _commitTransaction;
    <BSInvalidatable> * _commitTransactionDisableGestureAssertion;
    <SBInteractiveScreenshotGestureManagerDelegate> * _delegate;
    NSMutableSet * _disableGestureAssertions;
    bool  _hasInitiatedCommit;
    bool  _isCapturingScreenshot;
    double  _lastApplicationTouchTime;
    NSMutableArray * _pendingCommitWorkspaceTransactionBlocks;
    UIScreen * _screen;
    NSMutableDictionary * _sessionIDToSession;
    SBInteractiveScreenshotSettings * _settings;
    SBSystemGestureManager * _systemGestureManager;
    NSHashTable * _weakReusableGestureRootWindows;
    SBWindowScene * _windowScene;
    SBMainWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBInteractiveScreenshotGestureManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleInteractiveScreenshotGesture:(id)arg1;
- (void)_invalidateSessionID:(id)arg1;
- (void)_performCommitWorkspaceTransactionBlock:(id /* block */)arg1;
- (void)_performPendingCommitWorkspaceTransactionBlocksWithTransaction:(id)arg1;
- (id)_screenshotPresentationOptions;
- (void)_springBoardBootCompleted:(id)arg1;
- (unsigned long long)_touchTypeForGestureRecognizer:(id)arg1;
- (void)_updateFailureRequirements;
- (id)acquireDisableGestureAssertionWithReason:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)handleRemoteTransientOverlayPresentationRequest:(id)arg1 forSession:(id)arg2;
- (id)initWithWindowScene:(id)arg1 workspace:(id)arg2 appInteractionEventSource:(id)arg3;
- (void)interactiveScreenshotCommitWorkspaceTransactionRequestsGestureWindowInvalidation:(id)arg1;
- (void)interactiveScreenshotCommitWorkspaceTransactionRequestsPlaceholderChromeRemoval:(id)arg1;
- (void)interactiveScreenshotGestureRootViewController:(id)arg1 gestureDidCompleteWithIntent:(long long)arg2;
- (void)interactiveScreenshotGestureRootViewControllerRequestsGestureRecognizerCancellation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;

@end
