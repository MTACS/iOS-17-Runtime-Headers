
@interface _HDDeletedSampleInsertionJournalEntry : HDJournalEntry {
    HDCodableObjectCollection * _objectCollection;
    HDDataOriginProvenance * _provenance;
    NSArray * _samples;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
