
@interface CHRemoveSpacesFromStrongURLsAndEmailsStep : CHPostprocessingStepModifyingOriginalTokens {
    CHPatternNetwork * _patternFST;
}

- (void).cxx_destruct;
- (id)initWithPatternFst:(id)arg1;
- (id)process:(id)arg1 options:(id)arg2;

@end
