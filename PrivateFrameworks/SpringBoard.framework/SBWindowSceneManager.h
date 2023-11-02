
@interface SBWindowSceneManager : NSObject <SBMultiDisplayUserInteractionCoordinatorDelegate> {
    _SBActiveDisplayKeyboardFocusTracker * _keyboardFocusTracker;
    NSMutableSet * _mutableConnectedWindowScenes;
    SBMultiDisplayUserInteractionCoordinator * _userInteractionCoordinator;
}

@property (nonatomic, readonly) SBWindowScene *activeDisplayWindowScene;
@property (nonatomic, readonly) SBWindowScene *activeDisplayWindowSceneFollowingKeyboard;
@property (nonatomic, readonly) SBWindowScene *activeDisplayWindowSceneFollowingUserInteraction;
@property (nonatomic, readonly, copy) NSSet *connectedWindowScenes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SBActiveDisplayKeyboardFocusTracker *keyboardFocusTracker;
@property (nonatomic, readonly) NSMutableSet *mutableConnectedWindowScenes;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBMultiDisplayUserInteractionCoordinator *userInteractionCoordinator;

- (void).cxx_destruct;
- (id)_embeddedDisplayWindowScene;
- (void)_sceneDidDisconnect:(id)arg1;
- (void)_sceneWillConnect:(id)arg1;
- (id)_validateSuggestedActiveWindowScene:(id)arg1 usingMethodology:(long long)arg2;
- (id)activeDisplayWindowScene;
- (id)activeDisplayWindowSceneFollowingKeyboard;
- (id)activeDisplayWindowSceneFollowingUserInteraction;
- (id)connectedWindowScenes;
- (id)embeddedDisplayWindowScene;
- (id)initWithUserInteractionCoordinator:(id)arg1;
- (id)keyboardFocusTracker;
- (id)mutableConnectedWindowScenes;
- (void)setKeyboardFocusTracker:(id)arg1;
- (void)setUserInteractionCoordinator:(id)arg1;
- (id)userInteractionCoordinator;
- (id)windowSceneForDisplayIdentity:(id)arg1;
- (id)windowSceneForPersistentIdentifier:(id)arg1;
- (id)windowSceneForSceneHandle:(id)arg1;
- (id)windowSceneForSceneIdentifier:(id)arg1;

@end
