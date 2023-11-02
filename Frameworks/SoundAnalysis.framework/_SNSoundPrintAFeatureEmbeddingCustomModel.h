
@interface _SNSoundPrintAFeatureEmbeddingCustomModel : _SNSoundPrintFeatureEmbeddingCustomModel <MLCustomModel> {
    NSString * _inputFeatureName;
    NSString * _outputFeatureName;
    NSArray * _outputShape;
}

- (void).cxx_destruct;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
