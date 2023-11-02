
@interface HMIClusteringTaskSummary : HMFObject {
    double  _clusteringDuration;
    NSError * _error;
    double  _faceprintingDuration;
    long long  _numberOfClusters;
    long long  _numberOfFaceprintsClustered;
    long long  _numberOfPersonsCreated;
    long long  _numberOfUnknownFaceprintsAssociated;
    double  _totalDuration;
}

@property double clusteringDuration;
@property (retain) NSError *error;
@property double faceprintingDuration;
@property long long numberOfClusters;
@property long long numberOfFaceprintsClustered;
@property long long numberOfPersonsCreated;
@property long long numberOfUnknownFaceprintsAssociated;
@property double totalDuration;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (double)clusteringDuration;
- (id)error;
- (double)faceprintingDuration;
- (id)init;
- (long long)numberOfClusters;
- (long long)numberOfFaceprintsClustered;
- (long long)numberOfPersonsCreated;
- (long long)numberOfUnknownFaceprintsAssociated;
- (void)setClusteringDuration:(double)arg1;
- (void)setError:(id)arg1;
- (void)setFaceprintingDuration:(double)arg1;
- (void)setNumberOfClusters:(long long)arg1;
- (void)setNumberOfFaceprintsClustered:(long long)arg1;
- (void)setNumberOfPersonsCreated:(long long)arg1;
- (void)setNumberOfUnknownFaceprintsAssociated:(long long)arg1;
- (void)setTotalDuration:(double)arg1;
- (double)totalDuration;

@end
