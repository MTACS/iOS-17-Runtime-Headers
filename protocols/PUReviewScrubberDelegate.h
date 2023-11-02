
@protocol PUReviewScrubberDelegate <NSObject>

@optional

- (void)reviewScrubber:(PUReviewScrubber *)arg1 willDisplayCell:(PUReviewScrubberCell *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)reviewScrubberDidScrub:(PUReviewScrubber *)arg1;
- (void)reviewScrubberDidSelectItemAtIndexPath:(NSIndexPath *)arg1;

@end
