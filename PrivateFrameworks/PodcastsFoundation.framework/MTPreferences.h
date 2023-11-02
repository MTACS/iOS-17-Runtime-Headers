
@interface MTPreferences : NSObject

+ (bool)_copyUserDefaultToSharedContainer:(id)arg1 synchronize:(bool)arg2;
+ (bool)copySettingsToSharedContainer;
+ (long long)defaultEpisodeLimit;
+ (id)defaultSettings;
+ (void)moveUserDefaultToSharedContainer:(id)arg1;
+ (void)registerDefaults;

@end
