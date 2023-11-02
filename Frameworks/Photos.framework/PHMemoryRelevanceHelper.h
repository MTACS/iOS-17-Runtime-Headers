
@interface PHMemoryRelevanceHelper : NSObject

+ (double)_categoryScoreComponentForMemory:(id)arg1;
+ (double)_categoryWeightForMemory:(id)arg1;
+ (bool)_isDate:(id)arg1 inSameDayAndMonthAsDate:(id)arg2;
+ (bool)_isMemoryCategoryTemporal:(unsigned long long)arg1;
+ (bool)_isMemorySubcategoryTemporal:(unsigned long long)arg1;
+ (bool)_isMemoryTemporal:(id)arg1;
+ (double)_memoryTriggerTierScoreByTriggerType:(unsigned long long)arg1;
+ (double)_notificationLevelWeightForMemory:(id)arg1;
+ (double)_notificationScoreComponentForMemory:(id)arg1;
+ (double)_subcategoryWeightForMemory:(id)arg1;
+ (double)_triggerScoreComponentForMemory:(id)arg1;
+ (double)_triggerScoreForMemory:(id)arg1;
+ (bool)isMemory:(id)arg1 proactiveWorthyAtDate:(id)arg2;
+ (bool)isMemory:(id)arg1 relevantAtDate:(id)arg2;
+ (double)relevanceScoreForMemory:(id)arg1 atDate:(id)arg2;

@end
