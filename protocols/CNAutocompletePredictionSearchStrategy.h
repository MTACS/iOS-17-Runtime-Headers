
@protocol CNAutocompletePredictionSearchStrategy <NSObject>

@required

- (NSString *)descriptionForLogging;
- (NSArray *)searchResultsForFetchRequest:(CNAutocompleteFetchRequest *)arg1;

@end
