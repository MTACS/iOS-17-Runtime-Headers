
@interface CHNumberFieldResultReorderingStep : CHPostprocessingStepModifyingOriginalTokens {
    NSCharacterSet * _allowedCharacters;
    NSDictionary * _characterReplacements;
}

- (void).cxx_destruct;
- (id)initForDigitFields;
- (id)initForPhoneNumberFields;
- (id)process:(id)arg1 options:(id)arg2;

@end
