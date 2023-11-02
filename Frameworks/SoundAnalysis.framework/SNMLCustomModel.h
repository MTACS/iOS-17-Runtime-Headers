
@interface SNMLCustomModel : NSObject <SNMLModel> {
    <MLCustomModel> * _customModel;
    MLModelDescription * _modelDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelDescription *modelDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMLCustomModel:(id)arg1 modelDescription:(id)arg2;
- (id)modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
