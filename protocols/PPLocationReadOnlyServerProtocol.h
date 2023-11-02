
@protocol PPLocationReadOnlyServerProtocol <PPFeedbackAccepting>

@required

- (void)locationRecordsWithQuery:(PPLocationQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)rankedLocationsWithQuery:(PPLocationQuery *)arg1 queryId:(unsigned long long)arg2;

@end
