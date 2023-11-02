
@interface POConfigurationUtil : NSObject

+ (bool)appSSOEnabled;
+ (bool)platformSSOEnabled;
+ (bool)platformSSOEnabledForUsername:(id)arg1;
+ (id)platformSSOTriggerFile;
+ (void)updateTriggerFile;

@end
