
@interface TITypologyRecordCandidateRejected : TITypologyRecord {
    TIKeyboardCandidate * _candidate;
}

@property (nonatomic, retain) TIKeyboardCandidate *candidate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToStatistic:(id)arg1;
- (id)candidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCandidate:(id)arg1;
- (id)shortDescription;

@end
