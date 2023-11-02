
@interface PLLocationOfInterest : NSObject {
    NSUUID * _identifier;
    PLLocationOfInterestLocation * _mapItemLocation;
    PLLocationOfInterestLocation * _routineLocation;
    long long  _type;
    double  _typeRadius;
    NSMutableArray * _visits;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) PLLocationOfInterestLocation *mapItemLocation;
@property (nonatomic, readonly) PLLocationOfInterestLocation *routineLocation;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double typeRadius;
@property (nonatomic, retain) NSMutableArray *visits;

- (void).cxx_destruct;
- (void)addVisit:(id)arg1;
- (double)centerDistanceFromLocation:(id)arg1;
- (id)description;
- (double)distanceFromLocation:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 locationOfInterestType:(long long)arg2 typeRadius:(double)arg3 routineLocation:(id)arg4 mapItemLocation:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)mapItemLocation;
- (void)removeVisit:(id)arg1;
- (id)routineLocation;
- (void)setVisits:(id)arg1;
- (long long)type;
- (double)typeRadius;
- (id)visits;

@end
