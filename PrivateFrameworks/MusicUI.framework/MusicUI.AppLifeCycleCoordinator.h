
@interface MusicUI.AppLifeCycleCoordinator : _TtCs12_SwiftObject {
    void intentDispatcher;
    void onApplicationDidBecomeActiveEvent;
    void onApplicationWillResignActiveEvent;
}

- (void)didBecomeActive;
- (void)didFinishLaunching;
- (void)willResignActive;

@end
