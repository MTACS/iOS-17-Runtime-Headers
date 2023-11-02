
@interface ACHVisibilityEnvironment : NSObject {
    long long  _activityMoveMode;
    long long  _earnedInstanceCount;
    unsigned long long  _experienceType;
    bool  _isStandalonePhoneFitnessMode;
    bool  _isWheelchairUser;
    bool  _prerequisiteMet;
}

@property (nonatomic) long long activityMoveMode;
@property (nonatomic) long long earnedInstanceCount;
@property (nonatomic) unsigned long long experienceType;
@property (nonatomic) bool isStandalonePhoneFitnessMode;
@property (nonatomic) bool isWheelchairUser;
@property (nonatomic) bool prerequisiteMet;

- (long long)activityMoveMode;
- (long long)earnedInstanceCount;
- (unsigned long long)experienceType;
- (bool)isStandalonePhoneFitnessMode;
- (bool)isWheelchairUser;
- (bool)prerequisiteMet;
- (void)setActivityMoveMode:(long long)arg1;
- (void)setEarnedInstanceCount:(long long)arg1;
- (void)setExperienceType:(unsigned long long)arg1;
- (void)setIsStandalonePhoneFitnessMode:(bool)arg1;
- (void)setIsWheelchairUser:(bool)arg1;
- (void)setPrerequisiteMet:(bool)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
