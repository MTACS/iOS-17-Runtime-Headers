
@interface HDInsertCodableContributorsOperation : HDJournalableOperation {
    NSArray * _contributors;
    long long  _provenance;
}

@property (nonatomic, readonly, copy) NSArray *contributors;
@property (nonatomic, readonly) long long provenance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contributors;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContributors:(id)arg1 provenance:(long long)arg2;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (long long)provenance;

@end
