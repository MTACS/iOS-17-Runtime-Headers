
@interface _HDLocationInsertionJournalEntry : HDJournalEntry {
    NSArray * _data;
    NSUUID * _seriesIdentifier;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
