
@interface HKRaceRouteCluster : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _bestWorkoutDate;
    double  _bestWorkoutDistance;
    double  _bestWorkoutDuration;
    NSUUID * _bestWorkoutUUID;
    unsigned long long  _clusterSize;
    NSUUID * _clusterUUID;
    NSDate * _lastWorkoutDate;
    double  _lastWorkoutDistance;
    double  _lastWorkoutDuration;
    CLLocation * _lastWorkoutStartingPoint;
    NSUUID * _lastWorkoutUUID;
    double  _relevanceValue;
    unsigned long long  _workoutActivityType;
    NSUUID * _workoutClusterUUID;
    NSString * _workoutRouteLabel;
    NSData * _workoutRouteSnapshot;
}

@property (nonatomic, readonly, copy) NSDate *bestWorkoutDate;
@property (nonatomic, readonly) double bestWorkoutDistance;
@property (nonatomic, readonly) double bestWorkoutDuration;
@property (nonatomic, readonly, copy) NSUUID *bestWorkoutUUID;
@property (nonatomic, readonly) unsigned long long clusterSize;
@property (nonatomic, readonly, copy) NSUUID *clusterUUID;
@property (nonatomic, readonly, copy) NSDate *lastWorkoutDate;
@property (nonatomic, readonly) double lastWorkoutDistance;
@property (nonatomic, readonly) double lastWorkoutDuration;
@property (nonatomic, readonly, copy) CLLocation *lastWorkoutStartingPoint;
@property (nonatomic, readonly, copy) NSUUID *lastWorkoutUUID;
@property (nonatomic, readonly) double relevanceValue;
@property (nonatomic, readonly) unsigned long long workoutActivityType;
@property (nonatomic, readonly, copy) NSUUID *workoutClusterUUID;
@property (nonatomic, readonly, copy) NSString *workoutRouteLabel;
@property (nonatomic, readonly, copy) NSData *workoutRouteSnapshot;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithUUID:(id)arg1 workoutClusterUUID:(id)arg2 clusterSize:(unsigned long long)arg3 relevanceValue:(double)arg4 workoutActivityType:(unsigned long long)arg5 lastWorkoutUUID:(id)arg6 lastWorkoutDate:(id)arg7 lastWorkoutDistance:(double)arg8 lastWorkoutDuration:(double)arg9 lastWorkoutStartingPoint:(id)arg10 bestWorkoutUUID:(id)arg11 bestWorkoutDate:(id)arg12 bestWorkoutDistance:(double)arg13 bestWorkoutDuration:(double)arg14 workoutRouteSnapshot:(id)arg15 workoutRouteLabel:(id)arg16;
- (void)_setRelevanceValue:(double)arg1;
- (void)_setWorkoutClusterUUID:(id)arg1;
- (void)_setWorkoutRouteLabel:(id)arg1;
- (void)_setWorkoutRouteSnapshot:(id)arg1;
- (id)bestWorkoutDate;
- (double)bestWorkoutDistance;
- (double)bestWorkoutDuration;
- (id)bestWorkoutUUID;
- (unsigned long long)clusterSize;
- (id)clusterUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastWorkoutDate;
- (double)lastWorkoutDistance;
- (double)lastWorkoutDuration;
- (id)lastWorkoutStartingPoint;
- (id)lastWorkoutUUID;
- (double)relevanceValue;
- (unsigned long long)workoutActivityType;
- (id)workoutClusterUUID;
- (id)workoutRouteLabel;
- (id)workoutRouteSnapshot;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

@end
