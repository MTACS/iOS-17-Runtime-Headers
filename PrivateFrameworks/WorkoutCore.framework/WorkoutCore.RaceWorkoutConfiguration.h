
@interface WorkoutCore.RaceWorkoutConfiguration : WorkoutCore.WorkoutConfiguration {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _raceFilter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  bestWorkoutDate;
    void bestWorkoutDistance;
    void bestWorkoutDuration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  bestWorkoutUUID;
    void clusterSize;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  clusterUUID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastWorkoutDate;
    void lastWorkoutDistance;
    void lastWorkoutDuration;
    void lastWorkoutStartingPointLatitude;
    void lastWorkoutStartingPointLongitude;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastWorkoutUUID;
    void relevanceValue;
    void routeSnapshotData;
    void routeTitle;
}

@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (long long)hash;

@end
