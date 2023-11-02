
@interface IPDataDetectorsFeatureExtractor : IPFeatureExtractor

- (id)featureDataComplementingFeatureData:(id)arg1 hour:(unsigned long long)arg2 minute:(unsigned long long)arg3 duration:(double)arg4;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3;
- (id)init;
- (id)newYearsEveDayDateFromReferenceDate:(id)arg1;
- (id)queue;
- (void)setTimeZone:(id)arg1 forDateFeatures:(id)arg2;
- (struct __DDScanner { }*)standardScanner;
- (void)standardizeTimezonesForDetectedFeatures:(id)arg1;
- (id)stringByReplacingDetectedDataWithNGramMarkersInString:(id)arg1;
- (bool)stringContainsNonTimeStrings:(id)arg1 aroundRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeReferencingAfternoon:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeReferencingAllDay:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeReferencingEvening:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeReferencingMorning:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeReferencingNewYearsEve:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeReferencingNextWeekEnd:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeReferencingNoon:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeReferencingThisWeekEnd:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeReferencingTomorrow:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeReferencingValentineDay:(id)arg1;
- (id)thisSaturdayDateFromReferenceDate:(id)arg1;
- (struct __DDScanner { }*)timeScanner;
- (id)tomorrowDateFromReferenceDate:(id)arg1;
- (id)valentineDayDateFromReferenceDate:(id)arg1;

@end