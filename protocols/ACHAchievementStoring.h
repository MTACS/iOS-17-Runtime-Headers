
@protocol ACHAchievementStoring <NSObject>

@required

- (ACHAchievement *)achievementWithTemplateUniqueName:(NSString *)arg1;
- (NSSet *)achievementsForEarnedDateComponents:(NSDateComponents *)arg1;
- (void)addObserver:(id <ACHAchievementStoreObserving>)arg1;
- (NSSet *)allAchievements;
- (ACHAchievement *)ephemeralAchievementWithTemplateUniqueName:(NSString *)arg1;
- (void)loadAllAchievementsFromDatabaseIfNecessaryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)processAchievementProgressUpdates:(NSArray *)arg1;
- (void)recalculateProgressForAllAchievements;
- (void)removeObserver:(id <ACHAchievementStoreObserving>)arg1;
- (void)requestUpdateProgressValuesForProgressProvider:(id <ACHAchievementProgressProviding>)arg1;

@end
