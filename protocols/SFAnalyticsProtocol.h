
@protocol SFAnalyticsProtocol <NSObject>

@required

+ (<SFAnalyticsProtocol> *)logger;

- (SFAnalyticsMultiSampler *)AddMultiSamplerForName:(void *)arg1 withTimeInterval:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 7: NSString *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDictionary *, id /* block */, void*
- (void)logResultForEvent:(NSString *)arg1 hardFailure:(bool)arg2 result:(NSError *)arg3;
- (void)logResultForEvent:(NSString *)arg1 hardFailure:(bool)arg2 result:(NSError *)arg3 withAttributes:(NSDictionary *)arg4;
- (SFAnalyticsActivityTracker *)logSystemMetricsForActivityNamed:(void *)arg1 withAction:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (SFAnalyticsActivityTracker *)startLogSystemMetricsForActivityNamed:(NSString *)arg1;

@end
