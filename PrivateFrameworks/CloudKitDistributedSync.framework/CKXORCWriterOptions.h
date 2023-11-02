
@interface CKXORCWriterOptions : NSObject {
    double  _batchCommitMarginPercentage;
    unsigned long long  _batchResizeIncrement;
    unsigned long long  _batchSize;
    unsigned long long  _compressionBlockSize;
    long long  _compressionKind;
    unsigned long long  _stripeSize;
    NSString * _testExceptionDuringCommitBatch;
    unsigned long long  _testExceptionDuringCommitBatchCommitsToSkip;
    bool  _testRowsInterspersedWithNulls;
}

@property (nonatomic) double batchCommitMarginPercentage;
@property (nonatomic) unsigned long long batchResizeIncrement;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) unsigned long long compressionBlockSize;
@property (nonatomic) long long compressionKind;
@property (nonatomic) unsigned long long stripeSize;
@property (nonatomic, retain) NSString *testExceptionDuringCommitBatch;
@property (nonatomic) unsigned long long testExceptionDuringCommitBatchCommitsToSkip;
@property (nonatomic) bool testRowsInterspersedWithNulls;

- (void).cxx_destruct;
- (double)batchCommitMarginPercentage;
- (unsigned long long)batchResizeIncrement;
- (unsigned long long)batchSize;
- (unsigned long long)compressionBlockSize;
- (long long)compressionKind;
- (id)init;
- (id)initWithBatchSize:(unsigned long long)arg1;
- (void)setBatchCommitMarginPercentage:(double)arg1;
- (void)setBatchResizeIncrement:(unsigned long long)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setCompressionBlockSize:(unsigned long long)arg1;
- (void)setCompressionKind:(long long)arg1;
- (void)setStripeSize:(unsigned long long)arg1;
- (void)setTestExceptionDuringCommitBatch:(id)arg1;
- (void)setTestExceptionDuringCommitBatchCommitsToSkip:(unsigned long long)arg1;
- (void)setTestRowsInterspersedWithNulls:(bool)arg1;
- (unsigned long long)stripeSize;
- (id)testExceptionDuringCommitBatch;
- (unsigned long long)testExceptionDuringCommitBatchCommitsToSkip;
- (bool)testRowsInterspersedWithNulls;

@end
