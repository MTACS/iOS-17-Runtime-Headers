
@protocol CLKTimeFormatterObserver <NSObject>

@optional

- (void)timeFormatterReportingLiveTimeDidChange:(CLKTimeFormatter *)arg1;
- (void)timeFormatterTextDidChange:(CLKTimeFormatter *)arg1;

@end
