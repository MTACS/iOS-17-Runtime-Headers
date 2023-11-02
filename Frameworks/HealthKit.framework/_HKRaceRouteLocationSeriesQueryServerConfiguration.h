
@interface _HKRaceRouteLocationSeriesQueryServerConfiguration : HKQueryServerConfiguration {
    NSUUID * _clusterUUID;
    unsigned long long  _limit;
    double  _timestampAnchor;
    unsigned long long  _workoutSelection;
    NSUUID * _workoutUUID;
}

@property (nonatomic, copy) NSUUID *clusterUUID;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) double timestampAnchor;
@property (nonatomic) unsigned long long workoutSelection;
@property (nonatomic, copy) NSUUID *workoutUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clusterUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)limit;
- (void)setClusterUUID:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setTimestampAnchor:(double)arg1;
- (void)setWorkoutSelection:(unsigned long long)arg1;
- (void)setWorkoutUUID:(id)arg1;
- (double)timestampAnchor;
- (unsigned long long)workoutSelection;
- (id)workoutUUID;

@end
