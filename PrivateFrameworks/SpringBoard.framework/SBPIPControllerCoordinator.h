
@interface SBPIPControllerCoordinator : NSObject <SBApplicationHosting, SBIdleTimerProviding> {
    NSMapTable * _controllerInterruptionAssertionsByCoordinatorAssertion;
    NSMutableDictionary * _controllersByType;
    NSMapTable * _coordinatorAssertionToInterruptionAssertionMap;
    NSMutableSet * _pictureInPictureWindowsHiddenReasons;
    SBWindowSceneManager * _windowSceneManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIdleTimerBehaviors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBWindowSceneManager *windowSceneManager;

- (void).cxx_destruct;
- (void)_enumerateControllersByDescendingPriority:(id /* block */)arg1;
- (id)acquireInterruptionAssertionForReason:(long long)arg1 identifier:(id)arg2;
- (bool)canHostAnApp;
- (void)conformsToSBApplicationHosting;
- (id)controllerForType:(long long)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)handleDestructionRequestForSceneHandles:(id)arg1;
- (bool)hasIdleTimerBehaviors;
- (id)hostedAppSceneHandle;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)init;
- (bool)isAnyPictureInPictureWindowVisible;
- (bool)isHostingAnApp;
- (bool)isPresentingPictureInPictureRequiringMedusaKeyboard;
- (void)registerController:(id)arg1 forType:(long long)arg2;
- (void)setPictureInPictureWindowsHidden:(bool)arg1 withReason:(id)arg2;
- (void)setWindowSceneManager:(id)arg1;
- (bool)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2 pipContentType:(long long)arg3;
- (long long)tetheringModeForScenePersistenceIdentifier:(id)arg1 pipContentType:(long long)arg2;
- (id)windowSceneManager;

@end
