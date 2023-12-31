
@interface IPFeatureManager : NSObject

+ (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2;
+ (void)scanEventsInMessageUnits:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)scanEventsInMessageUnits:(id)arg1 synchronously:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (void)setEventStoreForTesting:(id)arg1;

@end
