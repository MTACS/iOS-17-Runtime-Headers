
@interface CRTextSequenceRecognizerModelCoreML : CRTextSequenceRecognizerModel {
    CRNeuralRecognizerConfiguration * _configuration;
    MLModel * _model;
}

@property (nonatomic, readonly) MLModel *model;

- (void).cxx_destruct;
- (id)configuration;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithMLConfiguration:(id)arg1 error:(id*)arg2;
- (id)inputBatchFromLineRegions:(id)arg1 image:(id)arg2 regionWidth:(double)arg3 configuration:(id)arg4 rectifier:(id)arg5;
- (id)model;
- (id)predictFromInputs:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionFromImg_input:(id)arg1 error:(id*)arg2;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)shouldSaturateInputBatchesForConfiguration:(id)arg1;

@end
