
@interface HDObjectAuthorizationJournalEntry : HDJournalEntry {
    double  _modificationDate;
    NSArray * _records;
    long long  _syncIdentity;
    long long  _syncProvenance;
}

@property (nonatomic) double modificationDate;
@property (nonatomic, retain) NSArray *records;
@property (nonatomic) long long syncIdentity;
@property (nonatomic) long long syncProvenance;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)modificationDate;
- (id)records;
- (void)setModificationDate:(double)arg1;
- (void)setRecords:(id)arg1;
- (void)setSyncIdentity:(long long)arg1;
- (void)setSyncProvenance:(long long)arg1;
- (long long)syncIdentity;
- (long long)syncProvenance;

@end
