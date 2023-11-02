
@interface AXTimeOutputPreferences : AXSettings

+ (id)sharedInstance;

- (bool)_npsBoolValueForPreferenceKey:(id)arg1 defaultValue:(bool)arg2;
- (long long)_npsIntegerValueForPreferenceKey:(id)arg1 defaultValue:(long long)arg2;
- (id)_npsValueForPreferenceKey:(id)arg1;
- (id)_npsValueForPreferenceKey:(id)arg1 expectedClass:(Class)arg2;
- (void)_setNPSValue:(id)arg1 preferenceKey:(id)arg2;
- (bool)_voiceOverIsEnabled;
- (bool)_voiceOverIsInTripleClick;
- (id)accessibilityDomainAccessor;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForTapToSpeakTimeAvailability:(long long)arg1;
- (id)localizedStringForTapticChimesFrequencyEncoding:(long long)arg1;
- (id)localizedStringForTapticChimesSoundType:(long long)arg1;
- (id)localizedStringForTapticTimeEncoding:(long long)arg1;
- (void)setTapToSpeakTimeAvailability:(long long)arg1;
- (void)setTapToSpeakTimeEnabled:(bool)arg1;
- (void)setVoiceOverTapticChimesEnabled:(bool)arg1;
- (void)setVoiceOverTapticChimesFrequencyEncoding:(long long)arg1;
- (void)setVoiceOverTapticChimesSoundType:(long long)arg1;
- (void)setVoiceOverTapticTimeEncoding:(long long)arg1;
- (void)setVoiceOverTapticTimeMode:(bool)arg1;
- (id)tapToSpeakAvailabilityOptions;
- (long long)tapToSpeakTimeAvailability;
- (bool)tapToSpeakTimeEnabled;
- (id)tapToSpeakTimeLocalizedDescription;
- (id)tapToSpeakTimeLocalizedTitle;
- (id)tapticChimesFrequencyOptions;
- (id)tapticChimesLocalizedCurrentFrequency;
- (id)tapticChimesLocalizedCurrentSounds;
- (id)tapticChimesLocalizedDescription;
- (id)tapticChimesLocalizedTitle;
- (id)tapticChimesScheduleLocalizedTitle;
- (id)tapticChimesSoundsLocalizedTitle;
- (id)tapticChimesSoundsOptions;
- (id)tapticTimeEncodingOptions;
- (id)tapticTimeLocalizedCurrentMode;
- (id)tapticTimeLocalizedDescription;
- (id)tapticTimeLocalizedTitle;
- (id)tapticTimeModeLocalizedDescription;
- (bool)voiceOverTapticChimesEnabled;
- (long long)voiceOverTapticChimesFrequencyEncoding;
- (long long)voiceOverTapticChimesSoundType;
- (long long)voiceOverTapticTimeEncoding;
- (bool)voiceOverTapticTimeMode;

@end
