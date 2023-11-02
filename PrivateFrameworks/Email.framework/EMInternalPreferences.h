
@interface EMInternalPreferences : NSObject <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_hasUserDefaultValueForKey:(id)arg1 expectedValue:(id)arg2;
+ (bool)_preferenceEnabled:(unsigned long long)arg1;
+ (void)_registerForDefaultChanges;
+ (void)_setUserDefaultEnabled:(bool)arg1 forKey:(id)arg2;
+ (bool)_userDefaultEnabledForKey:(id)arg1 defaultValue:(bool)arg2;
+ (id)defaultForPreference:(unsigned long long)arg1;
+ (id)log;
+ (id)observeChangesForPreference:(unsigned long long)arg1 autoCancelToken:(bool)arg2 usingBlock:(id /* block */)arg3;
+ (id)observeChangesForPreference:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
+ (bool)preferenceEnabled:(unsigned long long)arg1;
+ (void)setPreference:(unsigned long long)arg1 enabled:(bool)arg2;

@end
