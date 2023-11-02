
@interface AXSpringBoardServerSideAppManager : NSObject {
    <AXSpringBoardServerSideAppManagerDelegate> * _delegate;
    unsigned long long  _dockIconActivationMode;
}

@property (nonatomic) <AXSpringBoardServerSideAppManagerDelegate> *delegate;
@property (nonatomic) unsigned long long dockIconActivationMode;

+ (id)_mainDisplaySceneManager;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_activeApplicationBundleIdentifiers;
- (void)_addFloatingApplicationGesturesIfAllowed:(id)arg1;
- (void)_addResizeGestureRecognizerGesturesIfAllowed:(id)arg1;
- (id)_appForLayoutRole:(long long)arg1 layoutState:(id)arg2;
- (id)_appWithIdentifier:(id)arg1;
- (id)_applicationController;
- (id)_bundleIdentifierForIconView:(id)arg1;
- (long long)_currentFloatingConfiguration;
- (long long)_currentSpaceConfiguration;
- (void)_endDockIconActivationModeAfterTimeout;
- (void)_enumerateAppsAndLayoutRoles:(id /* block */)arg1;
- (id)_firstFloatingAppLayout;
- (id)_floatingAppRootViewController;
- (bool)_hasFloatingApp;
- (bool)_hasPinnedApp;
- (bool)_isDockIconView:(id)arg1;
- (id)_mainDisplaySceneManager;
- (void)_performMedusaGesture:(unsigned long long)arg1;
- (void)_performSwipeOnFloatingAppSwitcher:(unsigned long long)arg1;
- (void)_performValidation;
- (void)_requestFloatingAppSwitcherVisible;
- (void)_requestTransactionWithPrimaryEntity:(id)arg1 sideEntity:(id)arg2 floatingEntity:(id)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5;
- (id)_sbEmptyEntity;
- (id)_sbPreviousEntity;
- (id)_sbPreviousWorkspaceEntityClass;
- (id)_sbSwitcherTransitionRequestClass;
- (id)_sbWorkspaceMainWorkspace;
- (id)allowedMedusaGestures;
- (id)appForLayoutRole:(long long)arg1;
- (bool)canActivateMedusaForDock;
- (bool)canLaunchAsFloatingApplicationForIconView:(id)arg1;
- (bool)canLaunchAsPinnedApplicationForIconView:(id)arg1;
- (id)delegate;
- (unsigned long long)dockIconActivationMode;
- (bool)hasMultipleApps;
- (id)init;
- (bool)isDisplayingApp;
- (void)launchApplication:(id)arg1;
- (void)launchApplicationWithFullConfiguration:(id)arg1;
- (void)launchFloatingApplication:(id)arg1;
- (void)launchPinnedApplication:(id)arg1 onLeadingSide:(bool)arg2;
- (id)medusaAppBundleIdsToLayoutRoles;
- (id)medusaApps;
- (bool)performMedusaGesture:(unsigned long long)arg1;
- (id)sceneLayoutState;
- (void)setDelegate:(id)arg1;
- (void)setDockIconActivationMode:(unsigned long long)arg1;

@end
