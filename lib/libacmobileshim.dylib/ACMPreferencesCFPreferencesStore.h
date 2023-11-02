
@interface ACMPreferencesCFPreferencesStore : NSObject <ACMPreferencesCFPreferencesBasedStore>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)preferencesStoreWithCFPreferences;

- (id)allValues;
- (id)allValuesWithOptions:(long long)arg1;
- (void)cleanupOnMemoryWarning;
- (void)clearCache;
- (id)multiplePreferencesValuesForKeys:(id)arg1;
- (id)multiplePreferencesValuesForKeys:(id)arg1 withOptions:(long long)arg2;
- (struct __CFString { }*)preferenceID;
- (id)preferencesValueForKey:(id)arg1;
- (id)preferencesValueForKey:(id)arg1 withOptions:(long long)arg2;
- (void)removeAllValues;
- (void)removeAllValuesWithOptions:(long long)arg1;
- (void)replaceAllValues:(id)arg1 withOptions:(long long)arg2;
- (void)savePreferencesIfNeeded;
- (void)setMultiplePreferencesValues:(id)arg1;
- (void)setMultiplePreferencesValues:(id)arg1 withOptions:(long long)arg2;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2 withOptions:(long long)arg3;

@end
