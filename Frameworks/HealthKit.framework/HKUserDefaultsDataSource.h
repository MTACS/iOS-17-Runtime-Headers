
@interface HKUserDefaultsDataSource : HKObserverBridge {
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) NSUserDefaults *userDefaults;

+ (id)ageGatingDataSource;
+ (id)privacyPreferencesDataSource;
+ (id)respiratoryPreferencesDataSource;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)arg1;
- (id)makeAndRegisterBridgedObserverForKey:(id)arg1 handle:(id)arg2;
- (void)unregisterBridgedObserver:(id)arg1 forKey:(id)arg2;
- (id)userDefaults;

@end
