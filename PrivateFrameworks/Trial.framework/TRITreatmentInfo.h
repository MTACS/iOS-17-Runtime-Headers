
@interface TRITreatmentInfo : NSObject {
    int  _deploymentId;
    NSString * _experimentId;
    NSString * _namespaceName;
    <TRIPaths> * _paths;
    NSString * _treatmentId;
}

@property (nonatomic) int deploymentId;
@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic, retain) NSString *namespaceName;
@property (nonatomic, retain) NSString *treatmentId;

+ (id)loadInfoForTreatment:(id)arg1 namespaceName:(id)arg2 paths:(id)arg3;

- (void).cxx_destruct;
- (id)_treatmentBasePath;
- (id)baseUrlForTreatment:(id)arg1 namespaceName:(id)arg2;
- (id)baseUrlForTreatmentsWithNamespaceName:(id)arg1;
- (int)deploymentId;
- (id)experimentId;
- (id)infoDictionary;
- (id)initWithPaths:(id)arg1;
- (bool)load;
- (bool)loadFromUrl:(id)arg1;
- (id)namespaceName;
- (bool)save;
- (bool)saveToDir:(id)arg1;
- (bool)saveToUrl:(id)arg1;
- (void)setDeploymentId:(int)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setNamespaceName:(id)arg1;
- (void)setTreatmentId:(id)arg1;
- (id)treatmentDirectory;
- (id)treatmentId;
- (id)url;
- (id)urlWithDir:(id)arg1;

@end
