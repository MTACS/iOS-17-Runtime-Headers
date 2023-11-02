
@interface CHTransliterateHalfWidthPunctuationStep : CHPostprocessingStepModifyingOriginalTokens {
    NSCharacterSet * _backwardLookingCharacterSet;
    NSCharacterSet * _contextInvariantCharacterSet;
    NSCharacterSet * _forwardLookingCharacterSet;
    bool  _shouldAddAlternatives;
    NSCharacterSet * _widthAlternativeCharacterSet;
}

- (void).cxx_destruct;
- (id)initWithShouldAddAlternatives:(bool)arg1;
- (id)process:(id)arg1 options:(id)arg2;

@end
