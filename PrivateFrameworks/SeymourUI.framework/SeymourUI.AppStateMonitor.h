
@interface SeymourUI.AppStateMonitor : _TtCs12_SwiftObject {
    void eventHub;
}

- (void)publishAppDidBecomeActive;
- (void)publishAppDidEnterBackground;
- (void)publishAppWillEnterForeground;
- (void)publishAppWillResignActive;
- (void)publishAppWillTerminate;
- (void)publishSignificantTimeChanged;

@end
