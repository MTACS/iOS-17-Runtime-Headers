
@interface CHSpellCorrectionCandidatesStep : CHPostprocessingStep {
    struct _LXLexicon { } * _customLexicon;
    NSLocale * _locale;
    CHSpellChecker * _spellChecker;
    struct _LXLexicon { } * _staticLexicon;
}

- (void).cxx_destruct;
- (id)initWithLocale:(id)arg1 spellChecker:(id)arg2 staticLexicon:(struct _LXLexicon { }*)arg3 customLexicon:(struct _LXLexicon { }*)arg4;
- (id)process:(id)arg1 options:(id)arg2;

@end
