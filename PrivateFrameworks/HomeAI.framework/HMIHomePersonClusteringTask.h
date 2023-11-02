
@interface HMIHomePersonClusteringTask : HMIHomeTask {
    HMIGreedyClustering * _clusterer;
    <HMIHomePersonManagerDataSource> * _dataSource;
    bool  _doImpurePersonCleanup;
    <HMIFaceClassifier> * _faceClassifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMIPersonsModelManager * _personsModelManager;
    NSUUID * _sourceUUID;
    NSDate * _startTime;
    HMIClusteringTaskSummary * _summary;
}

@property (readonly) <HMIHomePersonManagerDataSource> *dataSource;
@property (readonly) bool doImpurePersonCleanup;
@property (readonly) HMIPersonsModelManager *personsModelManager;
@property (readonly) NSUUID *sourceUUID;
@property (readonly) NSDate *startTime;
@property (readonly) HMIClusteringTaskSummary *summary;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_stageFive_addPersons:(id)arg1 clusterMapping:(id)arg2 faceprints:(id)arg3;
- (void)_stageFour_clusterFaceprints:(id)arg1;
- (void)_stageOne_fetchFaceCrops;
- (void)_stageSix_associateFaceCropsWithClusterMapping:(id)arg1 faceprints:(id)arg2;
- (void)_stageThree_generateFaceprintsForFaceCrops:(id)arg1 existingFaceprints:(id)arg2;
- (void)_stageTwo_fetchFaceprints:(id)arg1;
- (void)_stageZero_expireUnnamedPersons;
- (id)dataSource;
- (bool)doImpurePersonCleanup;
- (void)finish;
- (id)initWithTaskID:(int)arg1 homeUUID:(id)arg2 dataSource:(id)arg3 sourceUUID:(id)arg4 personsModelManager:(id)arg5 doImpurePersonCleanup:(bool)arg6 error:(id*)arg7;
- (void)mainInsideAutoreleasePool;
- (id)personCreatedDateFromFaceCrops:(id)arg1;
- (id)personsModelManager;
- (void)removePerson:(id)arg1;
- (id)sourceUUID;
- (id)startTime;
- (id)summary;

@end
