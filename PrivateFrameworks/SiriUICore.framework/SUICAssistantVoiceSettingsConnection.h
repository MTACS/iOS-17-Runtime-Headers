
@interface SUICAssistantVoiceSettingsConnection : AFSettingsConnection {
    NSMutableDictionary * _cachedAvailableVoices;
}

@property (nonatomic, retain) NSMutableDictionary *cachedAvailableVoices;

+ (id)assistantLanguageTitlesDictionary;
+ (id)capitalizeFirstPartOfCountry:(id)arg1;
+ (id)outputLanguageIdentifiers;
+ (id)shortTitlesForLanguageIdentifiers:(id)arg1 deviceLanguageLocale:(id)arg2;
+ (id)titlesForLanguageIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)_regionForLanguageIdentifier:(id)arg1;
- (id)cachedAvailableVoices;
- (id)dialectForLanguageIdentifier:(id)arg1;
- (id)getAvailableDialectsForLanguage:(id)arg1;
- (id)getAvailableVoicesForLanguage:(id)arg1;
- (bool)languageHasBothGender:(id)arg1;
- (bool)languageHasCustomVoice:(id)arg1;
- (bool)languageHasVoiceSelection:(id)arg1;
- (bool)languageHasVoiceVariations:(id)arg1;
- (void)setCachedAvailableVoices:(id)arg1;
- (void)setOutputVoiceLanguage:(id)arg1 gender:(long long)arg2;

@end
