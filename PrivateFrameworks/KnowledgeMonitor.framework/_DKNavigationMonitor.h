
@interface _DKNavigationMonitor : _DKMonitor {
    bool  _enabled;
    bool  _navigating;
    int  _startedToken;
    int  _stoppedToken;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool navigating;
@property (nonatomic) int startedToken;
@property (nonatomic) int stoppedToken;

+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsNavigating:(bool)arg1;

- (void)deactivate;
- (void)dealloc;
- (bool)enabled;
- (id)loadState;
- (bool)navigating;
- (void)saveState;
- (void)setEnabled:(bool)arg1;
- (void)setNavigating:(bool)arg1;
- (void)setNavigationStatus:(bool)arg1;
- (void)setStartedToken:(int)arg1;
- (void)setStoppedToken:(int)arg1;
- (void)start;
- (int)startedToken;
- (void)stop;
- (int)stoppedToken;
- (void)synchronouslyReflectCurrentValue;

@end
