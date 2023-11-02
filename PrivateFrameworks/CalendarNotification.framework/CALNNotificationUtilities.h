
@interface CALNNotificationUtilities : NSObject

+ (id)_pathForSentinelFile;
+ (void)createSentinelFileIfNeeded;
+ (bool)shouldBehaveAsRestart;

@end
