
@interface HKCumulativeSumCurrentValueDataProvider : HKValueDataProvider

- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(id /* block */)arg2;
- (id)_mostRecentValueQueryWithCompletion:(id /* block */)arg1;
- (void)_sumFromDate:(id)arg1 toDate:(id)arg2 completion:(id /* block */)arg3;
- (id)currentValue;
- (id)fetchOperationWithCompletion:(id /* block */)arg1;

@end
