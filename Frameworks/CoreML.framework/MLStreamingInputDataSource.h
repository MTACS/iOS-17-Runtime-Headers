
@interface MLStreamingInputDataSource : NSObject <MLComputeDataProvider> {
    unsigned long long  _batchSize;
    NSMutableArray * _dataSources;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) NSMutableArray *dataSources;

- (void).cxx_destruct;
- (void)appendBatchedTensors:(id)arg1 numberOfTensors:(unsigned long long)arg2;
- (id)batchAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)batchSize;
- (id)dataSources;
- (id)initWithBatchSize:(unsigned long long)arg1;
- (unsigned long long)numberOfBatches;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setDataSources:(id)arg1;
- (unsigned long long)sizeOfBatchAtIndex:(unsigned long long)arg1;

@end
