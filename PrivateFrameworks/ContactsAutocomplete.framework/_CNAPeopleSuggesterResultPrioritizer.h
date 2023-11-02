
@interface _CNAPeopleSuggesterResultPrioritizer : NSObject <CNAutocompleteSuggestedResultPrioritization> {
    CNHandleStringClassifier * _handleStringClassifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)bundleIdentifierOfCurrentProcess;
+ (id)makeBundleIdentifierOfCurrentProcess;
+ (id)os_log;

- (void).cxx_destruct;
- (id)applyPriorityOrderToResults:(id)arg1 fetchRequest:(id)arg2 andCompletePriorityResultsPromise:(id)arg3;
- (id)init;
- (id)partitionCandidatesForRanking:(id)arg1 givenPrefix:(id)arg2;
- (id)partitionStewieResults:(id)arg1;
- (bool)resultIdentifierIsValidMessagesChatGuid:(id)arg1;
- (bool)resultMatchesPrefix:(id)arg1 inNameComponentsOfResult:(id)arg2;

@end
