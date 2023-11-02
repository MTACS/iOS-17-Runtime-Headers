
@protocol CNAutocompleteSuggestedResultPrioritization <NSObject>

@required

- (NSArray *)applyPriorityOrderToResults:(NSArray *)arg1 fetchRequest:(CNAutocompleteFetchRequest *)arg2 andCompletePriorityResultsPromise:(id <CNPromise>)arg3;

@end
