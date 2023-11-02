
@interface HKWorkoutClusterStore : NSObject <HKWorkoutClusterStoreClient, _HKXPCExportable> {
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id /* block */)_coordinatesHandlerWithCallback:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_workoutFilterForPredicate:(id)arg1;
- (void)connectionInvalidated;
- (void)createWorkoutCluster:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteWorkoutClusterWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)exportedInterface;
- (void)fetchRouteCoordinatesForWorkoutUUID:(id)arg1 dateInterval:(id)arg2 limit:(unsigned long long)arg3 handler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)fetchRouteCoordinatesForWorkoutUUID:(id)arg1 startDate:(id)arg2 limit:(unsigned long long)arg3 handler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)fetchWorkoutClusterContainingWorkoutUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchWorkoutClustersContainingWorkoutUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchWorkoutClustersWithCompletion:(id /* block */)arg1;
- (void)fetchWorkoutCountWithPredicate:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchWorkoutRouteSnapshotForClusterUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchWorkoutUUIDsForClusterUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchWorkoutsWithPredicate:(id)arg1 anchor:(id)arg2 limit:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)fetchWorkoutsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 sortDescriptors:(id)arg3 completion:(id /* block */)arg4;
- (void)generateRaceRouteClustersWithLimit:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;
- (void)updateWorkoutClusterWithUUID:(id)arg1 newRelevance:(id)arg2 newLastWorkoutUUID:(id)arg3 newBestWorkoutUUID:(id)arg4 newWorkoutAssociations:(id)arg5 workoutAssociationsToRemove:(id)arg6 completion:(id /* block */)arg7;
- (void)updateWorkoutRouteLabel:(id)arg1 forClusterUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)updateWorkoutRouteSnapshot:(id)arg1 forClusterUUID:(id)arg2 completion:(id /* block */)arg3;

@end
