
@interface CHCyrillicAddAlternativeScriptCandidatesStep : CHPostprocessingStep {
    struct _LXLexicon { } * _customLexicon;
    struct _LXLexicon { } * _staticLexicon;
}

- (id)initWithStaticLexicon:(struct _LXLexicon { }*)arg1 customLexicon:(struct _LXLexicon { }*)arg2;
- (id)process:(id)arg1 options:(id)arg2;

@end
