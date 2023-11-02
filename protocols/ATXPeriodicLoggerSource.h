
@protocol ATXPeriodicLoggerSource <NSObject>

@required

- (NSDictionary *)getMetrics;
- (void)setEnabled:(bool)arg1;

@end
