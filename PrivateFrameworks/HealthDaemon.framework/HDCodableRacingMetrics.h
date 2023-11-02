
@interface HDCodableRacingMetrics : PBCodable <NSCopying> {
    double  _distance;
    double  _duration;
    struct { 
        unsigned int distance : 1; 
        unsigned int duration : 1; 
        unsigned int startDate : 1; 
    }  _has;
    NSMutableArray * _routePoints;
    double  _startDate;
    NSData * _workoutUUID;
}

@property (nonatomic) double distance;
@property (nonatomic) double duration;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasStartDate;
@property (nonatomic, readonly) bool hasWorkoutUUID;
@property (nonatomic, retain) NSMutableArray *routePoints;
@property (nonatomic) double startDate;
@property (nonatomic, retain) NSData *workoutUUID;

+ (Class)routePointsType;

- (void).cxx_destruct;
- (void)addRoutePoints:(id)arg1;
- (void)clearRoutePoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distance;
- (double)duration;
- (bool)hasDistance;
- (bool)hasDuration;
- (bool)hasStartDate;
- (bool)hasWorkoutUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routePoints;
- (id)routePointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)routePointsCount;
- (void)setDistance:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setRoutePoints:(id)arg1;
- (void)setStartDate:(double)arg1;
- (void)setWorkoutUUID:(id)arg1;
- (double)startDate;
- (id)workoutUUID;
- (void)writeTo:(id)arg1;

@end
