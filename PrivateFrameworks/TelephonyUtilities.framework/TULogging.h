
@interface TULogging : NSObject

+ (void)disablePhoneLogging;
+ (void)enablePhoneLogging;
+ (void)registerForShouldLogChangedNotification;
+ (bool)sendDirectoryToCrashReporter:(id)arg1 error:(id*)arg2;
+ (void)unregisterForShouldLogChangedNotification;

@end
