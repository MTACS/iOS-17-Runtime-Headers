
@interface _CNAutocompletePeopleSuggesterPredictionSearchStrategyTask : CNTask {
    CNContactStore * _contactStore;
    _PSPredictionContext * _context;
    NSArray * _psResults;
    CNAutocompleteFetchRequest * _request;
    NSArray * _results;
}

+ (long long)_addressTypeFromHandle:(id)arg1;
+ (id)_fallbackIdentifierByAssemblingDistinctValuesFromGroupResultSuggestion:(id)arg1;
+ (id)_identifierForGroupResultSuggestion:(id)arg1;

- (void).cxx_destruct;
- (void)convertResults;
- (id)initWithRequest:(id)arg1 contactStore:(id)arg2;
- (void)prepareQuery;
- (id)run:(id*)arg1;
- (void)runQuery;

@end
