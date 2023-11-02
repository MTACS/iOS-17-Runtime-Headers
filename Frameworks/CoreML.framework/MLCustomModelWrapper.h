
@interface MLCustomModelWrapper : MLModel {
    NSObject<MLCustomModel> * _customModel;
}

@property (retain) NSObject<MLCustomModel> *customModel;

- (void).cxx_destruct;
- (id)customModel;
- (id)initWithModelDescription:(id)arg1 customModel:(id)arg2 configuration:(id)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setCustomModel:(id)arg1;

@end
