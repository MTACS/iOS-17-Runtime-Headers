
@interface SBLockScreenPlugin : NSObject <FBProcessObserver, SBLockScreenPluginAgent, SBLockScreenPluginController> {
    <SBLockScreenPluginAgent> * _agent;
    SBLockScreenPluginAppearanceContext * _appearance;
    id /* block */  _auxiliaryActivationAnimationBlock;
    id /* block */  _auxiliaryDeactivationAnimationBlock;
    BSPluginBundle * _bundle;
    NSString * _bundleName;
    <SBLockScreenPluginController> * _controller;
    <SBLockScreenPluginDelegate> * _delegate;
    NSMutableArray * _lifecycleObservers;
    SBLockOverlayContext * _overlay;
    FBProcess * _process;
}

@property (nonatomic, readonly) SBLockScreenPluginAppearanceContext *appearance;
@property (nonatomic, copy) id /* block */ auxiliaryActivationAnimationBlock;
@property (nonatomic, copy) id /* block */ auxiliaryDeactivationAnimationBlock;
@property (nonatomic, readonly) <SBLockScreenPluginController> *controller;
@property (nonatomic, readonly) CSAppearance *coverSheetAppearance;
@property (nonatomic, readonly) CSBehavior *coverSheetBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBLockScreenPluginDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) SBLockOverlayContext *overlay;
@property (nonatomic) <SBLockScreenPluginAgent> *pluginAgent;
@property (nonatomic, readonly) <SBLockScreenPluginAppearance> *pluginAppearance;
@property (nonatomic, readonly) long long pluginPriority;
@property (nonatomic, readonly, retain) SBLockScreenPluginAction *pluginUnlockAction;
@property (nonatomic, readonly) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBLockScreenPluginAction *unlockAction;
@property (nonatomic, readonly) UIViewController<SBLockScreenPluginViewController> *viewController;

+ (id)_pluginBundleForPluginWithName:(id)arg1;
+ (id)pluginWithName:(id)arg1 activationContext:(id)arg2;

- (void).cxx_destruct;
- (void)_updateAppearance:(id)arg1;
- (void)activatePluginController:(id)arg1;
- (void)addLifecycleObserver:(id)arg1;
- (id)appearance;
- (id /* block */)auxiliaryActivationAnimationBlock;
- (id /* block */)auxiliaryDeactivationAnimationBlock;
- (id)controller;
- (id)coverSheetAppearance;
- (id)coverSheetBehavior;
- (void)deactivatePluginController:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerateLifecycleObserversUsingBlock:(id /* block */)arg1;
- (bool)handleDashBoardEvent:(id)arg1;
- (id)initWithBundle:(id)arg1 activationContext:(id)arg2;
- (bool)isCapabilityRestricted:(unsigned long long)arg1;
- (bool)isElementHidden:(long long)arg1;
- (id)name;
- (id)overlay;
- (id)overrideForElement:(long long)arg1;
- (id)pluginAgent;
- (id)pluginAppearance;
- (bool)pluginController:(id)arg1 sendAction:(id)arg2;
- (void)pluginController:(id)arg1 updateAppearance:(id)arg2;
- (void)pluginDidDeactivateWithContext:(id)arg1;
- (bool)pluginHandleEvent:(long long)arg1;
- (long long)pluginPriority;
- (id)pluginUnlockAction;
- (id)pluginViewController;
- (void)pluginWillActivateWithContext:(id)arg1;
- (void)processDidExit:(id)arg1;
- (void)removeLifecycleObserver:(id)arg1;
- (void)setAuxiliaryActivationAnimationBlock:(id /* block */)arg1;
- (void)setAuxiliaryDeactivationAnimationBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOverlay:(id)arg1;
- (void)setPluginAgent:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)unlockAction;
- (id)viewController;

@end
