
@interface _MLVNScenePrintCustomModel : NSObject <MLCustomModel> {
    MLModelConfiguration * _configuration;
    MLModelDescription * _modelDescription;
    unsigned long long  _scenePrintRequestRevision;
}

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) unsigned long long scenePrintRequestRevision;

- (void).cxx_destruct;
- (id)configuration;
- (id)featureValueFromScenePrint:(id)arg1 elementSize:(unsigned long long)arg2;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)scenePrintRequestRevision;

@end
