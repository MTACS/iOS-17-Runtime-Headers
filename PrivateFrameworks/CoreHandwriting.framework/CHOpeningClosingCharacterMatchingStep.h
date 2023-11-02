
@interface CHOpeningClosingCharacterMatchingStep : CHPostprocessingStepModifyingOriginalTokens {
    NSCharacterSet * _closingBracketCharacters;
    NSCharacterSet * _closingQuoteCharacters;
    NSCharacterSet * _openingBracketCharacters;
    NSCharacterSet * _openingQuoteCharacters;
    NSCharacterSet * _symmetricQuoteCharacters;
}

- (void).cxx_destruct;
- (id)init;
- (id)process:(id)arg1 options:(id)arg2;

@end
