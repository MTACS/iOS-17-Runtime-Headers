
@interface WBSPasswordEvaluation : NSObject {
    long long  _evaluationType;
    double  _guessesRequired;
    NSString * _password;
    NSArray * _patternMatches;
}

@property (nonatomic, readonly) WBSPasswordPatternMatch *bestPatternMatchForUserFeedback;
@property (nonatomic, readonly) long long evaluationType;
@property (nonatomic, readonly) double guessesRequired;
@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly, copy) NSArray *patternMatches;
@property (nonatomic, readonly) unsigned long long strength;
@property (nonatomic, readonly) bool userShouldBeShownActiveWarning;
@property (nonatomic, readonly) bool userShouldBeShownPassiveWarning;

- (void).cxx_destruct;
- (id)_bestPatternMatchOfType:(unsigned long long)arg1;
- (id)_passwordFeedbackStringWithPasswordVisibility:(unsigned long long)arg1;
- (bool)_shouldShowUserFeedbackStringsForWordListPatternMatch:(id)arg1;
- (unsigned long long)_userFeedbackLengthScoreForPatternMatch:(id)arg1;
- (id)bestPatternMatchForUserFeedback;
- (id)compactDescriptionWithPasswordColumnWidth:(unsigned long long)arg1 includePatternMatches:(bool)arg2;
- (long long)evaluationType;
- (double)guessesRequired;
- (unsigned long long)hash;
- (id)initWithEvaluationType:(long long)arg1 password:(id)arg2 patternMatches:(id)arg3 guessesRequired:(double)arg4;
- (bool)isEqual:(id)arg1;
- (id)password;
- (id)patternMatches;
- (unsigned long long)strength;
- (id)userFeedbackStringWithPasswordVisibility:(unsigned long long)arg1;
- (bool)userShouldBeShownActiveWarning;
- (bool)userShouldBeShownPassiveWarning;

@end
