
@interface HKHRAFibBurdenAnalyzer : NSObject {
    <HKHRAFibBurdenDeterminer> * _burdenDeterminer;
    HKCalendarCache * _calendarCache;
    HKHRAFibBurdenTachogramClassificationsRetriever * _classificationRetriever;
    id /* block */  _dateGenerator;
    HKHRAFibBurdenJulianDayMajorityTimeZoneDeterminer * _majorityTimeZoneDeterminer;
    HKHRAFibBurdenTachogramClassifierFactory * _tachogramClassifierFactory;
}

- (void).cxx_destruct;
- (id)_generateDayOfWeekHistogramWithTachogramClassifier:(id)arg1 error:(id*)arg2;
- (id)_generateTimeOfDayHistogramWithTachogramClassifier:(id)arg1 error:(id*)arg2;
- (id)_julianDayToTimeZoneMappingForPastSixWeeksWithError:(id*)arg1;
- (id)_logDayNameForWeekday:(long long)arg1;
- (id)generateSevenDayBurdenWithRange:(struct { long long x1; long long x2; })arg1 breadcrumbManager:(id)arg2 error:(id*)arg3;
- (id)generateSixWeekBurdenHistogramsWithError:(id*)arg1;
- (id)initWithClassificationRetriever:(id)arg1 burdenDeterminer:(id)arg2 tachogramClassifierFactory:(id)arg3 majorityTimeZoneDeterminer:(id)arg4 calendarCache:(id)arg5 dateGenerator:(id /* block */)arg6;
- (id)initWithProfile:(id)arg1;

@end
