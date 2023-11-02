
@protocol ARReplaySensorDelegate <NSObject>

@optional

- (void)replaySensorDidFinishLoadingFrames:(unsigned long long)arg1;
- (void)replaySensorDidFinishLoadingWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2;
- (void)replaySensorDidFinishReplayingData;

@end
