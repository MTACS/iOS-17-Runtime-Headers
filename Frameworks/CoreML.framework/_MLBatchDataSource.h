
@interface _MLBatchDataSource : NSObject <ETDataProvider> {
    <MLBatchProvider> * _batchProvider;
    MLNeuralNetworkEngine * _nnEngine;
    bool  _useForPrediction;
}

@property (nonatomic, readonly) <MLBatchProvider> *batchProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MLNeuralNetworkEngine *nnEngine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useForPrediction;

- (void).cxx_destruct;
- (id)batchProvider;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithMLBatchProvider:(id)arg1 forPrediction:(bool)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4;
- (id)nnEngine;
- (unsigned long long)numberOfDataPoints;
- (bool)useForPrediction;

@end
