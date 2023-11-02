
@interface ASVAnalytics : NSObject

+ (void)sendAnalyticsWithCategory:(id)arg1 payloadDict:(id)arg2;
+ (void)sendAnalyticsWithEvent:(unsigned long long)arg1;
+ (void)sendAnalyticsWithEvent:(unsigned long long)arg1 error:(id)arg2;
+ (void)sendAnalyticsWithEvent:(unsigned long long)arg1 payloadDict:(id)arg2;

@end
