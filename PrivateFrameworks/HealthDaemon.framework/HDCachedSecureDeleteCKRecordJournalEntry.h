
@interface HDCachedSecureDeleteCKRecordJournalEntry : HDJournalEntry {
    long long  _recordID;
}

@property (nonatomic) long long recordID;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)recordID;
- (void)setRecordID:(long long)arg1;

@end
