
@interface BYAnalyticsEventAppearance : NSObject {
    BYPreferencesController * _buddyPreferencesExcludedFromBackup;
}

@property (retain) BYPreferencesController *buddyPreferencesExcludedFromBackup;

- (void).cxx_destruct;
- (id)_eventPayload;
- (id)_eventPayloadFromPreferences;
- (id)buddyPreferencesExcludedFromBackup;
- (void)didChooseAppearanceModeName:(id)arg1 forDisposition:(unsigned long long)arg2;
- (void)didChooseToSetUpForChild:(bool)arg1;
- (id)initWithAnalyticsManager:(id)arg1 buddyPreferencesExcludedFromBackup:(id)arg2;
- (void)setBuddyPreferencesExcludedFromBackup:(id)arg1;

@end
