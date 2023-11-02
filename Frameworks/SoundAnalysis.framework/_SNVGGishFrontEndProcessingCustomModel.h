
@interface _SNVGGishFrontEndProcessingCustomModel : NSObject <MLCustomModel> {
    SNDSPGraphCustomModel * _model;
}

- (void).cxx_destruct;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
