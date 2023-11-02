
@interface HDCachedSecureCKRecordJournalEntry : HDJournalEntry {
    NSData * _recordData;
    long long  _recordID;
}

@property (nonatomic, retain) NSData *recordData;
@property (nonatomic) long long recordID;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recordData;
- (long long)recordID;
- (void)setRecordData:(id)arg1;
- (void)setRecordID:(long long)arg1;

@end
