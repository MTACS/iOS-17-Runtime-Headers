
@interface SGLanguageDetection : NSObject

+ (id)defaultLanguage;
+ (id)detectLanguageFromLanguageTags:(id)arg1;
+ (id)detectLanguageFromLanguageTags:(id)arg1 withMinimumCount:(unsigned long long)arg2 withMinimumAgreement:(double)arg3;
+ (id)detectLanguageFromText:(id)arg1;
+ (id)detectLanguageFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 withMinimumCount:(unsigned long long)arg4 withMinimumAgreement:(double)arg5;
+ (id)dominantLanguageTagFromLanguageTags:(id)arg1;
+ (id)dominantLanguageTagFromLanguageTags:(id)arg1 withMinimumCount:(unsigned long long)arg2 withMinimumAgreement:(double)arg3;
+ (id)dominantLanguageTagFromText:(id)arg1;
+ (id)dominantLanguageTagFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 withMinimumCount:(unsigned long long)arg4 withMinimumAgreement:(double)arg5;
+ (id)languageForLocaleIdentifier:(id)arg1;
+ (id)languageTagsFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3;
+ (void)logMatchingForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 lowercaseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 text:(id)arg3 lowercaseText:(id)arg4;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })tokenRangeForText:(id)arg1 maxTruncatedLength:(unsigned long long)arg2 tagger:(id)arg3 taggerOptions:(unsigned long long)arg4 prevTextTokenMaxRange:(unsigned long long)arg5 originalLengthShortfall:(unsigned long long)arg6 lowercaseText:(id)arg7 lowercaseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg8;

@end
