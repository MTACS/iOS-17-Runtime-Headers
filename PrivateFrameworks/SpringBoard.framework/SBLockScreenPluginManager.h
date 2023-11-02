
@interface SBLockScreenPluginManager : NSObject <PTSettingsKeyObserver, SBLockScreenActionProvider, SBLockScreenPluginAgent> {
    SBLockScreenPlugin * _activePlugin;
    <SBLockScreenPluginManagerDelegate> * _delegate;
    SBLockScreenPlugin * _displayedPlugin;
    bool  _enabled;
    NSMutableDictionary * _plugins;
    CSLockScreenTestPluginSettings * _testSettings;
}

@property (nonatomic, readonly) SBLockScreenPlugin *activePlugin;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBLockScreenPluginManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBLockScreenPlugin *displayedPlugin;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_handlePluginDisabled:(id)arg1 withContext:(id)arg2;
- (void)_handleUIRelock;
- (id)_highestPriorityPluginIgnoringViewDisplay:(bool)arg1;
- (bool)_loadLockScreenPluginWithContext:(id)arg1;
- (id)_pluginForPluginController:(id)arg1;
- (void)_refreshLockScreenPlugin;
- (bool)_sendEventToPlugin:(id /* block */)arg1;
- (void)_setActivePlugin:(id)arg1 displayedPlugin:(id)arg2;
- (void)activatePluginController:(id)arg1;
- (id)activePlugin;
- (void)deactivatePluginController:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)disableLockScreenPluginWithContext:(id)arg1;
- (id)displayedPlugin;
- (bool)enableLockScreenPluginWithContext:(id)arg1;
- (bool)handleEvent:(long long)arg1;
- (id)init;
- (bool)isEnabled;
- (id)lockScreenActionContext;
- (bool)pluginController:(id)arg1 sendAction:(id)arg2;
- (void)pluginController:(id)arg1 updateAppearance:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
