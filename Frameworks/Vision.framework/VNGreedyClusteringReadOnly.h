
@interface VNGreedyClusteringReadOnly : NSObject <VNClusteringCancelling, VNClusteringReadOnly> {
    float  _ageClassifierBabyThreshold;
    NSString * _ageClassifierFilePath;
    float  _ageClassifierKidThreshold;
    NSString * _algorithmType;
    NSString * _cacheFolderPath;
    VNClusteringLogger * _clusteringLogger;
    unsigned long long  _faceprintRevision;
    NSData * _state;
    VNSuggestionsLogger * _suggestionsLogger;
    unsigned long long  _torsoprintRevision;
    bool  _vectorMapReadOnlyFlag;
    struct shared_ptr<const vision::mod::FaceClustering> { 
        struct FaceClustering {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_ClusteringImpl_const;
}

+ (void)addFaceObservations:(id)arg1 toFaceDescriptorBuffer:(void*)arg2;
+ (void)addFaceObservations:(id)arg1 withGroupingIdentifiers:(id)arg2 toFaceDescriptorBuffer:(void*)arg3;
+ (void)addPersonData:(id)arg1 withGroupingIdentifiers:(id)arg2 toFaceDescriptorBuffer:(void*)arg3;
+ (id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id*)arg3;
+ (id)getRepresentativenessForFaces:(id)arg1 error:(id*)arg2;
+ (id)nonGroupedGroupID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_parseOptions:(id)arg1 error:(id*)arg2;
- (bool)cancelClustering:(id*)arg1;
- (id)convertUpdatePairsToClusters:(void*)arg1;
- (id)getAllClustersFromStateAndReturnError:(id*)arg1;
- (id)getClusterState:(id*)arg1;
- (id)getClusteredIds:(id*)arg1;
- (id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)getDistanceBetweenLevel0ClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3;
- (id)getDistanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2;
- (id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (id)getLevel0ClusteredIdsForFaceId:(id)arg1 error:(id*)arg2;
- (id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (void)initializeLogging;
- (id)maximumFaceIdInModelAndReturnError:(id*)arg1;
- (void)setGreedyClustererFaces_const:(struct shared_ptr<const vision::mod::FaceClustering> { struct FaceClustering {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;

@end
