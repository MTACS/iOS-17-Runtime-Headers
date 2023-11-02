
@interface GDAnalytics : NSObject

+ (void)sendEventForProductionLazyWithEventName:(id)arg1 eventPayloadBuilder:(id /* block */)arg2;
+ (void)sendEventForProductionWithEventName:(id)arg1 prefix:(id)arg2 eventPayload:(id)arg3;

- (id)init;

@end
