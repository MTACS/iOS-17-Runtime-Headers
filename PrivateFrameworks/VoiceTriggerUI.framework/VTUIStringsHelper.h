
@interface VTUIStringsHelper : NSObject {
    NSString * _heySiriTriggerPhrase;
    NSString * _justSiriTriggerPhrase;
    NSMutableDictionary * _languageLocalizedStringTables;
    NSDictionary * _localizedStringTable;
    NSString * _siriLanguageCode;
}

@property (nonatomic, readonly) NSString *heySiriTriggerPhrase;
@property (nonatomic, readonly) NSString *justSiriTriggerPhrase;

+ (void)initialize;
+ (id)sharedStringsHelper;

- (void).cxx_destruct;
- (id)_bundleStringTableForAllValidLanguages:(id)arg1 inLocalizedStringsFileName:(id)arg2;
- (id)_bundleStringTableForLanguages:(id)arg1 inLocalizedStringsFileName:(id)arg2;
- (id)_siriLanguageSubstitutedString:(id)arg1;
- (id)heySiriTriggerPhrase;
- (id)init;
- (id)justSiriTriggerPhrase;
- (void)localeDidChange:(id)arg1;
- (id)localizedAudioStringForKey:(id)arg1;
- (void)setSiriLanguage:(id)arg1;
- (void)setupForCurrentLocaleAndSiriLanguage;
- (id)siriLanguageStringForKey:(id)arg1;
- (id)uiLocalizedStringForKey:(id)arg1;
- (id)uiLocalizedStringForKey:(id)arg1 languageCode:(id)arg2;
- (id)uiLocalizedStringForKey:(id)arg1 usesMultipleTriggers:(bool)arg2 siriVoice:(id)arg3;

@end
