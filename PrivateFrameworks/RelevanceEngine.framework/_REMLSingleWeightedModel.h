
@interface _REMLSingleWeightedModel : _REMLWeightedModel <_REMLSingleWeightedModelProperties> {
    REMLModel * _model;
}

@property (nonatomic, readonly) REMLModel *model;

- (void).cxx_destruct;
- (void)enumerateModels:(id /* block */)arg1;
- (id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 biasFeature:(id)arg3 modelVarianceEpsilon:(float)arg4;
- (bool)loadModelFromURL:(id)arg1 error:(id*)arg2;
- (id)model;
- (id)predictWithFeatures:(id)arg1;
- (bool)saveModelToURL:(id)arg1 error:(id*)arg2;
- (void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2;

@end
