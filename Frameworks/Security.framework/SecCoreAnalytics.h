
@interface SecCoreAnalytics : NSObject

+ (id)appNameFromPath:(id)arg1;
+ (void)sendEvent:(id)arg1 event:(id)arg2;
+ (void)sendEventLazy:(id)arg1 builder:(id /* block */)arg2;

@end
