
@interface TICandidatesOfferedEvent : TIUserAction {
    TIAutocorrectionList * _candidates;
}

@property (nonatomic, readonly) TIAutocorrectionList *candidates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)candidates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidates:(id)arg1 keyboardState:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
