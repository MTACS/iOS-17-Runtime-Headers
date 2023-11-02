
@interface AMSEphemeralDefaults : NSObject

+ (bool)HARLoggingEnabled;
+ (long long)HARLoggingItemLimit;
+ (void)_accessDataStoreUsingBlock:(id /* block */)arg1;
+ (id)_propertyForKey:(id)arg1 defaultValue:(id)arg2 expectedType:(Class)arg3;
+ (void)_setProperty:(id)arg1 forKey:(id)arg2;
+ (bool)bagKeyRegistrationEnabled;
+ (bool)preferEphemeralImageLoader;
+ (bool)preferEphemeralURLSessions;
+ (bool)processAssertionsEnabled;
+ (bool)purchaseAccountFallback;
+ (void)setBagKeyRegistrationEnabled:(bool)arg1;
+ (void)setHARLoggingEnabled:(bool)arg1;
+ (void)setHARLoggingItemLimit:(long long)arg1;
+ (void)setPreferEphemeralImageLoader:(bool)arg1;
+ (void)setPreferEphemeralURLSessions:(bool)arg1;
+ (void)setProcessAssertionsEnabled:(bool)arg1;
+ (void)setPurchaseAccountFallback:(bool)arg1;
+ (void)setSuppressEngagement:(bool)arg1;
+ (bool)suppressEngagement;

@end
