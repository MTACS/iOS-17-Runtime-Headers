
@interface CFXApplicationState : NSObject {
    long long  _applicationState;
    bool  _isRegisteredForEvents;
}

@property (nonatomic) long long applicationState;
@property (nonatomic) bool isRegisteredForEvents;

+ (void)beginMonitoringApplicationState;
+ (id)sharedInstance;

- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (long long)applicationState;
- (void)applicationWillResignActive:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isRegisteredForEvents;
- (void)registerForEvents;
- (void)setApplicationState:(long long)arg1;
- (void)setIsRegisteredForEvents:(bool)arg1;
- (void)unregisterForEvents;

@end
