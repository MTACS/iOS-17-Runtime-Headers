
@interface HDInsertRacingClustersOperation : HDJournalableOperation {
    NSArray * _clusters;
    long long  _provenance;
}

@property (nonatomic, readonly, copy) NSArray *clusters;
@property (nonatomic, readonly) long long provenance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clusters;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClusters:(id)arg1 provenance:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (long long)provenance;

@end
