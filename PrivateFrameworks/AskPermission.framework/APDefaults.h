
@interface APDefaults : NSObject

+ (bool)APSDevelopmentEnvironment;
+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2;
+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2 domain:(struct __CFString { }*)arg3;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(struct __CFString { }*)arg3;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (void)_setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (id)_valueForKey:(id)arg1;
+ (id)_valueForKey:(id)arg1 domain:(struct __CFString { }*)arg2;
+ (bool)isApprover;
+ (bool)isRequester;
+ (bool)retryNotificationRegistration;
+ (void)setAPSDevelopmentEnvironment:(bool)arg1;
+ (void)setIsApprover:(bool)arg1;
+ (void)setIsRequester:(bool)arg1;
+ (void)setRetryNotificationRegistration:(bool)arg1;

@end
