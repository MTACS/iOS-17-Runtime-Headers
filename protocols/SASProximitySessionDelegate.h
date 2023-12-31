
@protocol SASProximitySessionDelegate <NSObject>

@optional

- (void)finishedWithError:(NSError *)arg1;
- (void)prepareForMigrationToDevice:(NSString *)arg1;
- (void)ready;
- (void)receivedBackupAction:(SASProximityBackupAction *)arg1;
- (void)startMigration;

@end
