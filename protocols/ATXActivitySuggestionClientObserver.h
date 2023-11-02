
@protocol ATXActivitySuggestionClientObserver <NSObject>

@optional

- (void)activitySuggestionClient:(ATXActivitySuggestionClient *)arg1 didSuggestActivity:(ATXActivity *)arg2;
- (void)activitySuggestionClient:(ATXActivitySuggestionClient *)arg1 didSuggestConfiguredActivity:(ATXActivitySuggestion *)arg2;
- (void)activitySuggestionClient:(ATXActivitySuggestionClient *)arg1 didSuggestSettingUpActivity:(ATXActivitySetUpSuggestion *)arg2;
- (void)activitySuggestionClient:(ATXActivitySuggestionClient *)arg1 didSuggestTriggersForConfiguredActivity:(ATXActivityTriggerSuggestion *)arg2;

@end
