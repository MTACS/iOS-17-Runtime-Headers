
@interface ASCodableFriend : PBCodable <NSCopying> {
    NSMutableArray * _achievements;
    NSMutableArray * _competitions;
    ASCodableContact * _contact;
    NSMutableArray * _snapshots;
    NSMutableArray * _workouts;
}

@property (nonatomic, retain) NSMutableArray *achievements;
@property (nonatomic, retain) NSMutableArray *competitions;
@property (nonatomic, retain) ASCodableContact *contact;
@property (nonatomic, readonly) bool hasContact;
@property (nonatomic, retain) NSMutableArray *snapshots;
@property (nonatomic, retain) NSMutableArray *workouts;

+ (Class)achievementsType;
+ (Class)competitionsType;
+ (Class)snapshotsType;
+ (Class)workoutsType;

- (void).cxx_destruct;
- (id)achievements;
- (id)achievementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)achievementsCount;
- (void)addAchievements:(id)arg1;
- (void)addCompetitions:(id)arg1;
- (void)addSnapshots:(id)arg1;
- (void)addWorkouts:(id)arg1;
- (void)clearAchievements;
- (void)clearCompetitions;
- (void)clearSnapshots;
- (void)clearWorkouts;
- (id)competitions;
- (id)competitionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)competitionsCount;
- (id)contact;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContact;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAchievements:(id)arg1;
- (void)setCompetitions:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setSnapshots:(id)arg1;
- (void)setWorkouts:(id)arg1;
- (id)snapshots;
- (id)snapshotsAtIndex:(unsigned long long)arg1;
- (unsigned long long)snapshotsCount;
- (id)workouts;
- (id)workoutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)workoutsCount;
- (void)writeTo:(id)arg1;

@end
