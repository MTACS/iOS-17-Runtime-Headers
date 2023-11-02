
@interface _HDDataInsertionJournalEntry : HDJournalEntry {
    HKObject * _dataObject;
    HDDataOriginProvenance * _provenance;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
