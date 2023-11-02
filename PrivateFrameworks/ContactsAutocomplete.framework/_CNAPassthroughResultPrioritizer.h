
@interface _CNAPassthroughResultPrioritizer : NSObject <CNAutocompleteSuggestedResultPrioritization>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)applyPriorityOrderToResults:(id)arg1 fetchRequest:(id)arg2 andCompletePriorityResultsPromise:(id)arg3;

@end
