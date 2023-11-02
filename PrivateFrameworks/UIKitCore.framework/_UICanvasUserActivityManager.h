
@interface _UICanvasUserActivityManager : NSObject <UIActivityContinuationManagerApplicationContext, _UISceneComponentProviding> {
    UIActivityContinuationManager * _activityContinuationManager;
    NSSet * _activityTypesForDefaultProgressUI;
    NSDictionary * _connectionOptionsRestorationActivityDictionary;
    bool  _initialRestorationIsFinished;
    bool  _isDisplayingActivityContinuationUI;
    NSUserActivity * _restorationActivity;
    UIScene * _weakScene;
}

@property (getter=_activityContinuationManager, nonatomic, readonly) UIActivityContinuationManager *_activityContinuationManager;
@property (nonatomic, readonly) bool _initialRestorationIsFinished;
@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_isDisplayingActivityContinuationUI, setter=_setIsDisplayingActivityContinuationUI:, nonatomic) bool isDisplayingActivityContinuationUI;
@property (readonly) Class superclass;

+ (id)_activityContinuationDictionaryWithAction:(id)arg1 sourceApplication:(id)arg2 originatingProcess:(id)arg3;
+ (void)_deleteSavedSceneSessionDirectoryWithPersistentIdentifier:(id)arg1;
+ (void)_deleteSceneSessionsWithPersistentIdentifiers:(id)arg1;
+ (id)_fetchSceneSessionWithPersistentIdentifier:(id)arg1;
+ (id)_getRestorationUserActivityForPersistentIdentifier:(id)arg1 error:(id*)arg2;
+ (id)_getUserInfoForPersistentIdentifier:(id)arg1 error:(id*)arg2;
+ (void)_initializeUserActivityManager;
+ (id)_knownSceneSessionMap;
+ (bool)_restorationUserActivityAvailableForSceneIdentifier:(id)arg1;
+ (void)_saveRestorationStateForScene:(id)arg1;
+ (void)_scheduleDataSaveForSceneSession:(id)arg1 saveRestorationActivity:(bool)arg2;
+ (void)_showProgressForScene:(id)arg1 whenFetchingUserActivityForTypes:(id)arg2;
+ (void)_updatePersistedSceneSession:(id)arg1;
+ (id)_userActivityManagerForScene:(id)arg1;

- (void).cxx_destruct;
- (id)_activityContinuationManager;
- (void)_checkActivityContinuationAndBecomeCurrentIfNeeded;
- (bool)_initialRestorationIsFinished;
- (bool)_isDisplayingActivityContinuationUI;
- (void)_performCanvasRestoration;
- (void)_performCanvasRestorationIfNecessary;
- (void)_saveOrClearRestorationDictionary:(id)arg1 forScene:(id)arg2;
- (void)_saveSceneRestorationState;
- (id)_scene;
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_sceneWillInvalidate:(id)arg1;
- (void)_setIsDisplayingActivityContinuationUI:(bool)arg1;
- (void)_setScene:(id)arg1;
- (void)_setupCanvasRestorationState;
- (id)_updateCanvasConnectionOptionsDictionary:(id)arg1;
- (void)activityContinuationManager:(id)arg1 configureProgressUIWithError:(id)arg2;
- (bool)activityContinuationManager:(id)arg1 continueUserActivity:(id)arg2;
- (void)activityContinuationManager:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (void)activityContinuationManager:(id)arg1 didUpdateUserActivity:(id)arg2;
- (void)activityContinuationManager:(id)arg1 displayProgressUI:(id)arg2 dismissalHandler:(id /* block */)arg3;
- (void)activityContinuationManager:(id)arg1 hideProgressUIWithCompletion:(id /* block */)arg2;
- (bool)activityContinuationManager:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (bool)activityContinuationManagerHandleErrorsByConfiguringProgressUI:(id)arg1;
- (id)activityContinuationManagerUserCancelledError:(id)arg1;
- (id)initWithScene:(id)arg1;

@end
