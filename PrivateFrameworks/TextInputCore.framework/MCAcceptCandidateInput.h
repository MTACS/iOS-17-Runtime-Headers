
@interface MCAcceptCandidateInput : MCKeyboardInput {
    NSString * _candidateText;
    NSString * _convertedInput;
    NSString * _remainingInputString;
    NSArray * _remainingMecabraInputs;
}

@property (nonatomic, readonly, copy) NSString *candidateText;
@property (nonatomic, readonly, copy) NSString *convertedInput;
@property (copy) NSString *remainingInputString;
@property (copy) NSArray *remainingMecabraInputs;

- (void).cxx_destruct;
- (bool)canComposeNew:(id)arg1;
- (id)candidateText;
- (id)convertedInput;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCandidateText:(id)arg1 convertedInput:(id)arg2;
- (id)remainingInputString;
- (id)remainingMecabraInputs;
- (void)setRemainingInputString:(id)arg1;
- (void)setRemainingMecabraInputs:(id)arg1;
- (id)shortDescriptionWithLeadingString:(id)arg1;

@end
