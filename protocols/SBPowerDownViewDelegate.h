
@protocol SBPowerDownViewDelegate <SBUIPowerDownViewDelegate>

@optional

- (void)powerDownView:(SBPowerDownView *)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)powerDownViewDidBeginSlide:(SBPowerDownView *)arg1;
- (void)powerDownViewDidCancelSlide:(SBPowerDownView *)arg1;
- (void)powerDownViewDidCompleteSlide:(SBPowerDownView *)arg1;
- (void)powerDownViewDidFireIdleTimer:(SBPowerDownView *)arg1;
- (void)powerDownViewDidReceiveCancelButtonAction:(SBPowerDownView *)arg1;

@end
