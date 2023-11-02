
@interface HDOnboardingCompletionJournalOperation : HDJournalEntry <NSSecureCoding> {
    NSArray * _codableOnboardingCompletions;
    long long  _syncProvenance;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodableOnboardingCompletions:(id)arg1 syncProvenance:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)performOrJournalWithProfile:(id)arg1 error:(id*)arg2;

@end
