
@interface _MLNLPWordTaggingModel : NSObject <MLCustomModel> {
    MLModelDescription * _modelDescription;
    void * _wordTaggingModel;
}

@property (retain) MLModelDescription *modelDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setModelDescription:(id)arg1;

@end
