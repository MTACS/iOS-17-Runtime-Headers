
@interface WBSWebExtensionNewTabOverridePreferencesManager : NSObject {
    WBSWebExtensionsController * _webExtensionsController;
}

+ (void)migrateStorageToPerProfileFormatIfNecessaryWithDefaults:(id)arg1;

- (void).cxx_destruct;
- (id)_webExtensionOverridingNewTabPageWithDefaults:(id)arg1;
- (void)clearNewTabBehaviorInDefaults:(id)arg1;
- (void)clearNewTabBehaviorInDefaults:(id)arg1 fromUserGesture:(bool)arg2;
- (id)cloudExtensionStateForDefaults:(id)arg1;
- (id)extensionComposedIdentifierForNewTabPreferenceInDefaults:(id)arg1;
- (id)initWithExtensionsController:(id)arg1;
- (bool)isNewTabPageOverriddenByAnEnabledExtensionInUserDefaults:(id)arg1;
- (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)arg1 inDefaults:(id)arg2;
- (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)arg1 inDefaults:(id)arg2 fromUserGesture:(bool)arg3;
- (bool)shouldNewTabPageOverriddenByAnEnabledExtensionApplyInPrivateBrowsingWithUserDefaults:(id)arg1;
- (id)sortedComposedIdentifiersForExtensionsWithOverridePages;

@end
