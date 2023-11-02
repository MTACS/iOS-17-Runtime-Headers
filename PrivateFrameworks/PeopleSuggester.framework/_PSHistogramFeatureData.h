
@interface _PSHistogramFeatureData : NSObject {
    NSDictionary * _bucketHasEver;
    NSDictionary * _bucketSums;
    NSDictionary * _cache;
    NSMutableDictionary * _candidateTimeIntervalSums;
    NSDictionary * _factorToUniqueBucketNames;
}

@property (nonatomic, retain) NSDictionary *bucketHasEver;
@property (nonatomic, retain) NSDictionary *bucketSums;
@property (nonatomic, retain) NSDictionary *cache;
@property (nonatomic, retain) NSMutableDictionary *candidateTimeIntervalSums;
@property (nonatomic, retain) NSDictionary *factorToUniqueBucketNames;

- (void).cxx_destruct;
- (id)bucketHasEver;
- (id)bucketSums;
- (id)cache;
- (id)candidateTimeIntervalSums;
- (id)factorToUniqueBucketNames;
- (void)setBucketHasEver:(id)arg1;
- (void)setBucketSums:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setCandidateTimeIntervalSums:(id)arg1;
- (void)setFactorToUniqueBucketNames:(id)arg1;

@end
