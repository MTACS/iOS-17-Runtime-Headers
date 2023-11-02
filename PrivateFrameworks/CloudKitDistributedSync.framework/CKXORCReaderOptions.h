
@interface CKXORCReaderOptions : NSObject {
    unsigned long long  _batchSize;
    NSString * _testExceptionDuringLoadBatch;
    unsigned long long  _testExceptionDuringLoadBatchLoadsToSkip;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) NSString *testExceptionDuringLoadBatch;
@property (nonatomic) unsigned long long testExceptionDuringLoadBatchLoadsToSkip;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (id)init;
- (id)initWithBatchSize:(unsigned long long)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setTestExceptionDuringLoadBatch:(id)arg1;
- (void)setTestExceptionDuringLoadBatchLoadsToSkip:(unsigned long long)arg1;
- (id)testExceptionDuringLoadBatch;
- (unsigned long long)testExceptionDuringLoadBatchLoadsToSkip;

@end
