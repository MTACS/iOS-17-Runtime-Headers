
@protocol ACMBasePreferences <NSObject>

@required

- (NSDictionary *)multiplePreferencesValuesForKeys:(NSArray *)arg1;
- (NSDictionary *)multiplePreferencesValuesForKeys:(NSArray *)arg1 withOptions:(long long)arg2;
- (<ACMPreferencesStore> *)preferencesStore;
- (id)preferencesValueForKey:(NSString *)arg1;
- (id)preferencesValueForKey:(NSString *)arg1 withOptions:(long long)arg2;
- (void)setMultiplePreferencesValues:(NSDictionary *)arg1;
- (void)setMultiplePreferencesValues:(NSDictionary *)arg1 withOptions:(long long)arg2;
- (void)setPreferencesStore:(id <ACMPreferencesStore>)arg1;
- (void)setPreferencesValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setPreferencesValue:(id)arg1 forKey:(NSString *)arg2 withOptions:(long long)arg3;

@end
