
@interface _CNAPeopleSuggesterFacade : NSObject <CNAPeopleSuggesterFacade> {
    _PSSuggester * _suggester;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) _PSSuggester *suggester;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)autocompleteSearchResultsWithPredictionContext:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithPeopleSuggester:(id)arg1;
- (id)suggester;

@end
