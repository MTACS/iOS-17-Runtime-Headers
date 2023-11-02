
@interface _CNAutocompleteResponsePreparerDecorator : CNAutocompleteQueryResponsePreparer {
    CNAutocompleteQueryResponsePreparer * _preparer;
}

@property (readonly) CNAutocompleteQueryResponsePreparer *preparer;

- (void).cxx_destruct;
- (id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2;
- (id)prepareResults:(id)arg1;
- (id)preparer;
- (void)setMatchingPriorityResultsPromise:(id)arg1;
- (void)setPriorityResultsFuture:(id)arg1;

@end
