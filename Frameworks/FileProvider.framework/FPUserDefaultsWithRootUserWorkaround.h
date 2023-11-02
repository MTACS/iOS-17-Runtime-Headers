
@interface FPUserDefaultsWithRootUserWorkaround : NSObject {
    NSDictionary * _localUserDefaults;
    NSUserDefaults * _userDefaults;
}

+ (id)_userDefaultsSearchList;

- (void).cxx_destruct;
- (bool)boolForKey:(id)arg1;
- (id)initWithSuiteName:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)stringForKey:(id)arg1;

@end
