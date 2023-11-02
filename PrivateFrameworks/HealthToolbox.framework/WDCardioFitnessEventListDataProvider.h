
@interface WDCardioFitnessEventListDataProvider : WDSampleListDataProvider

- (long long)cellStyle;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (double)customCellHeight;
- (double)customEstimatedCellHeight;
- (id)sampleTypes;
- (id)titleForSection:(unsigned long long)arg1;

@end
