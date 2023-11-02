
@interface WeatherUserDefaults : NSObject <WeatherPreferencesPersistence> {
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)initWithUserDefaults:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setUserDefaults:(id)arg1;
- (id)stringForKey:(id)arg1;
- (bool)synchronize;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;
- (id)userDefaults;

@end