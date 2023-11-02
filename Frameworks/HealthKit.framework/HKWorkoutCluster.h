
@interface HKWorkoutCluster : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _bestWorkoutUUID;
    NSUUID * _clusterUUID;
    NSUUID * _lastWorkoutUUID;
    double  _relevanceValue;
    NSString * _workoutRouteLabel;
    NSData * _workoutRouteSnapshot;
    NSArray * _workoutUUIDs;
}

@property (nonatomic, readonly, copy) NSUUID *bestWorkoutUUID;
@property (nonatomic, readonly, copy) NSUUID *clusterUUID;
@property (nonatomic, readonly, copy) NSUUID *lastWorkoutUUID;
@property (nonatomic, readonly) double relevanceValue;
@property (nonatomic, readonly, copy) NSString *workoutRouteLabel;
@property (nonatomic, readonly, copy) NSData *workoutRouteSnapshot;
@property (nonatomic, readonly, copy) NSArray *workoutUUIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithUUID:(id)arg1 workoutUUIDs:(id)arg2 lastWorkoutUUID:(id)arg3 bestWorkoutUUID:(id)arg4 relevanceValue:(double)arg5 workoutRouteSnapshot:(id)arg6 workoutRouteLabel:(id)arg7;
- (id)bestWorkoutUUID;
- (id)clusterUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkoutUUIDs:(id)arg1 lastWorkoutUUID:(id)arg2 bestWorkoutUUID:(id)arg3 relevanceValue:(double)arg4 workoutRouteSnapshot:(id)arg5 workoutRouteLabel:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)lastWorkoutUUID;
- (double)relevanceValue;
- (id)workoutRouteLabel;
- (id)workoutRouteSnapshot;
- (id)workoutUUIDs;

@end
