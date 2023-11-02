
@interface ASDatabaseCompetitionDeletionJournalEntry : HDJournalEntry {
    NSUUID * _friendUUID;
    long long  _type;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFriendUUID:(id)arg1 type:(long long)arg2;

@end
