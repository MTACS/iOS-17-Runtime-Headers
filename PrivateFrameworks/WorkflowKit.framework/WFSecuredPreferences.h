
@interface WFSecuredPreferences : NSObject {
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, copy) NSUserDefaults *userDefaults;

+ (id)standardPreferences;

- (void).cxx_destruct;
- (bool)boolForKey:(id)arg1;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)registerDefaults:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)savePreferences;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setUserDefaults:(id)arg1;
- (id)userDefaults;
- (void)userDefaultsDidChange:(id)arg1;

@end
