
@interface UITextReplacementCandidate : TIKeyboardCandidateSingle {
    UITextReplacement * _replacement;
}

@property (nonatomic, readonly) UITextReplacement *replacement;

+ (id)textReplacementCandidateForTextReplacement:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithTextReplacement:(id)arg1;
- (id)label;
- (id)replacement;

@end
