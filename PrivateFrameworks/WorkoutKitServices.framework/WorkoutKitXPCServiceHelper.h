
@interface WorkoutKitXPCServiceHelper : NSObject <WorkoutKitXPCServiceProtocol>

+ (id)sharedInstance;

- (id)_init;
- (void)addScheduledWorkouts:(id)arg1 sourceBundleId:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteScheduledWorkoutCompositionsForSourceBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)handleUninstalledAppIds:(id)arg1 completion:(id /* block */)arg2;
- (void)iconForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)openWorkoutAppWithWorkoutCompositionData:(id)arg1 completion:(id /* block */)arg2;
- (void)openWorkoutAppWithWorkoutPlanData:(id)arg1 completion:(id /* block */)arg2;
- (void)presentWorkoutCompositionData:(id)arg1 completion:(id /* block */)arg2;
- (void)presentWorkoutConfigurationData:(id)arg1 completion:(id /* block */)arg2;
- (void)removeScheduledWorkouts:(id)arg1 sourceBundleId:(id)arg2 completion:(id /* block */)arg3;
- (void)requestAuthorizationForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveAuthorizationStateForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveScheduledWorkoutCompositionsForSourceBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveWorkoutCompositionFromWorkout:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveWorkoutCompositionFromWorkoutUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)saveWorkoutCompositionData:(id)arg1 completion:(id /* block */)arg2;
- (void)setAuthorizationState:(id)arg1 forBundleId:(id)arg2 completion:(id /* block */)arg3;
- (void)storeScheduledWorkoutCompositions:(id)arg1 sourceBundleId:(id)arg2 completion:(id /* block */)arg3;

@end
