
@protocol CNMetricsReporter <NSObject>

@required

- (void)logSimpleEvent:(NSString *)arg1 forApplication:(NSString *)arg2 andLog:(bool)arg3;
- (void)sendDictionary:(NSMutableDictionary *)arg1 forEvent:(NSString *)arg2 andLog:(bool)arg3;

@end
