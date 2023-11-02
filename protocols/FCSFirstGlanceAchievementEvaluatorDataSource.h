
@protocol FCSFirstGlanceAchievementEvaluatorDataSource <NSObject>

@required

- (void)achievementsWithNames:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)monthlyChallengeForDate:(void *)arg1 calendar:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDate *, NSCalendar *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACHAchievement *, NSError *, void*

@end
