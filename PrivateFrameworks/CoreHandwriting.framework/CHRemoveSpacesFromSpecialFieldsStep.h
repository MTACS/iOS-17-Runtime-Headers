
@interface CHRemoveSpacesFromSpecialFieldsStep : CHPostprocessingStepModifyingOriginalTokens {
    bool  _capitalizationToSplit;
    bool  _convertToLowercase;
    CHPatternNetwork * _patternFST;
    long long  _patternType;
}

- (void).cxx_destruct;
- (id)initWithPatternFst:(id)arg1 patternType:(long long)arg2 capitalizationToSplit:(bool)arg3 convertToLowercase:(bool)arg4;
- (id)process:(id)arg1 options:(id)arg2;

@end
