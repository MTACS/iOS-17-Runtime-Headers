
@interface _CNDelegateAdjustingResponsePreparer : _CNAutocompleteResponsePreparerDecorator

- (void)adjustArray:(id)arg1 byAddingResults:(id)arg2;
- (void)adjustArray:(id)arg1 byRemovingResults:(id)arg2;
- (id)prepareResults:(id)arg1;

@end
