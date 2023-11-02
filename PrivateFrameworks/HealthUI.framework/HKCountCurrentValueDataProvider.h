
@interface HKCountCurrentValueDataProvider : HKValueDataProvider {
    long long  _countStyle;
}

@property (nonatomic, readonly) long long countStyle;

- (id)_countAllSamplesQueryWithCompletion:(id /* block */)arg1;
- (void)_countFromDate:(id)arg1 toDate:(id)arg2 completion:(id /* block */)arg3;
- (id)_dataProviderValueForCount:(id)arg1 sampleDate:(id)arg2;
- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(id /* block */)arg2;
- (id)_mostRecentValueQueryWithCompletion:(id /* block */)arg1;
- (long long)countStyle;
- (id)currentValue;
- (id)fetchOperationWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1 updateController:(id)arg2 dateCache:(id)arg3 displayType:(id)arg4 countStyle:(long long)arg5;

@end
