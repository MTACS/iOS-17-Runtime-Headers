
@interface NewsFeed.LayeredMediaViewDisplayStateCoordinator : _TtCs12_SwiftObject {
    void backingView;
    void isBackgrounded;
    void isEnabled;
    void lastDisplayState;
    void onChangeBlock;
    void visibilityTracking;
}

- (void)reduceMotionStatusDidChange;
- (void)sceneDidEnterBackground;
- (void)sceneWillEnterForeground;

@end
