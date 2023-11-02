
@protocol ASPeriodicUpdateRecordProvider <NSObject>

@required

- (void)periodicUpdateManager:(ASPeriodicUpdateManager *)arg1 didFailToSaveRecords:(NSArray *)arg2;
- (void)periodicUpdateManager:(ASPeriodicUpdateManager *)arg1 didSaveRecords:(NSArray *)arg2;
- (NSArray *)recordIDsToDelete;
- (NSArray *)recordsToSave;

@end
