
@protocol MPCReportingEvent <NSObject>

@required

- (bool)isValidReportingEvent;
- (unsigned long long)reportingEventType;

@end
