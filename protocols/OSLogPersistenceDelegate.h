
@protocol OSLogPersistenceDelegate <NSObject>

@required

- (bool)persistence:(OSLogPersistence *)arg1 results:(NSArray *)arg2 error:(NSError *)arg3;
- (void)persistenceDidFinishReadingForStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2;

@end
