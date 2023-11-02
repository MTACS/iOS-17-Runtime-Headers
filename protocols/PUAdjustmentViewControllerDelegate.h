
@protocol PUAdjustmentViewControllerDelegate <NSObject>

@required

- (void)adjustmentsViewControllerDidUpdateSelectedControl:(PUAdjustmentsViewController *)arg1;

@optional

- (void)adjustmentsViewControllerDidAppear:(PUAdjustmentsViewController *)arg1;
- (void)adjustmentsViewControllerSliderDidEndScrubbing:(PUAdjustmentsViewController *)arg1;
- (void)adjustmentsViewControllerSliderWillBeginScrubbing:(PUAdjustmentsViewController *)arg1;
- (void)adjustmentsViewControllerToolDidEndScrubbing:(PUAdjustmentsViewController *)arg1;
- (void)adjustmentsViewControllerToolWillBeginScrubbing:(PUAdjustmentsViewController *)arg1;

@end
