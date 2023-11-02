
@interface AssistantDetailController : PSListController {
    NSMutableSet * _disabledLockScreenBundles;
    NSMutableSet * _disabledSpotlightApps;
    NSMutableSet * _disabledSpotlightBundles;
    NSMutableSet * _disabledSpotlightShortcuts;
    NSMutableSet * _disabledSuggestApps;
    PSSpecifier * _whileSearchingGroup;
    PSSpecifier * _whileSearchingShowAppSpecifier;
    PSSpecifier * _whileSearchingShowContentSpecifier;
}

- (void).cxx_destruct;
- (void)_addInAppSpecifiersToSpecifiers:(id)arg1;
- (void)_addSuggestionsSpecifiersToSpecifiers:(id)arg1;
- (void)_addWhileSearchingSpecifiersToSpecifiers:(id)arg1;
- (id)_appName;
- (void)_asyncAddAskSiriSettingsIfNecessary;
- (id)_bundleId;
- (id)_enableSiriAppSpecifiersWithAppId:(id)arg1 accessGranted:(bool)arg2;
- (void)_fetchIntentsSpecifiersWithCompletion:(id /* block */)arg1;
- (id)_loadDisabledShortcutsSet;
- (id)_loadDisabledSuggestAppsSet;
- (void)_saveSuggestionsShowOnHomeScreenEnabled:(bool)arg1;
- (void)_saveSuggestionsSuggestAppEnabled:(bool)arg1;
- (void)_saveSuggestionsSuggestionNotificationsEnabled:(bool)arg1;
- (void)_saveWhileSearchingShowAppEnabled:(bool)arg1;
- (void)_saveWhileSearchingShowContentEnabled:(bool)arg1;
- (id)_siriSuggestionsClients;
- (id)_suggestionsFooterString;
- (id)_suggestionsShowToggleLableString;
- (id)_watchBundleToMirrorWithBundleId:(id)arg1;
- (id)askSiriUseWithAskSiriEnabled:(id)arg1;
- (id)inAppLearnFromAppEnabled:(id)arg1;
- (void)setAskSiriUseWithAskSiriEnabled:(id)arg1 specifier:(id)arg2;
- (void)setInAppLearnFromAppEnabled:(id)arg1 specifier:(id)arg2;
- (void)setNanoInAppShowSiriSuggestionsEnabled:(bool)arg1 bundleId:(id)arg2;
- (void)setSuggestionsShowInAppEnabled:(id)arg1 specifier:(id)arg2;
- (void)setSuggestionsShowOnHomeScreenEnabled:(id)arg1 specifier:(id)arg2;
- (void)setSuggestionsSuggestAppEnabled:(id)arg1 specifier:(id)arg2;
- (void)setSuggestionsSuggestionNotificationsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setWhileSearchingShowAppEnabled:(id)arg1 specifier:(id)arg2;
- (void)setWhileSearchingShowContentEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (id)suggestionsShowInAppEnabled:(id)arg1;
- (id)suggestionsShowOnHomeScreenEnabled:(id)arg1;
- (id)suggestionsSuggestAppEnabled:(id)arg1;
- (id)suggestionsSuggestionNotificationEnabled:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (id)whileSearchingShowAppEnabled:(id)arg1;
- (id)whileSearchingShowContentEnabled:(id)arg1;

@end
