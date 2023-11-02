
@interface SBPowerDownView : SBUIPowerDownView

@property (nonatomic) <SBPowerDownViewDelegate> *powerDownDelegate;

- (void)_cancelButtonTapped;
- (void)_didTapFindMy;
- (void)_idleTimerFired;
- (void)_powerDownSliderDidBeginSlide;
- (void)_powerDownSliderDidCancelSlide;
- (void)_powerDownSliderDidCompleteSlide;
- (void)_powerDownSliderDidUpdateSlideWithValue:(double)arg1;
- (id)powerDownDelegate;
- (void)setPowerDownDelegate:(id)arg1;

@end
