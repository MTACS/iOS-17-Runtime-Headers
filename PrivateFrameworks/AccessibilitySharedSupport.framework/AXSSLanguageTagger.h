
@interface AXSSLanguageTagger : NSObject

+ (id)_allLangIDs;
+ (struct { int x1; float x2; }*)_createLanguageHintsEvenlyDistributedWithProbability:(float)arg1 excludingHints:(id)arg2;
+ (struct { int x1; float x2; }*)_createLanguageHintsForContent:(id)arg1;
+ (id)_createTagForContent:(id)arg1 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 document:(id)arg3 createdFromNewline:(bool)arg4;
+ (id)_dialectWithHighestProbability:(struct { int x1; float x2; }*)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_extendRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forContent:(id)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
+ (void)_hypothesesForContent:(id)arg1 withHints:(struct { int x1; float x2; }*)arg2 guesses:(struct { int x1; float x2; }*)arg3;
+ (bool)_isNewline:(id)arg1;
+ (id)_languageTagForDateIfNecessary:(id)arg1;
+ (void*)_languageTaggerForContent:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_manuallyProcessContent:(id)arg1 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 currentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
+ (id)_overrideLanguageDetection:(id)arg1;
+ (void*)_scriptTaggerForContent:(id)arg1;
+ (id)_secondaryDialects:(struct { int x1; float x2; }*)arg1;
+ (float)_systemLanguageProbabilityForContent:(id)arg1;
+ (void)_tagRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 document:(id)arg2 tags:(id)arg3 createdFromNewline:(bool)arg4;
+ (void*)_taggerForContent:(id)arg1 tagScheme:(id)arg2;
+ (void*)_tokenTaggerForContent:(id)arg1;
+ (bool)isSupportedLanguage:(id)arg1;
+ (id)langCodeForlangId:(int)arg1;
+ (int)langIDforLangCode:(id)arg1;
+ (id)languageTagsForContent:(id)arg1;
+ (id)markupLanguageTagForAttributedString:(id)arg1;
+ (id)primaryLanguageForContent:(id)arg1;

@end
