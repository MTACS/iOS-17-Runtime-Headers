
@interface TPSPreferences : NSObject {
    NSString * _domain;
}

@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly) bool showSubscriptionList;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)domain;
- (id)init;
- (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)numberForKey:(id)arg1 defaultValue:(id)arg2;
- (id)preferencesValueForKey:(id)arg1;
- (id)preferencesValueForKey:(id)arg1 domain:(id)arg2;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2 domain:(id)arg3;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (bool)showSubscriptionList;
- (id)stringForKey:(id)arg1 defaultValue:(id)arg2;
- (unsigned long long)unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2;

@end
