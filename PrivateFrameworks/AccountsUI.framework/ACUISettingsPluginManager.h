
@interface ACUISettingsPluginManager : NSObject {
    PSViewController<ACUISettingsPluginParentProtocol> * _parentViewController;
    NSMutableDictionary * _pluginCache;
}

- (void).cxx_destruct;
- (id)_loadSettingsPluginFromBundleWithName:(id)arg1;
- (id)_settingsPluginFromBundleWithName:(id)arg1;
- (id)calendarSettingsPlugin;
- (id)contactsSettingsPlugin;
- (id)initWithParentViewController:(id)arg1;
- (id)mailSettingsPlugin;
- (void)parentViewControllerWillDisappear;

@end
