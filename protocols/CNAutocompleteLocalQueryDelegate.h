
@protocol CNAutocompleteLocalQueryDelegate <NSObject>

@required

- (NSArray *)autocompleteResultsForProperties:(NSArray *)arg1 fetchResults:(NSArray *)arg2 resultFactory:(CNAutocompleteResultFactory *)arg3 contactStore:(CNContactStore *)arg4;
- (NSString *)queryNameForLogging;
- (NSArray *)resultsForSearchString:(NSString *)arg1 terms:(NSArray *)arg2 properties:(NSArray *)arg3 contactStore:(CNContactStore *)arg4 error:(id*)arg5;

@end
