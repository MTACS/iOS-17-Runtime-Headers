
@interface SCWSharedPreferences : NSObject {
    NSUserDefaults * _sharedDefaults;
}

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)synchronize;

@end
