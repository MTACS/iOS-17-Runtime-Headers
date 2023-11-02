
@interface AVTCoreAnalyticsClient : NSObject <AVTCoreAnalyticsClient>

- (void)ADClientAddValueForScalarKey:(id)arg1 :(long long)arg2;
- (void)ADClientPushValueForDistributionKey:(id)arg1 :(double)arg2;
- (void)ADClientSetValueForScalarKey:(id)arg1 :(long long)arg2;
- (void)sendEventForKey:(id)arg1 payload:(id)arg2;

@end
