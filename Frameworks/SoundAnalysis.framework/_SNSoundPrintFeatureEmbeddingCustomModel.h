
@interface _SNSoundPrintFeatureEmbeddingCustomModel : NSObject {
    <SNMLModel> * _model;
    MLModelDescription * _modelDescription;
    NSDictionary * _outerToInnerInputFeatureNameMappings;
    NSDictionary * _outerToInnerOutputFeatureNameMappings;
}

- (void).cxx_destruct;
- (id)initWithModel:(id)arg1 modelDescription:(id)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
