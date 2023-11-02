
@interface iFBKUtils : NSObject

+ (void)addToHomeScreen;
+ (bool)deviceSupportsFaceID;
+ (void)exitCaptiveModeRemovingFromHomeScreen:(bool)arg1;
+ (id)getPreferencesValueforKey:(id)arg1 domain:(struct __CFString { }*)arg2;
+ (void)removeFromHomeScreen;
+ (void)setFBKVisibleInHomeScreen:(bool)arg1;
+ (void)setPreferencesValue:(id)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;

@end
