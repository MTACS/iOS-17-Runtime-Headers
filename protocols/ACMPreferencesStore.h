
@protocol ACMPreferencesStore <NSObject>

@required

- (NSDictionary *)allValuesWithOptions:(long long)arg1;
- (void)cleanupOnMemoryWarning;
- (void)clearCache;
- (NSDictionary *)multiplePreferencesValuesForKeys:(NSArray *)arg1;
- (NSDictionary *)multiplePreferencesValuesForKeys:(NSArray *)arg1 withOptions:(long long)arg2;
- (id)preferencesValueForKey:(NSString *)arg1;
- (id)preferencesValueForKey:(NSString *)arg1 withOptions:(long long)arg2;
- (void)removeAllValues;
- (void)removeAllValuesWithOptions:(long long)arg1;
- (void)replaceAllValues:(NSDictionary *)arg1 withOptions:(long long)arg2;
- (void)savePreferencesIfNeeded;
- (void)setMultiplePreferencesValues:(NSDictionary *)arg1;
- (void)setMultiplePreferencesValues:(NSDictionary *)arg1 withOptions:(long long)arg2;
- (void)setPreferencesValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setPreferencesValue:(id)arg1 forKey:(NSString *)arg2 withOptions:(long long)arg3;

@end
