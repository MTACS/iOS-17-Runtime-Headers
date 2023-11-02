
@interface ATXSuggestionPreprocessor : NSObject <ATXSuggestionModeFilterObserver, ATXSuggestionPreprocessorProtocol> {
    ATXActionToWidgetConverter * _converter;
    ATXEngagementRecordManager * _engagementRecordManager;
    ATXBlendingLayerHyperParameters * _hyperParameters;
    ATXLockscreenBlacklist * _lockscreenBlacklist;
    ATXSuggestionModeFilter * _modeFilter;
    ATXNotificationsLoggingServer * _notificationsLoggingServer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)bundleIdAssociatedWithSuggestion:(id)arg1;
+ (id)contactIdsAssociatedWithContactsWidgetIntent:(id)arg1;
+ (id)contactIdsAssociatedWithSuggestion:(id)arg1;

- (void).cxx_destruct;
- (bool)_bundleSupportsINPlayMediaIntentForBundleId:(id)arg1 fromUnitTest:(bool)arg2;
- (void)configurationDidChangeForFilter:(id)arg1;
- (id)filterOutRecentlyEngagedSuggestions:(id)arg1;
- (id)filterOutSuggestionsForUninstalledOrRestrictedApps:(id)arg1;
- (id)init;
- (id)initWithEngagementRecordManager:(id)arg1 notificationsLoggingServer:(id)arg2 lockscreenBlacklist:(id)arg3 actionToWidgetConverter:(id)arg4;
- (id)preprocessedSuggestionsForAppSwitcherConsumer:(id)arg1;
- (id)preprocessedSuggestionsForMediaControlsConsumer:(id)arg1;
- (id)suggestionsByPreprocessingRankedSuggestions:(id)arg1 forConsumerSubType:(unsigned char)arg2;
- (id)suggestionsWithInvalidSuggestionsRemoved:(id)arg1;

@end
