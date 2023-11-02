
@interface PGTimeTitleUtility : NSObject

+ (bool)_canUseOverTheYearsForStartYear:(long long)arg1 endYear:(long long)arg2;
+ (id)_commonLocationLabelForLocationNodes:(id)arg1;
+ (unsigned long long)_dateIntervalFormatterTypeWithEventNodes:(id)arg1 allowedFormats:(unsigned long long)arg2;
+ (id)_dateNodesFromMomentNodes:(id)arg1 featuredYearNodes:(id)arg2 momentsLocalStartDate:(id*)arg3 momentsLocalEndDate:(id*)arg4;
+ (void)_enumerateNeighborMomentNodesOfMomentNodes:(id)arg1 usingBlock:(id /* block */)arg2;
+ (bool)_eventNodesCoverCompleteMonth:(id)arg1;
+ (bool)_eventNodesCoverCompleteYear:(id)arg1;
+ (id)_featuredDateNodesFromDateNodes:(id)arg1 featuredYearNodes:(id)arg2;
+ (bool)_hasReachedNumberVisitsPerMonth:(unsigned long long)arg1 inEvents:(id)arg2 withLocationNodes:(id)arg3 startDateNode:(id)arg4 endDateNode:(id)arg5;
+ (bool)_hasReachedNumberVisitsPerYear:(unsigned long long)arg1 inEvents:(id)arg2 withLocationNodes:(id)arg3 startDateNode:(id)arg4 endDateNode:(id)arg5;
+ (id)_locationNodesForTimeTitleFromLocationNodes:(id)arg1;
+ (bool)_momentNodes:(id)arg1 coverCompleteMonth:(bool)arg2 coverCompleteYear:(bool)arg3;
+ (id)_numberOfYearsAgoWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2;
+ (id)_splitTimeTitleWithLocalStartDate:(id)arg1 endDate:(id)arg2 startDateNode:(id)arg3 endDateNode:(id)arg4 allowedFormats:(unsigned long long)arg5 locale:(id)arg6;
+ (bool)_yearIsNeededForDisplayingDate:(id)arg1;
+ (id)numberOfYearsAgoWithMomentNodes:(id)arg1 relativeToDateComponents:(id)arg2 useOrdinal:(bool)arg3;
+ (long long)numberOfYearsFromDate:(id)arg1 toDate:(id)arg2;
+ (id)peopleTimeTitleWithEventNodes:(id)arg1;
+ (id)peopleTimeTitleWithEventNodes:(id)arg1 requireMultipleYears:(bool)arg2;
+ (id)significantDateNodesFromMomentNodes:(id)arg1 dateFormatterType:(unsigned long long)arg2;
+ (id)splitTimeTitleWithDateInterval:(id)arg1 allowedFormats:(unsigned long long)arg2;
+ (id)splitTimeTitleWithOptions:(id)arg1;
+ (id)timeTitleWithDateInterval:(id)arg1 allowedFormats:(unsigned long long)arg2;
+ (id)timeTitleWithOptions:(id)arg1;
+ (bool)yearIsNeededForDisplayingDate:(id)arg1;

@end
