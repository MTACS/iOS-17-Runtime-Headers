
@interface AFLocalization : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _tables;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getVoiceOrdering;
- (id)_localizedStringForKey:(id)arg1 tables:(id)arg2 localizations:(id)arg3 bundle:(id)arg4;
- (id)_relevantTablesForTableName:(id)arg1 tableExtension:(id)arg2 bundle:(id)arg3;
- (struct { id x1; id x2; id x3; id x4; })_voiceMaps;
- (id)_voicesFromVoiceMapWithLanguage:(id)arg1;
- (id)allOutputVoiceIdentifiersForSiriLanguage:(id)arg1;
- (id)compactDisplayNameInLanguage:(id)arg1 forSiriLanguage:(id)arg2;
- (id)defaultOutputVoiceForSiriSessionLanguage:(id)arg1;
- (id)dialectsMap;
- (id)init;
- (id)loadInfoForVoicesWithLanguageCode:(id)arg1;
- (id)localizedCompactNameForSiriLanguage:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedGenderOfOutputVoice:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedNameForSiriLanguage:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedNameOfOutputVoice:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedNameOfOutputVoiceWithIdentifier:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedNameOfVoiceGender:(long long)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedStringForKey:(id)arg1 gender:(long long)arg2 table:(id)arg3 bundle:(id)arg4 languageCode:(id)arg5;
- (id)localizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 languageCode:(id)arg4;
- (id)localizedUIUtteranceForKey:(id)arg1 languageCode:(id)arg2;
- (id)longDisplayNameInLanguage:(id)arg1 forSiriLanguage:(id)arg2;
- (id)outputVoiceColorDescriptorForOutputLanguageCode:(id)arg1 voiceName:(id)arg2;
- (id /* block */)outputVoiceComparator;
- (id)outputVoiceDescriptorForOutputLanguageCode:(id)arg1 voiceName:(id)arg2;
- (id)voiceNamesForOutputLanguageCode:(id)arg1 gender:(long long)arg2;
- (id)voiceSimilarToVoice:(id)arg1 inSiriSessionLanguage:(id)arg2;

@end
