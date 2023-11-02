
@interface PKSpendingSummaryGenerator : NSObject

+ (id)generateSummaryOfType:(unsigned long long)arg1 startingAt:(id)arg2 withSegmentLimit:(unsigned long long)arg3;
+ (id)generateSummaryOfType:(unsigned long long)arg1 startingAt:(id)arg2 withSegmentLimit:(unsigned long long)arg3 generateBeyondCurrentDay:(bool)arg4;

@end
