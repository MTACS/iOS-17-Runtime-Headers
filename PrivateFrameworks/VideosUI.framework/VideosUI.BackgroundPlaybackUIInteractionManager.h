
@interface VideosUI.BackgroundPlaybackUIInteractionManager : NSObject {
    void backgroundMediaController;
    void firstShowcasing;
    void fullscreenTransitionHandler;
    void hostingView;
    void hostingViewController;
    void menuGestureRecognizer;
    void overridesUserInterfaceStyleWhenPlaying;
    void playbackDidStartObserver;
    void playbackDidStopObserver;
    void playbackState;
    void playbackStateChangeHandler;
    void providesFullscreenTransitionUI;
    void showcaseObserver;
    void supportsFullScreenTransition;
    void swipeUpView;
    void updateUICompletionHandler;
    void userInterfaceStyleToRestore;
}

- (void).cxx_destruct;
- (id)init;
- (void)onSwipeUp;

@end
