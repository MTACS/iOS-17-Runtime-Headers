
@interface SBDashBoardPluginController : NSObject <CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSExternalEventHandling, SBLockScreenPluginManagerDelegate, SBLockScreenPluginPresenting> {
    CSCoverSheetViewController * _coverSheetViewController;
    SBLockScreenPluginManager * _pluginManager;
    SBDashBoardPluginViewController * _pluginViewController;
    long long  _pluginViewControllerPresentationStyle;
}

@property (nonatomic, readonly, copy) NSString *appearanceIdentifier;
@property (nonatomic, readonly, copy) NSSet *components;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) <SBLockScreenActionProvider> *lockScreenActionProvider;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_deactivate;
- (void)_dismissPluginViewController:(id)arg1 withStyle:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_presentPluginViewController:(id)arg1 withStyle:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_setPluginViewController:(id)arg1;
- (id)appearanceIdentifier;
- (id)components;
- (void)conformsToCSAppearanceProviding;
- (void)conformsToCSBehaviorProviding;
- (void)conformsToCSEventHandling;
- (void)conformsToCSExternalBehaviorProviding;
- (id)coverSheetIdentifier;
- (void)dealloc;
- (void)disableLockScreenPluginWithContext:(id)arg1;
- (void)enableLockScreenPluginWithContext:(id)arg1;
- (bool)handleEvent:(id)arg1;
- (id)initWithCoverSheetViewController:(id)arg1;
- (id)legibilitySettings;
- (id)lockScreenActionProvider;
- (long long)notificationBehavior;
- (long long)participantState;
- (void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2;
- (void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2;
- (void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3;
- (void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2;
- (bool)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3;
- (void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2;
- (long long)proximityDetectionMode;
- (unsigned long long)restrictedCapabilities;
- (long long)scrollingStrategy;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
