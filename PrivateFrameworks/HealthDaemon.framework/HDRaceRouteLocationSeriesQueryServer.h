
@interface HDRaceRouteLocationSeriesQueryServer : HDQueryServer {
    NSUUID * _clusterUUID;
    unsigned long long  _limit;
    double  _timestampAnchor;
    unsigned long long  _workoutSelection;
    NSUUID * _workoutUUID;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
