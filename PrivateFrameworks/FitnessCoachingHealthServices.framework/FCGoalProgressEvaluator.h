
@interface FCGoalProgressEvaluator : NSObject

+ (bool)_eventDidCrossScheduledThreshold:(id)arg1 withModel:(id)arg2 evaluationDelegate:(id)arg3;
+ (id)_nextFireDateForEvent:(id)arg1 model:(id)arg2;
+ (id)evaluateEvents:(id)arg1 withModel:(id)arg2 evaluationDelegate:(id)arg3;
+ (id)nextScheduledDatesByEventIdentifiersForEvents:(id)arg1 model:(id)arg2 evaluationDelegate:(id)arg3;

@end
