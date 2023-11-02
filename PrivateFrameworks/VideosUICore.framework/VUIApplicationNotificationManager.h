
@interface VUIApplicationNotificationManager : NSObject

+ (id)sharedInstance;

- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)dealloc;
- (void)listenForApplicationNotifications;

@end
