
@interface SBSApplicationClient : SBSServiceFacilityClient

+ (id)serviceFacilityIdentifier;

- (id)applicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;
- (void)deleteSnapshotsForApplicationIdentifier:(id)arg1;
- (void)fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestShelfPresentationForSceneWithIdentifier:(id)arg1;
- (void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg1;
- (void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2;

@end
