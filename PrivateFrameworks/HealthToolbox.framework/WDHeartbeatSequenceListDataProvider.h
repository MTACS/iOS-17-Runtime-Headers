
@interface WDHeartbeatSequenceListDataProvider : WDSampleListDataProvider

- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(id /* block */)arg5;
- (id)predicateForType:(id)arg1;
- (id)sampleTypes;
- (id)secondaryTextForObject:(id)arg1;
- (id)textForObject:(id)arg1;
- (id)viewControllerForItemAtIndexPath:(id)arg1;

@end
