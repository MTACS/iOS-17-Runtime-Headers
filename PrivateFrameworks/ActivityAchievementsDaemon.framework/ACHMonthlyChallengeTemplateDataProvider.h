
@interface ACHMonthlyChallengeTemplateDataProvider : NSObject {
    <ACHAchievementStoring> * _achievementStore;
    ACHActivitySummaryIterator * _activitySummaryIterator;
    ACHActivitySummaryUtility * _activitySummaryUtility;
    NSCalendar * _currentCalendar;
    NSCalendar * _currentCalendarOverride;
    NSDate * _currentDate;
    NSDate * _currentDateOverride;
    ACHEarnedInstanceStore * _earnedInstanceStore;
    HKHealthStore * _healthStore;
    NSNumber * _moveModeOverride;
    HDProfile * _profile;
    ACHTemplateStore * _templateStore;
}

@property (nonatomic) <ACHAchievementStoring> *achievementStore;
@property (nonatomic, retain) ACHActivitySummaryIterator *activitySummaryIterator;
@property (nonatomic) ACHActivitySummaryUtility *activitySummaryUtility;
@property (nonatomic, retain) NSCalendar *currentCalendar;
@property (nonatomic, retain) NSDate *currentDate;
@property (nonatomic, retain) ACHEarnedInstanceStore *earnedInstanceStore;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, readonly) bool isUsingNewAwardingSystem;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) ACHTemplateStore *templateStore;

- (void).cxx_destruct;
- (id)achievementStore;
- (id)activitySummaryIterator;
- (id)activitySummaryUtility;
- (long long)currentActivityMoveMode;
- (long long)currentActivityMoveModeWithError:(id*)arg1;
- (id)currentCalendar;
- (id)currentDate;
- (unsigned long long)currentExperienceType;
- (unsigned long long)currentExperienceTypeWithError:(id*)arg1;
- (id)earnedInstanceStore;
- (id)existingMonthlyChallengeTemplates;
- (bool)hasMinimumActiveDays;
- (bool)hasMinimumActiveDaysWithError:(id*)arg1;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 earnedInstanceStore:(id)arg2 templateStore:(id)arg3 activitySummaryIterator:(id)arg4;
- (id)initWithProfile:(id)arg1 achievementStore:(id)arg2 activitySummaryUtility:(id)arg3;
- (bool)isDate:(id)arg1 betweenStartDate:(id)arg2 andEndDate:(id)arg3;
- (bool)isUsingNewAwardingSystem;
- (bool)isWheelchairUser;
- (bool)isWheelchairUserWithError:(id*)arg1;
- (bool)monthlyChallengeExistsForMonth:(id)arg1;
- (unsigned long long)monthlyChallengeTypeForMonth:(id)arg1;
- (long long)numberOfEarnedInstancesOfTemplateWithUniqueName:(id)arg1 inDateComponentInterval:(id)arg2 withCalendar:(id)arg3 error:(id*)arg4;
- (id)profile;
- (void)setAchievementStore:(id)arg1;
- (void)setActivitySummaryIterator:(id)arg1;
- (void)setActivitySummaryUtility:(id)arg1;
- (void)setCurrentCalendar:(id)arg1;
- (void)setCurrentCalendarOverride:(id)arg1;
- (void)setCurrentDate:(id)arg1;
- (void)setCurrentDateOverride:(id)arg1;
- (void)setEarnedInstanceStore:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setMoveModeOverride:(long long)arg1;
- (void)setProfile:(id)arg1;
- (void)setTemplateStore:(id)arg1;
- (id)templateStore;

@end
