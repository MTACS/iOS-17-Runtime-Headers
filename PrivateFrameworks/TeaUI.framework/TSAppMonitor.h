
@interface TSAppMonitor : NSObject <TSAppMonitorType> {
    void isActive;
    void isTracking;
    void onWindowDidBecomeBackgroundBlock;
    void onWindowWillBecomeForegroundBlock;
}

@property (nonatomic) bool isActive;
@property (nonatomic) bool isTracking;

- (void).cxx_destruct;
- (id)init;
- (bool)isActive;
- (bool)isTracking;
- (id)onWindowDidBecomeBackgroundWithBlock:(id /* block */)arg1;
- (id)onWindowWillBecomeForegroundWithBlock:(id /* block */)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsTracking:(bool)arg1;
- (void)triggerWithEvent:(long long)arg1;

@end
