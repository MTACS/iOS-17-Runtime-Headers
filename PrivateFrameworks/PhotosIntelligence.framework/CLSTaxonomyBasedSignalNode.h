
@interface CLSTaxonomyBasedSignalNode : CLSSignalNode {
    double  _graphHighPrecisionThreshold;
    double  _graphHighRecallThreshold;
    double  _searchThreshold;
}

@property (nonatomic) double graphHighPrecisionThreshold;
@property (nonatomic) double graphHighRecallThreshold;
@property (nonatomic) double searchThreshold;

- (double)graphHighPrecisionThreshold;
- (double)graphHighRecallThreshold;
- (id)initWithTaxonomyNode:(id)arg1;
- (double)searchThreshold;
- (void)setGraphHighPrecisionThreshold:(double)arg1;
- (void)setGraphHighRecallThreshold:(double)arg1;
- (void)setSearchThreshold:(double)arg1;

@end
