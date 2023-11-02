
@interface HDWorkoutClusterServer : HDStandardTaskServer <HKWorkoutClusterStoreServer> {
    unsigned long long  _maxRouteCoordinateBatchSize;
    unsigned long long  _maxWorkoutBatchSize;
    HDRaceRouteClusterManager * _raceRouteClusterManager;
    HDWorkoutClusterManager * _workoutClusterManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxRouteCoordinateBatchSize;
@property (nonatomic) unsigned long long maxWorkoutBatchSize;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)exportedInterface;
- (unsigned long long)maxRouteCoordinateBatchSize;
- (unsigned long long)maxWorkoutBatchSize;
- (id)remoteInterface;
- (void)remote_createWorkoutCluster:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_deleteWorkoutClusterWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchRouteCoordinatesForWorkoutUUID:(id)arg1 dateInterval:(id)arg2 limit:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)remote_fetchRouteCoordinatesForWorkoutUUID:(id)arg1 startDate:(id)arg2 limit:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)remote_fetchWorkoutClusterContainingWorkoutUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchWorkoutClustersContainingWorkoutUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchWorkoutClustersWithCompletion:(id /* block */)arg1;
- (void)remote_fetchWorkoutCountWithFilter:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchWorkoutRouteSnapshotForClusterUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchWorkoutUUIDsForClusterUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchWorkoutsWithFilter:(id)arg1 anchor:(id)arg2 limit:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)remote_fetchWorkoutsWithFilter:(id)arg1 limit:(unsigned long long)arg2 sortDescriptors:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_generateRaceRouteClustersWithLimit:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)remote_updateWorkoutClusterWithUUID:(id)arg1 newRelevance:(id)arg2 newLastWorkoutUUID:(id)arg3 newBestWorkoutUUID:(id)arg4 newWorkoutAssociations:(id)arg5 workoutAssociationsToRemove:(id)arg6 completion:(id /* block */)arg7;
- (void)remote_updateWorkoutRouteLabel:(id)arg1 forClusterUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_updateWorkoutRouteSnapshot:(id)arg1 forClusterUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)setMaxRouteCoordinateBatchSize:(unsigned long long)arg1;
- (void)setMaxWorkoutBatchSize:(unsigned long long)arg1;

@end
