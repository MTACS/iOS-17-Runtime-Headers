
@interface _CNAutocompleteCoreDuetPredictionSearchStrategyTask : CNTask {
    CNContactStore * _contactStore;
    _CDPeopleSuggesterContext * _context;
    CNAutocompleteFetchRequest * _request;
    NSArray * _results;
    _CDPeopleSuggesterSettings * _settings;
    NSArray * _suggestions;
}

+ (long long)_addressTypeFromHandle:(id)arg1;
+ (void)configureContext:(id)arg1 withFetchRequest:(id)arg2;
+ (void)configureSettings:(id)arg1 withFetchRequest:(id)arg2;
+ (id)constrainMechanismsForSearchType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (long long)addressTypeForCDContact:(id)arg1;
- (void)convertResults;
- (id)initWithRequest:(id)arg1 contactStore:(id)arg2;
- (void)prepareQuery;
- (id)resultValueForCDContact:(id)arg1;
- (id)run:(id*)arg1;
- (void)runQuery;
- (id)suggesterContextForFetchRequest:(id)arg1;
- (id)suggesterSettingsForFetchRequest:(id)arg1;

@end
