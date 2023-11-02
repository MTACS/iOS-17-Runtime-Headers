
@interface PlayerViewControllerBehavior : AVMusicAppBehavior {
    void delegate;
    void onGoingJumpToTimeInfo;
    void reporter;
}

- (void).cxx_destruct;
- (void)contextWillHandleUserAction:(long long)arg1;
- (id)init;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)willMoveToContext:(id)arg1;

@end
