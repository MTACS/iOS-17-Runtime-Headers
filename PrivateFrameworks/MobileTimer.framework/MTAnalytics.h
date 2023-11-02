
@interface MTAnalytics : NSObject

+ (void)incrementEventCount:(id)arg1;
+ (void)sendCriticalEvent:(id)arg1;
+ (void)submitEvent:(id)arg1 eventParameters:(id)arg2;

@end
