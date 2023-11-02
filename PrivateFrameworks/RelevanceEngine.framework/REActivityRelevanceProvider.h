
@interface REActivityRelevanceProvider : RERelevanceProvider {
    bool  _closedActiveEngergy;
    bool  _closedExerciseTime;
    bool  _closedStandHour;
}

@property (nonatomic, readonly) bool closedActiveEngergy;
@property (nonatomic, readonly) bool closedExerciseTime;
@property (nonatomic, readonly) bool closedStandHour;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (bool)closedActiveEngergy;
- (bool)closedExerciseTime;
- (bool)closedStandHour;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithActiveEnergyState:(bool)arg1 exerciseTimeState:(bool)arg2 standHourState:(bool)arg3;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
