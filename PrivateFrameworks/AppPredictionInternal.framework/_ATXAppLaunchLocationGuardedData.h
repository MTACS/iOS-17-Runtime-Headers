
@interface _ATXAppLaunchLocationGuardedData : NSObject {
    NSDictionary * appForAllIntentsLaunchCountMap;
    NSDictionary * appIntentLaunchCountMap;
    NSDictionary * appLaunchCountMap;
    NSDictionary * intentLaunchCountMap;
    NSDictionary * totalIntentLaunchCountMap;
    NSDictionary * totalLaunchCountMap;
    id  waitForUnlockNotificationToken;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
