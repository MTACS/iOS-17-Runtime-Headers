
@interface EKAvailabilityCachedSpanRange : NSObject {
    NSMutableArray * _cachedSpans;
}

+ (id)_clampDateRangeForSpans:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

- (void).cxx_destruct;
- (long long)_currentMaxSpanTypeIn:(id)arg1;
- (bool)_rangeCompletelyCoversPeriodBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)cachedSpansFromSpans:(id)arg1;
- (id)description;
- (id)gatherFreshlyCachedSpansBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;
- (void)insertSpans:(id)arg1;
- (id)mergeSpansOfSameType:(id)arg1;
- (void)sanitizeAndInsertResults:(id)arg1 inRange:(id)arg2;
- (bool)spanType:(long long)arg1 isSimilarToSpanType:(long long)arg2;
- (id)spans;

@end
