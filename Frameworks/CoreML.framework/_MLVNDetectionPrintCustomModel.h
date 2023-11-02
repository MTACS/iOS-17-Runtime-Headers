
@interface _MLVNDetectionPrintCustomModel : NSObject <MLCustomModel> {
    MLModelConfiguration * _configuration;
    unsigned long long  _detectionPrintRequestRevision;
    NSDictionary * _expectedOutputShapeV1;
    MLModelDescription * _modelDescription;
}

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (nonatomic, readonly) unsigned long long detectionPrintRequestRevision;
@property (nonatomic, readonly) NSDictionary *expectedOutputShapeV1;
@property (nonatomic, readonly) MLModelDescription *modelDescription;

- (void).cxx_destruct;
- (id)configuration;
- (unsigned long long)detectionPrintRequestRevision;
- (id)expectedOutputShapeV1;
- (id)featureValueFromDetectionPrint:(id)arg1 featureName:(id)arg2;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
