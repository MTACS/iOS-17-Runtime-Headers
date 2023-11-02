
@protocol WDDataListViewControllerDataProvider <NSObject>

@required

- (long long)cellStyle;
- (UITableViewCell *)customCellForObject:(id)arg1 indexPath:(NSIndexPath *)arg2 tableView:(UITableView *)arg3;
- (double)customCellHeight;
- (double)customEstimatedCellHeight;
- (void)customizeTableView:(UITableView *)arg1;
- (NSPredicate *)defaultQueryPredicate;
- (void)deleteAllData;
- (void)deleteObjectsAtIndexPath:(void *)arg1 healthStore:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSIndexPath *, HKHealthStore *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)hasDetailViewController;
- (id)initWithDisplayType:(HKDisplayType *)arg1 profile:(WDProfile *)arg2;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (<WDDataListDataObjectSource> *)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
- (NSString *)profileName;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(bool*)arg3;
- (NSString *)secondaryTextForObject:(id)arg1;
- (void)setDefaultQueryPredicate:(NSPredicate *)arg1;
- (void)setHasDetailViewController:(bool)arg1;
- (void)setProfileName:(NSString *)arg1;
- (void)startCollectingDataWithUpdateHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)stopCollectingData;
- (bool)textAdjustsFontSizeToFitWidth;
- (NSString *)textForObject:(id)arg1;
- (NSString *)titleForSection:(unsigned long long)arg1;
- (UIViewController *)viewControllerForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)viewControllerIsNearEndOfScreen;

@optional

- (bool)calendarDateSelectorVisible;
- (bool)canEditRowAtIndexPath:(NSIndexPath *)arg1;
- (UITableViewCell *)customLoadingCellForRowAtIndexPath:(NSIndexPath *)arg1 tableView:(UITableView *)arg2;
- (bool)hasCompleteDataSet;
- (void)viewControllerWantsDataIncludingDate:(NSDate *)arg1;

@end
