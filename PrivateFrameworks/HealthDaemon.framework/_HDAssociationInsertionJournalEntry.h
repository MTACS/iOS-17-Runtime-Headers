
@interface _HDAssociationInsertionJournalEntry : HDJournalEntry {
    NSData * _childUUIDsData;
    bool  _enforceSameSource;
    NSUUID * _parentUUID;
    long long  _provenance;
    long long  _syncIdentity;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
