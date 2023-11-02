
@interface SBCoverSheetSceneManager : NSObject {
    UIWindow * _coverSheetWindow;
    <BSInvalidatable> * _displayLayoutAssertion;
    UIApplicationSceneDeactivationAssertion * _notificationCenterAssertion;
    NSMutableArray * _pendingSceneUpdateBlocks;
    bool  _performingSceneUpdate;
    <BSInvalidatable> * _stateCaptureInvalidatable;
    UIApplicationSceneDeactivationAssertion * _systemAnimationAssertion;
}

@property (nonatomic) UIWindow *coverSheetWindow;
@property (nonatomic, retain) <BSInvalidatable> *displayLayoutAssertion;
@property (nonatomic, retain) UIApplicationSceneDeactivationAssertion *notificationCenterAssertion;
@property (nonatomic, retain) NSMutableArray *pendingSceneUpdateBlocks;
@property (getter=isPerformingSceneUpdate, nonatomic) bool performingSceneUpdate;
@property (nonatomic, retain) <BSInvalidatable> *stateCaptureInvalidatable;
@property (nonatomic, retain) UIApplicationSceneDeactivationAssertion *systemAnimationAssertion;

- (void).cxx_destruct;
- (void)_performNextSceneUpdateBlock;
- (void)_performSceneUpdateBlock:(id /* block */)arg1;
- (void)_setDisplayLayoutElementActive:(bool)arg1;
- (void)_setSceneBackgrounded:(bool)arg1 suspendUnderLockEnvironment:(bool)arg2;
- (void)_updateForegroundScenesForNotificationCenter:(bool)arg1;
- (id)coverSheetWindow;
- (id)displayLayoutAssertion;
- (id)initWithCoverSheetWindow:(id)arg1;
- (bool)isPerformingSceneUpdate;
- (id)notificationCenterAssertion;
- (id)pendingSceneUpdateBlocks;
- (void)setCoverSheetWindow:(id)arg1;
- (void)setDisplayLayoutAssertion:(id)arg1;
- (void)setNotificationCenterAssertion:(id)arg1;
- (void)setPendingSceneUpdateBlocks:(id)arg1;
- (void)setPerformingSceneUpdate:(bool)arg1;
- (void)setStateCaptureInvalidatable:(id)arg1;
- (void)setSystemAnimationAssertion:(id)arg1;
- (id)stateCaptureInvalidatable;
- (id)systemAnimationAssertion;
- (void)updateForegroundScenesForCoverSheetAnimationActive:(bool)arg1;
- (void)updateSceneManagerForPresented:(bool)arg1 suspendUnderLockEnvironment:(bool)arg2;

@end
