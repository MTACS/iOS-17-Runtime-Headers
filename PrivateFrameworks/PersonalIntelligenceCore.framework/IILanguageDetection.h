
@interface IILanguageDetection : NSObject

+ (id)defaultLanguage;
+ (id)detectLanguageFromLanguageTags:(id)arg1;
+ (id)detectLanguageFromText:(id)arg1;
+ (id)detectLanguageFromTextHeuristically:(id)arg1;
+ (id)detectLanguageFromTextHeuristicallyWithLanguages:(id)arg1 languages:(id)arg2 defaultLanguage:(id)arg3;
+ (id)detectLanguageFromTextIfMultilingual:(id)arg1;
+ (id)detectLanguageFromTextWithMaxLength:(id)arg1 maxLength:(unsigned long long)arg2 minimumProbability:(double)arg3;
+ (id)dominantLanguageTagFromLanguageTags:(id)arg1;
+ (id)dominantLanguageTagFromText:(id)arg1;
+ (id)languageForLocaleIdentifier:(id)arg1;
+ (int)languageIdForLanguageString:(id)arg1;
+ (id)userLanguages;

@end
