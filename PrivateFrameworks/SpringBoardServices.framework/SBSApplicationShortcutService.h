
@interface SBSApplicationShortcutService : SBSAbstractApplicationService

- (id)applicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;
- (void)fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)fetchDynamicApplicationShortcutItemsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDynamicApplicationShortcutItemsWithCompletionHandler:(id /* block */)arg1;
- (void)updateDynamicApplicationShortcutItems:(id)arg1;
- (void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2;
- (void)updateDynamicApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2;

@end
