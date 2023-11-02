
@interface TwoSampleTestResult : NSObject {
    NSDate * _maxTimestamp1;
    NSDate * _maxTimestamp2;
    NSDate * _minTimestamp1;
    NSDate * _minTimestamp2;
    long long  _numSuccesses1;
    long long  _numSuccesses2;
    NSNumber * _rejectNullHypothesis;
    long long  _sampleSize1;
    long long  _sampleSize2;
    bool  _testRan;
    NSString * _testSkippedReason;
    NSNumber * _testStatistic;
}

@property (nonatomic, retain) NSDate *maxTimestamp1;
@property (nonatomic, retain) NSDate *maxTimestamp2;
@property (nonatomic, retain) NSDate *minTimestamp1;
@property (nonatomic, retain) NSDate *minTimestamp2;
@property (nonatomic) long long numSuccesses1;
@property (nonatomic) long long numSuccesses2;
@property (nonatomic, retain) NSNumber *rejectNullHypothesis;
@property (nonatomic) long long sampleSize1;
@property (nonatomic) long long sampleSize2;
@property (nonatomic) bool testRan;
@property (nonatomic, retain) NSString *testSkippedReason;
@property (nonatomic, retain) NSNumber *testStatistic;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTestRan:(bool)arg1 testSkippedReason:(id)arg2 testStatistic:(id)arg3 rejectNullHypothesis:(id)arg4 sampleSize1:(long long)arg5 numSuccesses1:(long long)arg6 minTimestamp1:(id)arg7 maxTimestamp1:(id)arg8 sampleSize2:(long long)arg9 numSuccesses2:(long long)arg10 minTimestamp2:(id)arg11 maxTimestamp2:(id)arg12;
- (id)maxTimestamp1;
- (id)maxTimestamp2;
- (id)minTimestamp1;
- (id)minTimestamp2;
- (long long)numSuccesses1;
- (long long)numSuccesses2;
- (id)rejectNullHypothesis;
- (long long)sampleSize1;
- (long long)sampleSize2;
- (void)setMaxTimestamp1:(id)arg1;
- (void)setMaxTimestamp2:(id)arg1;
- (void)setMinTimestamp1:(id)arg1;
- (void)setMinTimestamp2:(id)arg1;
- (void)setNumSuccesses1:(long long)arg1;
- (void)setNumSuccesses2:(long long)arg1;
- (void)setRejectNullHypothesis:(id)arg1;
- (void)setSampleSize1:(long long)arg1;
- (void)setSampleSize2:(long long)arg1;
- (void)setTestRan:(bool)arg1;
- (void)setTestSkippedReason:(id)arg1;
- (void)setTestStatistic:(id)arg1;
- (bool)testRan;
- (id)testSkippedReason;
- (id)testStatistic;

@end
