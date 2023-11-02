
@interface CHLanguageUtilities : NSObject

+ (double)characterLMLogProbabilityForString:(id)arg1 characterLM:(id)arg2;
+ (double)computeEditPenalizationFromString:(id)arg1 toReferenceString:(id)arg2 withSuffix:(id)arg3 withCaseSensitivity:(bool)arg4 withFirstLetterCaseSensitivity:(bool)arg5 withDiacriticSensitivity:(bool)arg6 withDiacriticsCharSet:(id)arg7 withConsumableStrokesCharSet:(id)arg8 outputSuffix:(id*)arg9 lexiconExtraCharacters:(id*)arg10 firstLetterCaseFlipped:(bool*)arg11;
+ (bool)findPartialMatchInPhraseLexicon:(struct _LXLexicon { }*)arg1 token:(id)arg2 contextBeforeToken:(id)arg3;
+ (bool)isMecabraConversionCandidateAllowed:(id)arg1;
+ (id)lexiconCorrectionsForToken:(id)arg1 locale:(id)arg2 lexicon:(struct _LXLexicon { }*)arg3 lmVocabulary:(void*)arg4 ovsStringChecker:(id)arg5 textReplacements:(id)arg6 consumableStrokesSet:(id)arg7 minimumTokenScore:(double)arg8 activeHistoryRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg9 outBestTokenScore:(double*)arg10 shouldCapitalizeWord:(bool)arg11 shouldSkipEntryCorrection:(bool)arg12 allowFullCapsCorrections:(bool)arg13 minimalLengthForLowConfidenceCorrections:(long long)arg14 lowConfidenceThreshold:(double)arg15 minimalLengthForCustomCapitalizationCorrections:(long long)arg16 outBestTokenIndex:(long long*)arg17 outFoundTokenInLexicon:(bool*)arg18 outFoundCaseMatchingTokenInLexicon:(bool*)arg19 outCorrectionFromOutOfContextEntry:(bool*)arg20;
+ (bool)lexiconHasEntryForString:(id)arg1 withLexicon:(struct _LXLexicon { }*)arg2 outHasMatchingString:(bool*)arg3;
+ (id)mecabraTokenizationAndKanaConversionForString:(id)arg1 mecabraEngine:(struct __Mecabra { }*)arg2 contextRef:(struct __MecabraContext { }*)arg3 leftCandidateRef:(void*)arg4 alternativeCandidateLimit:(long long)arg5;
+ (unsigned int)normalizeLMTokenIDForWord:(id)arg1 tokenID:(unsigned int)arg2 isFromPattern:(bool)arg3 score:(double*)arg4 wordLanguageModel:(void*)arg5;
+ (id)performInverseBiDiForNumeric:(id)arg1 isRTLContext:(bool)arg2;
+ (bool)shouldCapitalizeGivenHistory:(id)arg1 shouldAutoCapitalizeSetting:(bool)arg2 locale:(id)arg3;
+ (id)splitStringIntoSubtokensForLexicon:(id)arg1 minLength:(long long)arg2;
+ (unsigned int)tokenIDForString:(id)arg1 withLexicon:(struct _LXLexicon { }*)arg2;
+ (id)tokensRangesForString:(id)arg1 outTokenIDs:(id*)arg2 wordLanguageModel:(void*)arg3;
+ (id)transformCyrillicToLatin:(id)arg1;
+ (id)transformLatinToCyrillic:(id)arg1;
+ (id)transformString:(id)arg1 usingConfusions:(id)arg2;
+ (id)transliterateStringUsingICUTransliterator:(id)arg1 _icuTransliterator:(void**)arg2;

@end
