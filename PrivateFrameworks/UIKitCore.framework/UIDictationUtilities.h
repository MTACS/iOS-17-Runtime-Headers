
@interface UIDictationUtilities : NSObject

+ (id)_properNameForString:(id)arg1;
+ (void)attributedString:(id)arg1 withIdentifiersBlock:(id /* block */)arg2;
+ (id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2 capturePrefixAndPostfixWordCount:(unsigned long long)arg3;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (id)bestInterpretationForPhrases:(id)arg1;
+ (unsigned long long)characterDeletionCount:(id)arg1;
+ (unsigned long long)characterInsertionCount:(id)arg1;
+ (unsigned long long)characterSubstitutionCount:(id)arg1;
+ (id)dictationPhrasesFromPhraseArray:(id)arg1;
+ (id)dictationPhrasesFromTokenMatrix:(id)arg1;
+ (id)dictationVoiceCommandParametersFromAFVoiceCommandGrammarParseCandidate:(id)arg1;
+ (id)interpretationFromAFInterpretation:(id)arg1;
+ (id)interpretationFromAFTokens:(id)arg1;
+ (void)logSpeechAlternativeReplacement:(id)arg1 originalText:(id)arg2 replacementText:(id)arg3 index:(unsigned long long)arg4;
+ (unsigned long long)maxLoggableLengthOfInsertionBySubstitution:(id)arg1;
+ (unsigned long long)maxLoggableLengthOfInsertionWithDeletion:(id)arg1;
+ (unsigned long long)maxLoggableLengthOfInsertionWithoutDeletion:(id)arg1;
+ (id)metadataDictionaryForCorrectionIdentifier:(id)arg1;
+ (bool)needsLeadingSpaceForPhrases:(id)arg1 secureInput:(bool)arg2;
+ (bool)needsLeadingSpaceForText:(id)arg1 secureInput:(bool)arg2;
+ (bool)needsLeadingSpaceForText:(id)arg1 secureInput:(bool)arg2 previousCharacter:(unsigned short)arg3 selectionStartIsStartOfParagraph:(bool)arg4;
+ (bool)needsTrailingSpaceForPhrases:(id)arg1 secureInput:(bool)arg2;
+ (bool)needsTrailingSpaceForText:(id)arg1 secureInput:(bool)arg2;
+ (id)phraseFromAFPhrase:(id)arg1;
+ (void)selectionStartInfoWithBlock:(id /* block */)arg1;
+ (bool)shouldAddDeleteMenuElement;
+ (bool)shouldLogCorrectionInfoForCurrentBundleId;
+ (id)tokenFromAFToken:(id)arg1;
+ (void)trackDeletion:(id)arg1 text:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
+ (void)trackInsertion:(id)arg1 text:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
+ (void)trackSubstitution:(id)arg1 originalText:(id)arg2 originalTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 replacementText:(id)arg4 replacementTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
+ (id)trackingPunctuations;
+ (unsigned long long)updateCharacterDeletionCount:(id)arg1 delta:(int)arg2;
+ (unsigned long long)updateCharacterInsertionCount:(id)arg1 delta:(int)arg2;
+ (long long)updateCharacterModificationCount:(id)arg1 delta:(int)arg2;
+ (unsigned long long)updateCharacterSubstitutionCount:(id)arg1 delta:(int)arg2;
+ (id)voiceCommandParameterFromAFVoiceCommandGrammarParamMatch:(id)arg1;

@end
