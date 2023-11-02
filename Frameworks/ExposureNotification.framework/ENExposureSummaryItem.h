
@interface ENExposureSummaryItem : NSObject <CUXPCCodable> {
    double  _maximumScore;
    double  _scoreSum;
    double  _weightedDurationSum;
}

@property (nonatomic) double maximumScore;
@property (nonatomic) double scoreSum;
@property (nonatomic) double weightedDurationSum;

- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (double)maximumScore;
- (void)roundDurations;
- (double)scoreSum;
- (void)setMaximumScore:(double)arg1;
- (void)setScoreSum:(double)arg1;
- (void)setWeightedDurationSum:(double)arg1;
- (double)weightedDurationSum;

@end
