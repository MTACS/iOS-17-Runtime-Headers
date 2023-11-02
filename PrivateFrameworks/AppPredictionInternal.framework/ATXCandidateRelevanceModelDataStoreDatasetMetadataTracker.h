
@interface ATXCandidateRelevanceModelDataStoreDatasetMetadataTracker : NSObject {
    NSDate * _endDate;
    unsigned long long  _numberOfPositiveSamples;
    unsigned long long  _numberOfSamples;
    NSMutableSet * _seenDatesWithPositiveSamples;
    NSMutableSet * _seenDatesWithSamples;
    NSDate * _startDate;
}

+ (id)yearMonthDayComponentsForDate:(id)arg1;

- (void).cxx_destruct;
- (id)currentMetadata;
- (id)init;
- (void)observeDataPoint:(id)arg1;

@end
