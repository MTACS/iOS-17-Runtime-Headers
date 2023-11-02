
@interface HDWorkoutClusterManager : NSObject {
    HDAssertion * _accessibilityAssertion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDProfile * _profile;
}

@property (nonatomic) HDProfile *profile;

- (void).cxx_destruct;
- (id)accessibilityAssertion;
- (id)allWorkoutClustersWithError:(id*)arg1;
- (id)allWorkoutUUIDsForClusterUUID:(id)arg1 error:(id*)arg2;
- (bool)createWorkoutCluster:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)deleteWorkoutClusterWithUUID:(id)arg1 error:(id*)arg2;
- (bool)enumerateRouteLocationsForWorkoutUUID:(id)arg1 startDate:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (id)initWithProfile:(id)arg1;
- (bool)performUsingAccessibilityAssertionWithError:(id*)arg1 block:(id /* block */)arg2;
- (id)profile;
- (void)setProfile:(id)arg1;
- (void)takeAccessibilityAssertionIfNeeded;
- (bool)updateWorkoutClusterWithUUID:(id)arg1 newRelevance:(id)arg2 newLastWorkoutUUID:(id)arg3 newBestWorkoutUUID:(id)arg4 newWorkoutAssociations:(id)arg5 workoutAssociationsToRemove:(id)arg6 error:(id*)arg7;
- (bool)updateWorkoutClusterWithUUID:(id)arg1 newRouteLabel:(id)arg2 error:(id*)arg3;
- (bool)updateWorkoutClusterWithUUID:(id)arg1 newRouteSnapshot:(id)arg2 error:(id*)arg3;
- (id)workoutClusterContainingWorkoutUUID:(id)arg1 error:(id*)arg2;
- (id)workoutClustersContainingWorkoutUUIDs:(id)arg1 error:(id*)arg2;
- (id)workoutCountWithFilter:(id)arg1 error:(id*)arg2;
- (id)workoutRouteSnapshotForClusterUUID:(id)arg1 error:(id*)arg2;
- (id)workoutsWithFilter:(id)arg1 anchor:(id)arg2 limit:(unsigned long long)arg3 newAnchor:(id*)arg4 error:(id*)arg5;
- (id)workoutsWithFilter:(id)arg1 limit:(unsigned long long)arg2 sortDescriptors:(id)arg3 error:(id*)arg4;

@end
