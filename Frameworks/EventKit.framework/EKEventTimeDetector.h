
@interface EKEventTimeDetector : NSObject

+ (id)dateResultsFromString:(id)arg1 referenceDate:(id)arg2;
+ (id)resultDictionaryForString:(id)arg1 referenceDate:(id)arg2;
+ (id)resultDictionaryForString:(id)arg1 referenceDate:(id)arg2 ignoreDurationForApproximateTime:(bool)arg3 preferTimes:(bool)arg4;
+ (id)stripRanges:(id)arg1 fromString:(id)arg2;

@end
