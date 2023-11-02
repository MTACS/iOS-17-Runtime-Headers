
@protocol FCGoalProgressEvent <NSObject>

@required

- (NSString *)eventIdentifier;
- (double)minimumDayDuration;
- (NSDate *)nextFireDateWithModel:(FITypicalDayActivityModel *)arg1;
- (bool)shouldFireWithTypicalDayModel:(FITypicalDayActivityModel *)arg1 evaluationDelegate:(id <FCGoalProgressEvaluationDelegate>)arg2;

@optional

- (FCCGoalProgressContent *)goalProgressContentForModel:(FITypicalDayActivityModel *)arg1;

@end
