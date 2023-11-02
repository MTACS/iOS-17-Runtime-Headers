
@interface ATXModeAutomationSuggestionTester : NSObject <ATXActivitySuggestionClientObserver, UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter * _notificationCenter;
    ATXActivitySuggestionClient * _suggestionClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_sendNotificationWithContent:(id)arg1;
- (id)_stringForActivityType:(unsigned long long)arg1;
- (void)activitySuggestionClient:(id)arg1 didSuggestActivity:(id)arg2;
- (void)activitySuggestionClient:(id)arg1 didSuggestConfiguredActivity:(id)arg2;
- (void)activitySuggestionClient:(id)arg1 didSuggestSettingUpActivity:(id)arg2;
- (void)dealloc;
- (id)init;

@end
