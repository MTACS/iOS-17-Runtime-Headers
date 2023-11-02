
@interface _HDSampleTypesDeletionEntry : HDJournalEntry {
    NSSet * _sourceIDs;
    NSSet * _types;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
