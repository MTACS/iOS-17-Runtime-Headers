
@protocol AVPlayerItemOutputPullDelegate <NSObject>

@optional

- (void)outputMediaDataWillChange:(AVPlayerItemOutput *)arg1;
- (void)outputSequenceWasFlushed:(AVPlayerItemOutput *)arg1;

@end
