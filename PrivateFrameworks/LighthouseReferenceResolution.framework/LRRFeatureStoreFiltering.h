
@interface LRRFeatureStoreFiltering : NSObject {
    NSNumber * _deploymentID;
    NSString * _experimentID;
    bool  _filterEnabled;
    NSString * _treatmentID;
}

@property (nonatomic, readonly) NSNumber *deploymentID;
@property (nonatomic, readonly) NSString *experimentID;
@property (nonatomic) bool filterEnabled;
@property (nonatomic, readonly) NSString *treatmentID;

- (void).cxx_destruct;
- (id)deploymentID;
- (id)experimentID;
- (bool)filterEnabled;
- (id)filterSamplesAndComputeTimestamps:(id)arg1 assetInfo:(id)arg2;
- (id)getTrialAssetInfo;
- (id)init:(id)arg1 deploymentID:(long long)arg2 treatmentID:(id)arg3 filterEnabled:(bool)arg4;
- (bool)isKeyInUserDefaults:(id)arg1;
- (void)manageDeploymentInfoForEvaluation;
- (id)readUserDefaultAndFilterSamples;
- (void)setFilterEnabled:(bool)arg1;
- (id)treatmentID;

@end
