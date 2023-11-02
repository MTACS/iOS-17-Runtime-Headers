
@interface FCPersonalizationUtilities : NSObject

+ (double)decayedDiversificationPenaltyWithInitialValue:(double)arg1 finalValue:(double)arg2 halfLife:(double)arg3 baselineAggregate:(id)arg4;
+ (id)diversifyItems:(id)arg1 withPreselectedItems:(id)arg2 limit:(unsigned long long)arg3 similarityStartExpectation:(double)arg4 similarityEndExpectation:(double)arg5 publisherDiversificationSlope:(double)arg6 publisherDiversificationYIntercept:(double)arg7;
+ (id)limitItems:(id)arg1 byHourlyFlowRate:(double)arg2 itemFilterPerPublisher:(double)arg3 timeInterval:(double)arg4;
+ (id)sortItems:(id)arg1 readonlyPersonalizationAggregateStore:(id)arg2 personalizationWhitelist:(id)arg3 configurableValues:(id)arg4 userProfile:(id)arg5;
+ (id)sortItems:(id)arg1 readonlyPersonalizationAggregateStore:(id)arg2 personalizationWhitelist:(id)arg3 configurableValues:(id)arg4 userProfile:(id)arg5 translatedTagIDs:(id)arg6 sortOptions:(long long)arg7 configurationSet:(long long)arg8;

@end
