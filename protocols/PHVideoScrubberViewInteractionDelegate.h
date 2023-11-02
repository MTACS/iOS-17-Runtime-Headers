
@protocol PHVideoScrubberViewInteractionDelegate <NSObject>

@optional

- (void)didBeginTouchingVideoScrubberView:(PHVideoScrubberView *)arg1;
- (void)didEndTouchingVideoScrubberView:(PHVideoScrubberView *)arg1;
- (void)videoScrubberView:(PHVideoScrubberView *)arg1 didEndDeceleratingInScrollView:(UIScrollView *)arg2;
- (void)videoScrubberView:(PHVideoScrubberView *)arg1 didEndDraggingInScrollView:(UIScrollView *)arg2;
- (void)videoScrubberView:(PHVideoScrubberView *)arg1 willBeginDeceleratingInScrollView:(UIScrollView *)arg2;
- (void)videoScrubberView:(PHVideoScrubberView *)arg1 willBeginDraggingInScrollView:(UIScrollView *)arg2;

@end
