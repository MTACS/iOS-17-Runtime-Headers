
@interface AFUISceneController : NSObject <FBApplicationUpdateScenesTransactionObserver, FBSceneObserver> {
    BKSProcessAssertion * _backgroundRunningAssertion;
    FBApplicationUpdateScenesTransaction * _createTransaction;
    <AFUISceneControllerDelegate> * _delegate;
    unsigned long long  _invalidationReason;
    AFUISceneConfiguration * _pendingConfigurationToApply;
    FBScene * _scene;
    bool  _sceneForeground;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUISceneControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentConfiguration;
- (void)_recordSceneCreateBegin;
- (void)_recordSceneCreateEnd;
- (void)cancelSceneLoadingTimeOut;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)invalidateSceneForReason:(unsigned long long)arg1 explanation:(id)arg2;
- (void)requestSceneViewWithConfiguration:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (void)sceneLoadingTimeOutDidOccur;
- (void)setDelegate:(id)arg1;
- (void)startSceneLoadingTimeOutTimerWithDuration:(double)arg1;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)updateSceneViewWithConfiguration:(id)arg1;

@end
