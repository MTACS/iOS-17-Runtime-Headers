
@interface WDDocumentListDataProvider : WDSampleListDataProvider

- (long long)cellStyle;
- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(id /* block */)arg5;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (double)customCellHeight;
- (double)customEstimatedCellHeight;
- (void)refineSamplesWithCompletion:(id /* block */)arg1;
- (id)sampleTypes;
- (id)titleForSection:(unsigned long long)arg1;

@end
