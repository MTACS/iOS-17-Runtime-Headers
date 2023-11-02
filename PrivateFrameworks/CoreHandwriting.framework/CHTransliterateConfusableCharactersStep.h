
@interface CHTransliterateConfusableCharactersStep : CHPostprocessingStepModifyingOriginalTokens {
    NSArray * _characterTransliterations;
    struct _LXLexicon { } * _customLexicon;
    NSLocale * _locale;
    struct _LXLexicon { } * _staticLexicon;
}

- (void).cxx_destruct;
- (id)initWithStaticLexicon:(struct _LXLexicon { }*)arg1 customLexicon:(struct _LXLexicon { }*)arg2 locale:(id)arg3;
- (id)process:(id)arg1 options:(id)arg2;

@end
