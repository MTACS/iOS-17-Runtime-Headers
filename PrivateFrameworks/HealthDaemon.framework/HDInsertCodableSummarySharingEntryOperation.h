
@interface HDInsertCodableSummarySharingEntryOperation : HDJournalableOperation {
    NSArray * _codableEntries;
    bool  _ignoreIfExists;
    long long  _provenance;
    bool  _shouldResolveCNContact;
}

@property (nonatomic, readonly, copy) NSArray *codableEntries;
@property (nonatomic, readonly) bool ignoreIfExists;
@property (nonatomic, readonly) long long provenance;
@property (nonatomic, readonly) bool shouldResolveCNContact;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)codableEntries;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignoreIfExists;
- (id)init;
- (id)initWithCodableEntries:(id)arg1 ignoreIfExists:(bool)arg2 provenance:(long long)arg3 shouldResolveCNContact:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (long long)provenance;
- (bool)shouldResolveCNContact;

@end
