
@protocol WRMClientDelegate

@required

- (void)setPreWarmState:(bool)arg1;
- (void)setWRMCoexMetrics:(NSDictionary *)arg1;
- (void)setWRMMetricConfig:(struct { unsigned long long x1; }*)arg1;
- (void)setWRMNotification:(struct { int x1; int x2; unsigned long long x3; BOOL x4[128]; unsigned long long x5; unsigned long long x6; }*)arg1;

@end
