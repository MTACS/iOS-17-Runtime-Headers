
@protocol CalCalendarMigrationFailureRecorder <NSObject>

@required

- (void)recordMigrationFailure:(CalMigrationFailure *)arg1;
- (void)reportRecordedFailures;

@end
