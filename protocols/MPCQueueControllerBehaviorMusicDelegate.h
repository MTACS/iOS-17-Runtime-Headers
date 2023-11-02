
@protocol MPCQueueControllerBehaviorMusicDelegate <NSObject>

@required

- (void)behavior:(id <MPCQueueControllerBehaviorMusic>)arg1 didChangeActionAtQueueEnd:(long long)arg2;
- (void)behavior:(id <MPCQueueControllerBehaviorMusic>)arg1 didChangeRepeatType:(long long)arg2;
- (void)behavior:(id <MPCQueueControllerBehaviorMusic>)arg1 didChangeShuffleType:(long long)arg2;

@end
