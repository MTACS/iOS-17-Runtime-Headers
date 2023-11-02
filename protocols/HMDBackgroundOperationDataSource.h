
@protocol HMDBackgroundOperationDataSource <NSObject>

@required

- (NSDate *)currentDate;
- (NSDate *)dateWithTimeIntervalSinceNow:(double)arg1;
- (double)timeIntervalSinceNowToDate:(NSDate *)arg1;

@end
