
@interface MLComputeBatchDataSource : NSObject <MLComputeDataProvider> {
    <MLBatchProvider> * _batchProvider;
    unsigned long long  _batchSize;
    MLNeuralNetworkEngine * _nnEngine;
    bool  _useForPrediction;
}

@property (nonatomic, readonly) <MLBatchProvider> *batchProvider;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, readonly) MLNeuralNetworkEngine *nnEngine;
@property (nonatomic, readonly) bool useForPrediction;

- (void).cxx_destruct;
- (id)batchAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (id)batchProvider;
- (unsigned long long)batchSize;
- (id)initWithBatchProvider:(id)arg1 batchSize:(unsigned long long)arg2 forPrediction:(bool)arg3 neuralNetworkEngine:(id)arg4 error:(id*)arg5;
- (id)mlcDataSourceAtIndex:(long long)arg1 error:(id*)arg2;
- (id)nnEngine;
- (unsigned long long)numberOfBatches;
- (void)setBatchSize:(unsigned long long)arg1;
- (unsigned long long)sizeOfBatchAtIndex:(unsigned long long)arg1;
- (bool)useForPrediction;

@end
