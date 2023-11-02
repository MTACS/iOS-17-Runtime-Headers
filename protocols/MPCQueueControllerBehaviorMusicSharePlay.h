
@protocol MPCQueueControllerBehaviorMusicSharePlay <MPCQueueControllerBehaviorMusic>

@required

- (void)endSynchronizedPlayback;
- (<MPCQueueControllerBehaviorMusicSharePlayDelegate> *)musicSharePlayBehaviorDelegate;
- (long long)queueExplicitContentState;
- (MPPropertySet *)requestedPropertySetForEvents;
- (void)setMusicSharePlayBehaviorDelegate:(id <MPCQueueControllerBehaviorMusicSharePlayDelegate>)arg1;
- (void)setRequestedPropertySetForEvents:(MPPropertySet *)arg1;
- (void)updatePlaybackCoordinator:(AVPlayerPlaybackCoordinator *)arg1;

@end
