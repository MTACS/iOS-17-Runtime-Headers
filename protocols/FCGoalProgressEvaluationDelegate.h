
@protocol FCGoalProgressEvaluationDelegate

@required

- (NSCalendar *)currentCalendar;
- (NSDate *)currentDate;
- (unsigned long long)currentExperienceType;
- (NSDate *)lastFiredDateForProgressEventIdentifier:(NSString *)arg1;

@end
