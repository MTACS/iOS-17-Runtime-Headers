
@interface FCSFirstGlanceAchievementEvaluator : NSObject {
    <FCSFirstGlanceAchievementEvaluatorDataSource> * _dataSource;
    NSString * _progressLocalizationKeyOverride;
    NSString * _yesterdayLocalizationKeyOverride;
}

@property (nonatomic) <FCSFirstGlanceAchievementEvaluatorDataSource> *dataSource;

- (void).cxx_destruct;
- (void)_firstAchievementFromAchievements:(id)arg1 passingMilestoneTest:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)dataSource;
- (id)evaluateYesterdayAchievements:(id)arg1 isStandaloneMode:(bool)arg2;
- (id)initWithDataSource:(id)arg1;
- (void)progressAchievementAndMilestoneWithCurrentDate:(id)arg1 calendar:(id)arg2 experienceType:(unsigned long long)arg3 isStandaloneMode:(bool)arg4 completion:(id /* block */)arg5;
- (void)progressAchievementAndMilestoneWithMonthlyChallengeAchievement:(id)arg1 achievementsMap:(id)arg2 currentDate:(id)arg3 calendar:(id)arg4 experienceType:(unsigned long long)arg5 isStandaloneMode:(bool)arg6 completion:(id /* block */)arg7;
- (id)progressLocalizationKeyForAchievement:(id)arg1 progressMilestone:(id)arg2 experienceType:(unsigned long long)arg3;
- (void)setDataSource:(id)arg1;
- (void)setLocalizationKeyOverride:(id)arg1;
- (id)yesterdayLocalizationKeyForAchievement:(id)arg1 experienceType:(unsigned long long)arg2;

@end
