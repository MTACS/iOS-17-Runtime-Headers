
@interface HKRemoteCardioFitnessDataSource : HKQuantityTypeDataSource

- (id /* block */)_cardioFitnessUserInfoCreationBlockWithAge:(long long)arg1 biologicalSex:(long long)arg2;
- (id /* block */)_userInfoBlockWithUnitController:(id)arg1 displayType:(id)arg2;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;

@end
