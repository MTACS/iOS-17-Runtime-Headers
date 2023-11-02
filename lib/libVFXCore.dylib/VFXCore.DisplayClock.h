
@interface VFXCore.DisplayClock : _TtCs12_SwiftObject {
    void _pausedOnBackgrounding;
    void displayLink;
    void isRenderClock;
    void lock;
    void tickHandlers;
    void tickHandlersForThisFrame;
}

- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;

@end
