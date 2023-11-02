
@interface CHSpellChecker : NSObject {
    CHSpellCheckerErrorModel * _errorModel;
    AppleSpell * _spellServer;
}

- (void).cxx_destruct;
- (id)correctionsForString:(id)arg1 shouldUseErrorModel:(bool)arg2 forLocale:(id)arg3;
- (id)init;
- (bool)isWordInUserDictionaries:(id)arg1 caseSensitive:(bool)arg2;
- (id)topCorrectionForRecognition:(id)arg1 contextBeforeToken:(id)arg2 contextSeparator:(id)arg3 shouldUseErrorModel:(bool)arg4 forLocale:(id)arg5 minScore:(double)arg6;
- (id)topCorrectionForString:(id)arg1 contextBeforeToken:(id)arg2 contextSeparator:(id)arg3 shouldUseErrorModel:(bool)arg4 forLanguage:(id)arg5;
- (id)topCorrectionsForRecognition:(id)arg1 contextBeforeToken:(id)arg2 contextSeparator:(id)arg3 shouldUseErrorModel:(bool)arg4 forLocale:(id)arg5 minScore:(double)arg6;

@end
