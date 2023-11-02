
@interface HDFitnessMachineAnalyticsCollector : NSObject {
    HKPersistentTimer * _authorizationTimer;
    HDGymKitWorkoutAnalyticEvent * _gymKitWorkoutEvent;
}

@property (nonatomic, retain) HDGymKitWorkoutAnalyticEvent *gymKitWorkoutEvent;

- (void).cxx_destruct;
- (id)gymKitWorkoutEvent;
- (id)init;
- (void)setFitnessMachineType:(unsigned long long)arg1 manufacturer:(id)arg2;
- (void)setGymKitWorkoutEvent:(id)arg1;
- (void)userBeganPairing;
- (void)userIsAuthorized;
- (void)workoutEndedSubmitMetricsWith:(id)arg1;
- (void)workoutFailedWithError:(id)arg1;

@end
