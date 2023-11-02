
@protocol CEKWheelScrubberViewDelegate <NSObject>

@required

- (void)wheelScrubberView:(CEKWheelScrubberView *)arg1 updateCell:(CEKWheelScrubberViewCell *)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)wheelScrubberViewDidChangeSelectedIndex:(CEKWheelScrubberView *)arg1;

@optional

- (void)wheelScrubberViewDidEndScrolling:(CEKWheelScrubberView *)arg1;
- (void)wheelScrubberViewDidScroll:(CEKWheelScrubberView *)arg1;
- (void)wheelScrubberViewWillBeginScrolling:(CEKWheelScrubberView *)arg1;
- (void)wheelScrubberViewWillEndScrolling:(CEKWheelScrubberView *)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;

@end
