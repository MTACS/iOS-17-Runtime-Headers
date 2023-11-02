
@interface HDAWDHealthKitAchievement : PBCodable <NSCopying> {
    int  _achievementType;
    long long  _completedDate;
    NSString * _definitionIdentifier;
    struct { 
        unsigned int completedDate : 1; 
        unsigned int value : 1; 
        unsigned int achievementType : 1; 
        unsigned int workoutActivityType : 1; 
    }  _has;
    long long  _value;
    int  _workoutActivityType;
}

@property (nonatomic) int achievementType;
@property (nonatomic) long long completedDate;
@property (nonatomic, retain) NSString *definitionIdentifier;
@property (nonatomic) bool hasAchievementType;
@property (nonatomic) bool hasCompletedDate;
@property (nonatomic, readonly) bool hasDefinitionIdentifier;
@property (nonatomic) bool hasValue;
@property (nonatomic) bool hasWorkoutActivityType;
@property (nonatomic) long long value;
@property (nonatomic) int workoutActivityType;

- (void).cxx_destruct;
- (int)StringAsAchievementType:(id)arg1;
- (int)StringAsWorkoutActivityType:(id)arg1;
- (int)achievementType;
- (id)achievementTypeAsString:(int)arg1;
- (long long)completedDate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)definitionIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAchievementType;
- (bool)hasCompletedDate;
- (bool)hasDefinitionIdentifier;
- (bool)hasValue;
- (bool)hasWorkoutActivityType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAchievementType:(int)arg1;
- (void)setCompletedDate:(long long)arg1;
- (void)setDefinitionIdentifier:(id)arg1;
- (void)setHasAchievementType:(bool)arg1;
- (void)setHasCompletedDate:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setHasWorkoutActivityType:(bool)arg1;
- (void)setValue:(long long)arg1;
- (void)setWorkoutActivityType:(int)arg1;
- (long long)value;
- (int)workoutActivityType;
- (id)workoutActivityTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end