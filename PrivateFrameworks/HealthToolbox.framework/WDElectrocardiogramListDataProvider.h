
@interface WDElectrocardiogramListDataProvider : WDSampleListDataProvider {
    long long  _mode;
    unsigned long long  _recentSampleLimit;
    bool  _shouldConsiderRequeryDueToDeletedObjects;
}

@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long recentSampleLimit;
@property (nonatomic) bool shouldConsiderRequeryDueToDeletedObjects;

- (id)_cellForSample:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 activeAlgorithmVersion:(long long)arg4;
- (id)_compactCellForSample:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 activeAlgorithmVersion:(long long)arg4;
- (id)_waveCellForSample:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 activeAlgorithmVersion:(long long)arg4;
- (id)activeECGAlgorithmVersion;
- (bool)calendarDateSelectorVisible;
- (bool)canEditRowAtIndexPath:(id)arg1;
- (long long)cellStyle;
- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(id /* block */)arg5;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (double)customCellHeight;
- (double)customEstimatedCellHeight;
- (id)customLoadingCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)customizeTableView:(id)arg1;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 mode:(long long)arg3;
- (long long)mode;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)placeholderCellAtIndexPath:(id)arg1 tableView:(id)arg2;
- (id)queryDateForSelectedDate:(id)arg1;
- (unsigned long long)recentSampleLimit;
- (void)refineSamplesWithCompletion:(id /* block */)arg1;
- (id)sampleTypes;
- (void)setMode:(long long)arg1;
- (void)setRecentSampleLimit:(unsigned long long)arg1;
- (void)setShouldConsiderRequeryDueToDeletedObjects:(bool)arg1;
- (bool)shouldConsiderRequeryDueToDeletedObjects;
- (id)textForObject:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 recoveringFromError:(bool)arg5;
- (id)viewControllerForItemAtIndexPath:(id)arg1;

@end
