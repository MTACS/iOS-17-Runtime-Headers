
@interface IPSettingsUtilities : NSObject

+ (void)mirrorToWatchIfNecessary;
+ (void)runPostLanguageChangeOperationsWithNotifications:(bool)arg1;
+ (void)setLanguage:(id)arg1;
+ (void)setLanguage:(id)arg1 postNotification:(bool)arg2;
+ (void)setLanguageAndRegion:(id)arg1;
+ (void)setLanguageAndRegion:(id)arg1 postNotification:(bool)arg2;
+ (void)setRegion:(id)arg1;
+ (void)setRegion:(id)arg1 changeLanguageVariant:(bool)arg2 postNotification:(bool)arg3;
+ (void)setRegion:(id)arg1 postNotification:(bool)arg2;
+ (void)writeLanguageAndLocaleConfigurationIfNeededWithCompletion:(id /* block */)arg1;

@end
