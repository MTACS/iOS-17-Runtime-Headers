
@interface SBCommandTabController : NSObject <SBCommandTabViewControllerDelegate, SBRecentDisplayItemsControllerDelegate, SBRecentDisplayItemsPersistenceDelegate> {
    NSMutableSet * _appsAllowedWhileHidden;
    SBCommandTabViewController * _commandTabViewController;
    SBRecentDisplayItemsDataStore * _dataStore;
    SBRecentDisplayItemsDefaults * _defaults;
    <BSInvalidatable> * _deferOrientationUpdatesAssertion;
    <BSInvalidatable> * _keyboardFocusAssertion;
    NSOrderedSet * _persistedRecentDisplayItems;
    SBRecentDisplayItemsController * _recentDisplayItemsController;
    NSObject<OS_dispatch_queue> * _recentDisplayItemsPersistenceQueue;
    UIApplicationSceneDeactivationAssertion * _resignActiveAssertion;
    PTToggleTestRecipe * _testRecipe;
    NSTimer * _timer;
    SBWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic, readonly) bool visible;
@property (nonatomic, readonly) SBWindow *window;

+ (id)keyCommands;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (void)_activateWithForwardDirection:(bool)arg1;
- (void)_allowAppToAppearWhileHidden:(id)arg1;
- (void)_clearTimer;
- (void)_disallowAppFromAppearingWhileHidden:(id)arg1;
- (void)_emitAnalyticsEventForDisplayItem:(id)arg1;
- (void)_sceneDidDisconnect:(id)arg1;
- (void)_showCommandTabBarAfterTimer:(id)arg1;
- (void)_showWindow:(bool)arg1;
- (void)activateWithKeyCommand:(id)arg1;
- (void)dataStore:(id)arg1 persistDisplayItems:(id)arg2;
- (bool)dataStore:(id)arg1 shouldRestorePersistedDisplayItem:(id)arg2;
- (void)dealloc;
- (void)dismiss;
- (id)init;
- (bool)isVisible;
- (void)launchCurrentSelectedApplication;
- (void)next;
- (id)persistedDisplayItemsForDataStore:(id)arg1;
- (void)previous;
- (void)recentDisplayItemsController:(id)arg1 didRemoveItem:(id)arg2;
- (bool)recentDisplayItemsController:(id)arg1 shouldAddItem:(id)arg2;
- (void)recentDisplayItemsControllerDidUpdateDisplayItems:(id)arg1;
- (void)removeCurrentSelectedApplication;
- (void)viewController:(id)arg1 selectedApplicationWithDisplayItem:(id)arg2;
- (void)viewControllerWantsDismissal:(id)arg1;
- (id)window;

@end
