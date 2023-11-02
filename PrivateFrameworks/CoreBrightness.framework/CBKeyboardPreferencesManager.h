
@interface CBKeyboardPreferencesManager : NSObject {
    NSObject<OS_os_log> * _logHandle;
    NSMutableDictionary * _preferences;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)copyAllPreferences;
+ (id)copyPreferenceForKey:(id)arg1;
+ (id)copyPreferenceForKey:(id)arg1 keyboardID:(unsigned long long)arg2;
+ (bool)getBoolPreference:(bool*)arg1 forKey:(id)arg2;
+ (bool)getFloatPreference:(float*)arg1 forKey:(id)arg2;
+ (bool)getIntPreference:(int*)arg1 forKey:(id)arg2;
+ (bool)setBoolPreference:(bool)arg1 forKey:(id)arg2;
+ (bool)setFloatPreference:(float)arg1 forKey:(id)arg2;
+ (bool)setIntPreference:(int)arg1 forKey:(id)arg2;
+ (bool)setPreference:(id)arg1 forKey:(id)arg2;
+ (id)sharedInstance;

- (id)copyAllPrefereneces;
- (id)copyPreferenceForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)setPreference:(id)arg1 forKey:(id)arg2;

@end
