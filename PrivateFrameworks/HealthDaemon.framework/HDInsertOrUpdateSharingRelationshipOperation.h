
@interface HDInsertOrUpdateSharingRelationshipOperation : HDJournalableOperation {
    NSArray * _relationships;
    long long  _syncProvenance;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodableSharingRelationships:(id)arg1 syncProvenance:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
