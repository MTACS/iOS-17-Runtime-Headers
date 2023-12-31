
@interface CNUserDefaults : NSObject {
    <CNPrimitiveUserDefaults> * _primitiveDefaults;
    NSDictionary * _registeredDefaults;
}

@property (copy) NSDictionary *registeredDefaults;

+ (id)inMemoryPreferences;
+ (id)preferencesWithApplicationID:(id)arg1;
+ (id)standardPreferences;

- (void).cxx_destruct;
- (bool)boolForKey:(id)arg1;
- (bool)boolForKey:(id)arg1 keyExists:(bool*)arg2;
- (double)doubleForKey:(id)arg1;
- (id)initWithApplicationID:(id)arg1;
- (id)initWithPrimitiveDefaults:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (long long)integerForKey:(id)arg1 keyExists:(bool*)arg2;
- (id)objectForKey:(id)arg1;
- (bool)primitiveBoolValueForKey:(id)arg1 keyExists:(bool*)arg2;
- (id)primitiveDefaults;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(bool*)arg2;
- (id)primitiveObjectForKey:(id)arg1;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (void)registerDefaults:(id)arg1;
- (id)registeredDefaults;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (void)setRegisteredDefaults:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setupAutosync;
- (id)stringForKey:(id)arg1;
- (bool)synchronize;
- (bool)userHasOptedInToPreference:(id)arg1;
- (bool)userHasOptedOutOfPreference:(id)arg1;

@end
