
@interface CHLexiconCorrectionStep : CHPostprocessingStep {
    int  _autoCapitalizationMode;
    NSCharacterSet * _consumableStrokesCharSet;
    struct _LXLexicon { } * _customLexicon;
    struct _LXLexicon { } * _customPhraseLexicon;
    NSCharacterSet * _fullWidthPunctuationThatExpectsUppercaseAfter;
    void * _lmVocabulary;
    NSLocale * _locale;
    CHStringOVSChecker * _ovsStringChecker;
    struct _LXLexicon { } * _phraseLexicon;
    NSCharacterSet * _punctuationThatExpectsUppercaseAfter;
    bool  _shouldAutoCapitalize;
    bool  _shouldAutoCorrect;
    bool  _shouldCreatePseudoTokens;
    CHSpellChecker * _spellChecker;
    struct _LXLexicon { } * _staticLexicon;
    NSDictionary * _textReplacements;
}

@property (nonatomic) struct _LXLexicon { }*staticLexicon;

+ (id)validatedTokenForCorrectedToken:(id)arg1 rawToken:(id)arg2 autoCapitalizationMode:(int)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAutoCapitalizationMode:(int)arg1 shouldAutoCorrect:(bool)arg2 shouldAutoCapitalize:(bool)arg3 shouldCreatePseudoTokens:(bool)arg4 locale:(id)arg5 staticLexicon:(struct _LXLexicon { }*)arg6 customLexicon:(struct _LXLexicon { }*)arg7 phraseLexicon:(struct _LXLexicon { }*)arg8 customPhraseLexicon:(struct _LXLexicon { }*)arg9 spellChecker:(id)arg10 lmVocabulary:(void*)arg11 ovsStringChecker:(id)arg12 textReplacements:(id)arg13;
- (id)process:(id)arg1 options:(id)arg2;
- (void)setStaticLexicon:(struct _LXLexicon { }*)arg1;
- (struct _LXLexicon { }*)staticLexicon;

@end
