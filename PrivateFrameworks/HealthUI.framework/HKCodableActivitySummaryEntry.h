
@interface HKCodableActivitySummaryEntry : PBCodable <NSCopying> {
    HKCodableQuantity * _activeEnergyBurned;
    HKCodableQuantity * _activeEnergyBurnedGoal;
    long long  _activityMoveMode;
    HKCodableQuantity * _appleExerciseTime;
    HKCodableQuantity * _appleExerciseTimeGoal;
    HKCodableQuantity * _appleMoveTime;
    HKCodableQuantity * _appleMoveTimeGoal;
    HKCodableQuantity * _appleStandHours;
    HKCodableQuantity * _appleStandHoursGoal;
    HKCodableDateComponents * _gregorianDateComponents;
    struct APPLE_HKCodableActivitySummaryEntry_1 { 
        unsigned int activityMoveMode : 1; 
    }  _has;
}

@property (nonatomic, retain) HKCodableQuantity *activeEnergyBurned;
@property (nonatomic, retain) HKCodableQuantity *activeEnergyBurnedGoal;
@property (nonatomic) long long activityMoveMode;
@property (nonatomic, retain) HKCodableQuantity *appleExerciseTime;
@property (nonatomic, retain) HKCodableQuantity *appleExerciseTimeGoal;
@property (nonatomic, retain) HKCodableQuantity *appleMoveTime;
@property (nonatomic, retain) HKCodableQuantity *appleMoveTimeGoal;
@property (nonatomic, retain) HKCodableQuantity *appleStandHours;
@property (nonatomic, retain) HKCodableQuantity *appleStandHoursGoal;
@property (nonatomic, retain) HKCodableDateComponents *gregorianDateComponents;
@property (nonatomic, readonly) bool hasActiveEnergyBurned;
@property (nonatomic, readonly) bool hasActiveEnergyBurnedGoal;
@property (nonatomic) bool hasActivityMoveMode;
@property (nonatomic, readonly) bool hasAppleExerciseTime;
@property (nonatomic, readonly) bool hasAppleExerciseTimeGoal;
@property (nonatomic, readonly) bool hasAppleMoveTime;
@property (nonatomic, readonly) bool hasAppleMoveTimeGoal;
@property (nonatomic, readonly) bool hasAppleStandHours;
@property (nonatomic, readonly) bool hasAppleStandHoursGoal;
@property (nonatomic, readonly) bool hasGregorianDateComponents;

- (void).cxx_destruct;
- (id)activeEnergyBurned;
- (id)activeEnergyBurnedGoal;
- (long long)activityMoveMode;
- (id)appleExerciseTime;
- (id)appleExerciseTimeGoal;
- (id)appleMoveTime;
- (id)appleMoveTimeGoal;
- (id)appleStandHours;
- (id)appleStandHoursGoal;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)gregorianDateComponents;
- (bool)hasActiveEnergyBurned;
- (bool)hasActiveEnergyBurnedGoal;
- (bool)hasActivityMoveMode;
- (bool)hasAppleExerciseTime;
- (bool)hasAppleExerciseTimeGoal;
- (bool)hasAppleMoveTime;
- (bool)hasAppleMoveTimeGoal;
- (bool)hasAppleStandHours;
- (bool)hasAppleStandHoursGoal;
- (bool)hasGregorianDateComponents;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveEnergyBurned:(id)arg1;
- (void)setActiveEnergyBurnedGoal:(id)arg1;
- (void)setActivityMoveMode:(long long)arg1;
- (void)setAppleExerciseTime:(id)arg1;
- (void)setAppleExerciseTimeGoal:(id)arg1;
- (void)setAppleMoveTime:(id)arg1;
- (void)setAppleMoveTimeGoal:(id)arg1;
- (void)setAppleStandHours:(id)arg1;
- (void)setAppleStandHoursGoal:(id)arg1;
- (void)setGregorianDateComponents:(id)arg1;
- (void)setHasActivityMoveMode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
