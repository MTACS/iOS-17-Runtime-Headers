
@interface AppStoreKitInternal.PlaybackCoordinator : NSObject {
    void isActive;
    void parentViewController;
    void playableViews;
    void playbackCoalescingWaitTime;
    void playbackWorkItem;
    void visibilityTracker;
    void visiblePlayableIds;
}

- (void).cxx_destruct;
- (void)didEnterBackground;
- (id)init;
- (void)willEnterForeground;

@end
