
@interface TestResult : NSObject {
    NSDate * _maxTimestamp;
    NSDate * _minTimestamp;
    long long  _numSuccesses;
    NSNumber * _pValue;
    NSNumber * _rejectNullHypothesis;
    long long  _sampleSize;
    bool  _testRan;
    NSString * _testSkippedReason;
}

@property (nonatomic, retain) NSDate *maxTimestamp;
@property (nonatomic, retain) NSDate *minTimestamp;
@property (nonatomic) long long numSuccesses;
@property (nonatomic, retain) NSNumber *pValue;
@property (nonatomic, retain) NSNumber *rejectNullHypothesis;
@property (nonatomic) long long sampleSize;
@property (nonatomic) bool testRan;
@property (nonatomic, retain) NSString *testSkippedReason;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTestRan:(bool)arg1 testSkippedReason:(id)arg2 pValue:(id)arg3 rejectNullHypothesis:(id)arg4 sampleSize:(long long)arg5 numSuccesses:(long long)arg6 minTimestamp:(id)arg7 maxTimestamp:(id)arg8;
- (id)maxTimestamp;
- (id)minTimestamp;
- (long long)numSuccesses;
- (id)pValue;
- (id)rejectNullHypothesis;
- (long long)sampleSize;
- (void)setMaxTimestamp:(id)arg1;
- (void)setMinTimestamp:(id)arg1;
- (void)setNumSuccesses:(long long)arg1;
- (void)setPValue:(id)arg1;
- (void)setRejectNullHypothesis:(id)arg1;
- (void)setSampleSize:(long long)arg1;
- (void)setTestRan:(bool)arg1;
- (void)setTestSkippedReason:(id)arg1;
- (bool)testRan;
- (id)testSkippedReason;

@end
