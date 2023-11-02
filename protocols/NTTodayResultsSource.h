
@protocol NTTodayResultsSource <NSObject>

@required

- (void)fetchLatestResultsWithOperationInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: NTPBTodayResultOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NTTodayResults *, NSDictionary *, NSObject<NTTodayResultOperationFetchInfoProviding> *, NSError *, void*
- (void)fetchModuleDescriptorsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NTTodayResults *)placeholderResultsWithOperationInfo:(NTPBTodayResultOperationInfo *)arg1;

@end
