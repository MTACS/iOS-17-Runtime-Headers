
@interface IMAppStateMonitor : NSObject {
    UIApplication * _app;
    long long  _applicationState;
    double  _backgroundTimeRemaining;
}

@property (nonatomic, retain) UIApplication *app;
@property (nonatomic) long long applicationState;
@property (nonatomic) double backgroundTimeRemaining;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)app;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationDidFinishLaunching;
- (long long)applicationState;
- (void)applicationWillResignActive;
- (double)backgroundTimeRemaining;
- (id)init;
- (void)setApp:(id)arg1;
- (void)setApplicationState:(long long)arg1;
- (void)setBackgroundTimeRemaining:(double)arg1;

@end
