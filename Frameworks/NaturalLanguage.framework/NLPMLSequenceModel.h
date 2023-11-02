
@interface NLPMLSequenceModel : NLModel <MLCustomModel> {
    MLModelDescription * _modelDescription;
}

@property (readonly, copy) MLModelDescription *modelDescription;

- (void).cxx_destruct;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
