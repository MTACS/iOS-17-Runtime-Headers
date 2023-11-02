
@interface WBSPasswordEvaluator : NSObject {
    WBSPasswordWordListCollection * _passcodeWordListCollection;
    WBSPasswordWordListCollection * _passwordWordListCollection;
    WBSPasswordPatternMatcher * _patternMatcher;
}

+ (bool)passwordLooksLikeDigitOnlyPasscode:(id)arg1;
+ (id)standardPasswordEvaluator;

- (void).cxx_destruct;
- (id)_initWithPasswordWordListCollection:(id)arg1 passcodeWordListCollection:(id)arg2;
- (id)evaluatePassword:(id)arg1;

@end
