
@protocol CalSearchDataSink <NSObject>

@required

- (void)calSearch:(id)arg1 foundOccurrences:(struct __CFArray { }*)arg2 cachedDays:(struct __CFArray { }*)arg3 cachedDaysIndexes:(struct __CFArray { }*)arg4;
- (void)calSearchComplete:(id)arg1;

@optional

- (void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;
- (bool)calSearchShouldStopSearching:(id)arg1;

@end
