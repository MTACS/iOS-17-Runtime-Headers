
@protocol MPCQueueControllerBehaviorMusicSharePlayDelegate <NSObject>

@required

- (void)behavior:(id <MPCQueueControllerBehaviorMusicSharePlay>)arg1 didChangeExplicitContentState:(long long)arg2;
- (void)behavior:(id <MPCQueueControllerBehaviorMusicSharePlay>)arg1 didEndSharePlaySessionWithReason:(long long)arg2;
- (void)behavior:(id <MPCQueueControllerBehaviorMusicSharePlay>)arg1 didReceiveSharedListeningEvent:(MPCSharedListeningEvent *)arg2;

@end
