
@interface _CNFilteringResponsePreparer : _CNAutocompleteResponsePreparerDecorator {
    id /* block */  _filter;
}

@property (readonly, copy) id /* block */ filter;

- (void).cxx_destruct;
- (id /* block */)filter;
- (id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 filter:(id /* block */)arg3;
- (id)prepareResults:(id)arg1;

@end
