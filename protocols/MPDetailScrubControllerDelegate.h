
@protocol MPDetailScrubControllerDelegate <NSObject>

@optional

- (void)detailScrubController:(MPDetailScrubController *)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailScrubController:(MPDetailScrubController *)arg1 didChangeValue:(float)arg2;
- (void)detailScrubControllerDidBeginScrubbing:(MPDetailScrubController *)arg1;
- (void)detailScrubControllerDidEndScrubbing:(MPDetailScrubController *)arg1;

@end
