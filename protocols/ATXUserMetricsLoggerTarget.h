
@protocol ATXUserMetricsLoggerTarget <NSObject>

@required

- (void)logMessage:(PBCodable *)arg1;

@end
