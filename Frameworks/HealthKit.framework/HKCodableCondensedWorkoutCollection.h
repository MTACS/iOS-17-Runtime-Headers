
@interface HKCodableCondensedWorkoutCollection : PBCodable <NSCopying> {
    NSMutableArray * _workouts;
}

@property (nonatomic, retain) NSMutableArray *workouts;

+ (Class)workoutsType;

- (void).cxx_destruct;
- (void)addWorkouts:(id)arg1;
- (void)clearWorkouts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setWorkouts:(id)arg1;
- (id)workouts;
- (id)workoutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)workoutsCount;
- (void)writeTo:(id)arg1;

@end
