
@interface CPSMetrics : NSObject

+ (void)_sendEvent:(id)arg1 withPayloadBuilder:(id /* block */)arg2;
+ (void)sendAppSignInSessionActivatedEvent:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; })arg1;
+ (void)sendAppSignInSessionCompletedEvent:(struct { long long x1; })arg1;
+ (void)sendLearnMorePressedEvent;
+ (void)sendProviderDeviceUsageEvent:(struct { id x1; unsigned long long x2; })arg1;
+ (void)sendStorePurchaseSessionCompletedEvent:(struct { long long x1; })arg1;
+ (void)sendSystemSessionCompletedEvent:(struct { long long x1; long long x2; })arg1;

@end
