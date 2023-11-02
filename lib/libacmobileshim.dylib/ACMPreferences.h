
@interface ACMPreferences : NSObject <ACMBasePreferences> {
    <ACMPreferencesStore> * _preferencesStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <ACMPreferencesStore> *preferencesStore;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)multiplePreferencesValuesForKeys:(id)arg1;
- (id)multiplePreferencesValuesForKeys:(id)arg1 withOptions:(long long)arg2;
- (id)preferencesStore;
- (id)preferencesValueForKey:(id)arg1;
- (id)preferencesValueForKey:(id)arg1 withOptions:(long long)arg2;
- (void)setMultiplePreferencesValues:(id)arg1;
- (void)setMultiplePreferencesValues:(id)arg1 withOptions:(long long)arg2;
- (void)setPreferencesStore:(id)arg1;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2 withOptions:(long long)arg3;

@end
