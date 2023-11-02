
@interface AVApplicationStateMonitor : NSObject {
    id  _didEnterBackgroundNotificationToken;
    bool  _hostApplicationInForeground;
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    id  _willEnterForegroundNotificationToken;
}

@property (getter=isHostApplicationInForeground, setter=setHostApplicationInForeground:) bool hostApplicationInForeground;

+ (void)initialize;
+ (id)sharedApplicationStateMonitor;

- (void)_didEnterBackground:(id)arg1;
- (bool)_hostApplicationHasForegroundExemption;
- (void)_willEnterForeground:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isHostApplicationInForeground;
- (void)setHostApplicationInForeground:(bool)arg1;

@end
