
@protocol EDSearchableIndexSchedulableDelegate <NSObject>

@required

- (long long)budgetedItemCountRemainingForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (double)budgetedTimeRemainingForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (void)didFinishIndexingBacklogForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (bool)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (void)indexingDidResumeForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (void)indexingDidSuspendForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (void)searchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1 didGenerateImportantPowerEventWithIdentifier:(NSString *)arg2 eventData:(NSDictionary *)arg3;
- (void)searchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1 didGeneratePowerEventWithIdentifier:(NSString *)arg2 eventData:(NSDictionary *)arg3;
- (void)searchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1 didIndexForTime:(double)arg2;
- (void)searchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1 didIndexItemCount:(long long)arg2;

@optional

- (void)didCancelDataSourceUpdateRequestForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;

@end
